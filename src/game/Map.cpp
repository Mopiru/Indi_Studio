/*
** EPITECH PROJECT, 2019
** IndieStudio
** File description:
** src/game/Map.cpp
*/

#include "Map.hpp"
#include "Utils.hpp"

Map::Map(irr::scene::ISceneManager *sce, int height, int size_cube, UNUSED int ratio, irr::video::ITexture *text_ground, irr::video::ITexture *text_stone, irr::video::ITexture *text_wood)
{
	std::vector<irr::scene::IMeshSceneNode *>::iterator it;

	it = cube_ground.begin();

////		 INIT CUBE FOR GROUND		////
	for (int i = 0; i != height * height; i++) {
		cube_ground.insert(it, sce->addCubeSceneNode(size_cube, 0, 10000 + i,
			irr::core::vector3df( 0, 0, 0),
			irr::core::vector3df(0, 0, 0),
			irr::core::vector3df(1.0f, 1.0f, 1.0f)));
		cube_ground.front()->setMaterialTexture(0, text_ground);
		cube_ground.front()->setMaterialFlag(irr::video::EMF_LIGHTING, false);

		it = cube_ground.begin();
	}

	float pos_y = size_cube * height / 2;
	float pos_z = -size_cube * height / 2;

	for (int i = 0; i != height * height; i++) {
		cube_ground.at(i)->setPosition(irr::core::vector3df(pos_y, -size_cube, pos_z));
		pos_z += size_cube;
		if (pos_z == size_cube * height / 2) {
			pos_z = -size_cube * height / 2;
			pos_y -= size_cube;
		}
	}


	////		 INIT CUBE FOR WOOD		////

	it = cube_wood.begin();
	int i = 0;

	pos_y = size_cube * height / 2 - size_cube;
	pos_z = size_cube * height / 2;
	pos_z -= size_cube;

	std::srand(std::time(nullptr));
	for (i = 0; i != (height - 2) * (height - 2) ; i++) {
		pos_z -= size_cube;
		if (pos_z == -size_cube * height / 2) {
			pos_z = size_cube * height / 2;
			pos_z -= size_cube * 2;
			pos_y -= size_cube;
		}
		if (std::rand() % 100 > 30) {
			if ((pos_y == size_cube * height / 2 - size_cube && pos_z == size_cube * height / 2 - size_cube * 2)
			||  (pos_y == size_cube * height / 2 - size_cube * 2 && pos_z == size_cube * height / 2 - size_cube * 2)
			||  (pos_y == size_cube * height / 2 - size_cube && pos_z == size_cube * height / 2 - size_cube * 3)

			||  (pos_y == size_cube * height / 2 - size_cube && pos_z == size_cube * height / 2 - size_cube * 12)
			||  (pos_y == size_cube * height / 2 - size_cube && pos_z == size_cube * height / 2 - size_cube * 11)
			||  (pos_y == size_cube * height / 2 - size_cube * 2 && pos_z == size_cube * height / 2 - size_cube * 12)

			||  (pos_y == size_cube * height / 2 - size_cube * 10 && pos_z == size_cube * height / 2 - size_cube * 2)
			||  (pos_y == size_cube * height / 2 - size_cube * 11 && pos_z == size_cube * height / 2 - size_cube * 2)
			||  (pos_y == size_cube * height / 2 - size_cube * 11 && pos_z == size_cube * height / 2 - size_cube * 3)

			||  (pos_y == size_cube * height / 2 - size_cube * 10 && pos_z == size_cube * height / 2 - size_cube * 12)
			||  (pos_y == size_cube * height / 2 - size_cube * 11 && pos_z == size_cube * height / 2 - size_cube * 12)
			||  (pos_y == size_cube * height / 2 - size_cube * 11 && pos_z == size_cube * height / 2 - size_cube * 11)
			){
			} else {
				cube_wood.insert(it, sce->addCubeSceneNode(size_cube, 0, 20000 + i,
					irr::core::vector3df( pos_y, 0, pos_z),
					irr::core::vector3df(0, 0, 0),
					irr::core::vector3df(0.99f, 0.99f, 0.99f)));
				cube_wood.front()->setMaterialTexture(0, text_wood);
				cube_wood.front()->setMaterialFlag(irr::video::EMF_LIGHTING, false);
				it = cube_wood.begin();
		   }
		}
	}


//		 INIT CUBE FOR WALL		////

	pos_y = -size_cube * height / 2;
	pos_z = -size_cube * height / 2;

	it = cube_stone.begin();

	for (int i = 0; i != height * 4 + ((height - 2) * (height - 2)  / 4) ; i++) {
		cube_stone.insert(it, sce->addCubeSceneNode(size_cube, 0, 30000 + i,
			irr::core::vector3df( 0, 0, 0),
			irr::core::vector3df(0, 0, 0),
			irr::core::vector3df(1.0f, 1.0f, 1.0f)));
		cube_stone.front()->setMaterialTexture(0, text_stone);
		cube_stone.front()->setMaterialFlag(irr::video::EMF_LIGHTING, false);

		it = cube_stone.begin();
	}

	pos_y += size_cube;
	i = 0;

	for (; i != height * 2; i++) {
		cube_stone.at(i)->setPosition(irr::core::vector3df(pos_y, 0, pos_z));
		pos_z += size_cube;
		if (pos_z == size_cube * height / 2) {
			pos_z = -size_cube * height / 2;
			pos_y = size_cube * height / 2;
		}
	}
	for (; i != height * 4; i++) {
		cube_stone.at(i)->setPosition(irr::core::vector3df(pos_y, 0, pos_z));
		pos_y -= size_cube;
		if (pos_y == -size_cube * height / 2) {
			pos_z = size_cube * height / 2;
			pos_z -= size_cube;
			pos_y = size_cube * height / 2;
		}
	}
	pos_y = size_cube * height / 2;
	pos_y -= size_cube;
	pos_y -= size_cube;
	pos_z = size_cube * height / 2;
	pos_z -= size_cube * 3;

	int check = 1;

	for (; i != height * 4 + ((height - 2) * (height - 2) / 4); i++) {
		cube_stone.at(i)->setPosition(irr::core::vector3df(pos_y, 0, pos_z));
		pos_z -= size_cube * 2;
		if (check % ((height - 2) / 2) == 0) {
			pos_y -= 2 * size_cube;
			pos_z = size_cube * height / 2;
			pos_z -= size_cube * 3;
		}
		check ++;
	}
}

std::vector<irr::scene::IMeshSceneNode *>   Map::getCubeVector(std::string cubeType) const
{
	if (cubeType.compare("ground") == 0) {
		// std::cout << "Cube ground" << std::endl;
		return cube_ground;
	}
	if (cubeType.compare("stone") == 0) {
		// std::cout << "Cube stone" << std::endl;
		return cube_stone;
	}
	if (cubeType.compare("wood") == 0) {
		// std::cout << "Cube wood" << std::endl;
		return cube_wood;
	}
	return std::vector<irr::scene::IMeshSceneNode *>();
}

void Map::setPlayerCollision(
	irr::scene::ISceneManager *scene,
	irr::scene::IAnimatedMeshSceneNode *playerNode,
	std::string objType) const
{
	std::vector<irr::scene::IMeshSceneNode *> cubeList;
	if (objType.compare("wall") == 0)
		cubeList = cube_stone;
	else if (objType.compare("wood") == 0)
		cubeList = cube_wood;
	if (cubeList.size() != 0) {
		irr::scene::ITriangleSelector* selector1;
		irr::scene::ISceneNodeAnimator* anim2;
		for (irr::u32 i = 0; i != cubeList.size(); ++i) {
			selector1 = scene->createTriangleSelectorFromBoundingBox(cubeList[i]);
			cubeList[i]->setTriangleSelector(selector1);
			selector1->drop();
			anim2 = scene->createCollisionResponseAnimator(
				selector1,
				playerNode,
				irr::core::vector3df(15, 50, 15),
				irr::core::vector3df(0, 0, 0),
				irr::core::vector3df(0, 50, 0),
				100.0f
			);
			playerNode->addAnimator(anim2);
			anim2->drop();
		}
	}
}

void Map::clear(void)
{
	for (irr::scene::IMeshSceneNode *mesh : cube_ground)
		mesh->remove();
	for (irr::scene::IMeshSceneNode *mesh : cube_stone)
		mesh->remove();
	for (irr::scene::IMeshSceneNode *mesh : cube_wood)
		mesh->remove();
}
