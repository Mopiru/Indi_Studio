/*
** EPITECH PROJECT, 2019
** IndieStudio
** File description:
** src/game/Alphabet.hpp
*/

#include "Alphabet.hpp"

LetterA::LetterA(irr::core::vector3df pos, irr::scene::ISceneManager *scene, int inter, int size, irr::video::ITexture *text)
{
	scale = 1.0;
	int cube = inter + size;

	cube71 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z - cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube72 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3 , pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube61 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z - cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube62 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube51 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube, pos.X, pos.Z - cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube52 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube, pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube41 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z - cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube42 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube43 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z - cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube44 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube45 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z + cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube46 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube31 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube, pos.X, pos.Z - cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube32 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube, pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube21 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 2, pos.X, pos.Z - cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube22 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 2, pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube11 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube12 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z - cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube13 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z ), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube14 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z + cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));

	cube71->setMaterialTexture(0,text);
	cube72->setMaterialTexture(0,text);
	cube61->setMaterialTexture(0,text);
	cube62->setMaterialTexture(0,text);
	cube51->setMaterialTexture(0,text);
	cube52->setMaterialTexture(0,text);
	cube41->setMaterialTexture(0,text);
	cube42->setMaterialTexture(0,text);
	cube43->setMaterialTexture(0,text);
	cube44->setMaterialTexture(0,text);
	cube45->setMaterialTexture(0,text);
	cube46->setMaterialTexture(0,text);
	cube31->setMaterialTexture(0,text);
	cube32->setMaterialTexture(0,text);
	cube21->setMaterialTexture(0,text);
	cube22->setMaterialTexture(0,text);
	cube11->setMaterialTexture(0,text);
	cube12->setMaterialTexture(0,text);
	cube13->setMaterialTexture(0,text);
	cube14->setMaterialTexture(0,text);
}

void LetterA::animate(float max, float min, float diff)
{
	if (up == true) {
		scale += diff;
		if (scale >= max) {
			up = false;
		}
	} else if (up == false) {
		scale -= diff;
		if (scale <= min) {
			up = true;
		}
	}
	cube71->setScale(irr::core::vector3df(scale, scale, scale));
	cube72->setScale(irr::core::vector3df(scale, scale, scale));
	cube61->setScale(irr::core::vector3df(scale, scale, scale));
	cube62->setScale(irr::core::vector3df(scale, scale, scale));
	cube51->setScale(irr::core::vector3df(scale, scale, scale));
	cube52->setScale(irr::core::vector3df(scale, scale, scale));
	cube41->setScale(irr::core::vector3df(scale, scale, scale));
	cube42->setScale(irr::core::vector3df(scale, scale, scale));
	cube43->setScale(irr::core::vector3df(scale, scale, scale));
	cube44->setScale(irr::core::vector3df(scale, scale, scale));
	cube45->setScale(irr::core::vector3df(scale, scale, scale));
	cube46->setScale(irr::core::vector3df(scale, scale, scale));
	cube31->setScale(irr::core::vector3df(scale, scale, scale));
	cube32->setScale(irr::core::vector3df(scale, scale, scale));
	cube21->setScale(irr::core::vector3df(scale, scale, scale));
	cube22->setScale(irr::core::vector3df(scale, scale, scale));
	cube11->setScale(irr::core::vector3df(scale, scale, scale));
	cube12->setScale(irr::core::vector3df(scale, scale, scale));
	cube13->setScale(irr::core::vector3df(scale, scale, scale));
	cube14->setScale(irr::core::vector3df(scale, scale, scale));
}

void LetterA::setScale(float scale)
{
	cube71->setScale(irr::core::vector3df(scale, scale, scale));
	cube72->setScale(irr::core::vector3df(scale, scale, scale));
	cube61->setScale(irr::core::vector3df(scale, scale, scale));
	cube62->setScale(irr::core::vector3df(scale, scale, scale));
	cube51->setScale(irr::core::vector3df(scale, scale, scale));
	cube52->setScale(irr::core::vector3df(scale, scale, scale));
	cube41->setScale(irr::core::vector3df(scale, scale, scale));
	cube42->setScale(irr::core::vector3df(scale, scale, scale));
	cube43->setScale(irr::core::vector3df(scale, scale, scale));
	cube44->setScale(irr::core::vector3df(scale, scale, scale));
	cube45->setScale(irr::core::vector3df(scale, scale, scale));
	cube46->setScale(irr::core::vector3df(scale, scale, scale));
	cube31->setScale(irr::core::vector3df(scale, scale, scale));
	cube32->setScale(irr::core::vector3df(scale, scale, scale));
	cube21->setScale(irr::core::vector3df(scale, scale, scale));
	cube22->setScale(irr::core::vector3df(scale, scale, scale));
	cube11->setScale(irr::core::vector3df(scale, scale, scale));
	cube12->setScale(irr::core::vector3df(scale, scale, scale));
	cube13->setScale(irr::core::vector3df(scale, scale, scale));
	cube14->setScale(irr::core::vector3df(scale, scale, scale));
}

LetterB::LetterB(irr::core::vector3df pos, irr::scene::ISceneManager *scene, int inter, int size, irr::video::ITexture *text)
{
	scale = 1.0;
	int cube = inter + size;

	cube72 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z - cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube73 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube74 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z + cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube75 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube76 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube61 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube66 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube51 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube56 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube42 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z - cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube43 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube44 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z + cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube45 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube46 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube31 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube36 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube21 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 2, pos.X, pos.Z - cube  * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube26 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 2, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube12 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z - cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube13 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube14 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z + cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube15 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube16 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));

	cube72->setMaterialTexture(0,text);
	cube73->setMaterialTexture(0,text);
	cube74->setMaterialTexture(0,text);
	cube75->setMaterialTexture(0,text);
	cube76->setMaterialTexture(0,text);
	cube61->setMaterialTexture(0,text);
	cube66->setMaterialTexture(0,text);
	cube51->setMaterialTexture(0,text);
	cube56->setMaterialTexture(0,text);
	cube42->setMaterialTexture(0,text);
	cube43->setMaterialTexture(0,text);
	cube44->setMaterialTexture(0,text);
	cube45->setMaterialTexture(0,text);
	cube46->setMaterialTexture(0,text);
	cube31->setMaterialTexture(0,text);
	cube36->setMaterialTexture(0,text);
	cube21->setMaterialTexture(0,text);
	cube26->setMaterialTexture(0,text);
	cube12->setMaterialTexture(0,text);
	cube13->setMaterialTexture(0,text);
	cube14->setMaterialTexture(0,text);
	cube15->setMaterialTexture(0,text);
	cube16->setMaterialTexture(0,text);
}

void LetterB::animate(float max, float min, float diff)
{
	if (up == true) {
		scale += diff;
		if (scale >= max) {
			up = false;
		}
	} else if (up == false) {
		scale -= diff;
		if (scale <= min) {
			up = true;
		}
	}
	cube72->setScale(irr::core::vector3df(scale, scale, scale));
	cube73->setScale(irr::core::vector3df(scale, scale, scale));
	cube74->setScale(irr::core::vector3df(scale, scale, scale));
	cube75->setScale(irr::core::vector3df(scale, scale, scale));
	cube76->setScale(irr::core::vector3df(scale, scale, scale));
	cube61->setScale(irr::core::vector3df(scale, scale, scale));
	cube66->setScale(irr::core::vector3df(scale, scale, scale));
	cube51->setScale(irr::core::vector3df(scale, scale, scale));
	cube56->setScale(irr::core::vector3df(scale, scale, scale));
	cube42->setScale(irr::core::vector3df(scale, scale, scale));
	cube43->setScale(irr::core::vector3df(scale, scale, scale));
	cube44->setScale(irr::core::vector3df(scale, scale, scale));
	cube45->setScale(irr::core::vector3df(scale, scale, scale));
	cube46->setScale(irr::core::vector3df(scale, scale, scale));
	cube31->setScale(irr::core::vector3df(scale, scale, scale));
	cube36->setScale(irr::core::vector3df(scale, scale, scale));
	cube21->setScale(irr::core::vector3df(scale, scale, scale));
	cube26->setScale(irr::core::vector3df(scale, scale, scale));
	cube12->setScale(irr::core::vector3df(scale, scale, scale));
	cube13->setScale(irr::core::vector3df(scale, scale, scale));
	cube14->setScale(irr::core::vector3df(scale, scale, scale));
	cube15->setScale(irr::core::vector3df(scale, scale, scale));
	cube16->setScale(irr::core::vector3df(scale, scale, scale));
}

void LetterB::setScale(float scale)
{
	cube72->setScale(irr::core::vector3df(scale, scale, scale));
	cube73->setScale(irr::core::vector3df(scale, scale, scale));
	cube74->setScale(irr::core::vector3df(scale, scale, scale));
	cube75->setScale(irr::core::vector3df(scale, scale, scale));
	cube76->setScale(irr::core::vector3df(scale, scale, scale));
	cube61->setScale(irr::core::vector3df(scale, scale, scale));
	cube66->setScale(irr::core::vector3df(scale, scale, scale));
	cube51->setScale(irr::core::vector3df(scale, scale, scale));
	cube56->setScale(irr::core::vector3df(scale, scale, scale));
	cube42->setScale(irr::core::vector3df(scale, scale, scale));
	cube43->setScale(irr::core::vector3df(scale, scale, scale));
	cube44->setScale(irr::core::vector3df(scale, scale, scale));
	cube45->setScale(irr::core::vector3df(scale, scale, scale));
	cube46->setScale(irr::core::vector3df(scale, scale, scale));
	cube31->setScale(irr::core::vector3df(scale, scale, scale));
	cube36->setScale(irr::core::vector3df(scale, scale, scale));
	cube21->setScale(irr::core::vector3df(scale, scale, scale));
	cube26->setScale(irr::core::vector3df(scale, scale, scale));
	cube12->setScale(irr::core::vector3df(scale, scale, scale));
	cube13->setScale(irr::core::vector3df(scale, scale, scale));
	cube14->setScale(irr::core::vector3df(scale, scale, scale));
	cube15->setScale(irr::core::vector3df(scale, scale, scale));
	cube16->setScale(irr::core::vector3df(scale, scale, scale));
}

LetterC::LetterC(irr::core::vector3df pos, irr::scene::ISceneManager *scene, int inter, int size, irr::video::ITexture *text)
{
	scale = 1.0;
	int cube = inter + size;

	cube72 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z - cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube73 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube74 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z + cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube75 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube61 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube66 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube56 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube46 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube36 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube21 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 2, pos.X, pos.Z - cube  * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube26 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 2, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube12 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z - cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube13 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube14 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z + cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube15 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));

	cube72->setMaterialTexture(0,text);
	cube73->setMaterialTexture(0,text);
	cube74->setMaterialTexture(0,text);
	cube75->setMaterialTexture(0,text);
	cube61->setMaterialTexture(0,text);
	cube66->setMaterialTexture(0,text);
	cube56->setMaterialTexture(0,text);
	cube46->setMaterialTexture(0,text);
	cube36->setMaterialTexture(0,text);
	cube21->setMaterialTexture(0,text);
	cube26->setMaterialTexture(0,text);
	cube12->setMaterialTexture(0,text);
	cube13->setMaterialTexture(0,text);
	cube14->setMaterialTexture(0,text);
	cube15->setMaterialTexture(0,text);
}

void LetterC::animate(float max, float min, float diff)
{
	if (up == true) {
		scale += diff;
		if (scale >= max) {
			up = false;
		}
	} else if (up == false) {
		scale -= diff;
		if (scale <= min) {
			up = true;
		}
	}
	cube72->setScale(irr::core::vector3df(scale, scale, scale));
	cube73->setScale(irr::core::vector3df(scale, scale, scale));
	cube74->setScale(irr::core::vector3df(scale, scale, scale));
	cube75->setScale(irr::core::vector3df(scale, scale, scale));
	cube61->setScale(irr::core::vector3df(scale, scale, scale));
	cube66->setScale(irr::core::vector3df(scale, scale, scale));
	cube56->setScale(irr::core::vector3df(scale, scale, scale));
	cube46->setScale(irr::core::vector3df(scale, scale, scale));
	cube36->setScale(irr::core::vector3df(scale, scale, scale));
	cube21->setScale(irr::core::vector3df(scale, scale, scale));
	cube26->setScale(irr::core::vector3df(scale, scale, scale));
	cube12->setScale(irr::core::vector3df(scale, scale, scale));
	cube13->setScale(irr::core::vector3df(scale, scale, scale));
	cube14->setScale(irr::core::vector3df(scale, scale, scale));
	cube15->setScale(irr::core::vector3df(scale, scale, scale));
}

void LetterC::setScale(float scale)
{
	cube72->setScale(irr::core::vector3df(scale, scale, scale));
	cube73->setScale(irr::core::vector3df(scale, scale, scale));
	cube74->setScale(irr::core::vector3df(scale, scale, scale));
	cube75->setScale(irr::core::vector3df(scale, scale, scale));
	cube61->setScale(irr::core::vector3df(scale, scale, scale));
	cube66->setScale(irr::core::vector3df(scale, scale, scale));
	cube56->setScale(irr::core::vector3df(scale, scale, scale));
	cube46->setScale(irr::core::vector3df(scale, scale, scale));
	cube36->setScale(irr::core::vector3df(scale, scale, scale));
	cube21->setScale(irr::core::vector3df(scale, scale, scale));
	cube26->setScale(irr::core::vector3df(scale, scale, scale));
	cube12->setScale(irr::core::vector3df(scale, scale, scale));
	cube13->setScale(irr::core::vector3df(scale, scale, scale));
	cube14->setScale(irr::core::vector3df(scale, scale, scale));
	cube15->setScale(irr::core::vector3df(scale, scale, scale));
}

LetterD::LetterD(irr::core::vector3df pos, irr::scene::ISceneManager *scene, int inter, int size, irr::video::ITexture *text)
{
	scale = 1.0;
	int cube = inter + size;

	cube72 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z - cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube73 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube74 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z + cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube75 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube76 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube61 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube66 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube51 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube56 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube41 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube46 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube31 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube36 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube21 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 2, pos.X, pos.Z - cube  * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube26 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 2, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube12 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z - cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube13 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube14 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z + cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube15 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube16 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));

	cube72->setMaterialTexture(0,text);
	cube73->setMaterialTexture(0,text);
	cube74->setMaterialTexture(0,text);
	cube75->setMaterialTexture(0,text);
	cube76->setMaterialTexture(0,text);
	cube61->setMaterialTexture(0,text);
	cube66->setMaterialTexture(0,text);
	cube51->setMaterialTexture(0,text);
	cube56->setMaterialTexture(0,text);
	cube41->setMaterialTexture(0,text);
	cube46->setMaterialTexture(0,text);
	cube31->setMaterialTexture(0,text);
	cube36->setMaterialTexture(0,text);
	cube21->setMaterialTexture(0,text);
	cube26->setMaterialTexture(0,text);
	cube12->setMaterialTexture(0,text);
	cube13->setMaterialTexture(0,text);
	cube14->setMaterialTexture(0,text);
	cube15->setMaterialTexture(0,text);
	cube16->setMaterialTexture(0,text);
}

void LetterD::animate(float max, float min, float diff)
{
	if (up == true) {
		scale += diff;
		if (scale >= max) {
			up = false;
		}
	} else if (up == false) {
		scale -= diff;
		if (scale <= min) {
			up = true;
		}
	}
	cube72->setScale(irr::core::vector3df(scale, scale, scale));
	cube73->setScale(irr::core::vector3df(scale, scale, scale));
	cube74->setScale(irr::core::vector3df(scale, scale, scale));
	cube75->setScale(irr::core::vector3df(scale, scale, scale));
	cube76->setScale(irr::core::vector3df(scale, scale, scale));
	cube61->setScale(irr::core::vector3df(scale, scale, scale));
	cube66->setScale(irr::core::vector3df(scale, scale, scale));
	cube51->setScale(irr::core::vector3df(scale, scale, scale));
	cube56->setScale(irr::core::vector3df(scale, scale, scale));
	cube41->setScale(irr::core::vector3df(scale, scale, scale));
	cube46->setScale(irr::core::vector3df(scale, scale, scale));
	cube31->setScale(irr::core::vector3df(scale, scale, scale));
	cube36->setScale(irr::core::vector3df(scale, scale, scale));
	cube21->setScale(irr::core::vector3df(scale, scale, scale));
	cube26->setScale(irr::core::vector3df(scale, scale, scale));
	cube12->setScale(irr::core::vector3df(scale, scale, scale));
	cube13->setScale(irr::core::vector3df(scale, scale, scale));
	cube14->setScale(irr::core::vector3df(scale, scale, scale));
	cube15->setScale(irr::core::vector3df(scale, scale, scale));
	cube16->setScale(irr::core::vector3df(scale, scale, scale));
}
void LetterD::setScale(float scale)
{
	cube72->setScale(irr::core::vector3df(scale, scale, scale));
	cube73->setScale(irr::core::vector3df(scale, scale, scale));
	cube74->setScale(irr::core::vector3df(scale, scale, scale));
	cube75->setScale(irr::core::vector3df(scale, scale, scale));
	cube76->setScale(irr::core::vector3df(scale, scale, scale));
	cube61->setScale(irr::core::vector3df(scale, scale, scale));
	cube66->setScale(irr::core::vector3df(scale, scale, scale));
	cube51->setScale(irr::core::vector3df(scale, scale, scale));
	cube56->setScale(irr::core::vector3df(scale, scale, scale));
	cube41->setScale(irr::core::vector3df(scale, scale, scale));
	cube46->setScale(irr::core::vector3df(scale, scale, scale));
	cube31->setScale(irr::core::vector3df(scale, scale, scale));
	cube36->setScale(irr::core::vector3df(scale, scale, scale));
	cube21->setScale(irr::core::vector3df(scale, scale, scale));
	cube26->setScale(irr::core::vector3df(scale, scale, scale));
	cube12->setScale(irr::core::vector3df(scale, scale, scale));
	cube13->setScale(irr::core::vector3df(scale, scale, scale));
	cube14->setScale(irr::core::vector3df(scale, scale, scale));
	cube15->setScale(irr::core::vector3df(scale, scale, scale));
	cube16->setScale(irr::core::vector3df(scale, scale, scale));
}

LetterE::LetterE(irr::core::vector3df pos, irr::scene::ISceneManager *scene, int inter, int size, irr::video::ITexture *text)
{
	scale = 1.0;
	int cube = inter + size;

	cube71 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube72 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z - cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube73 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube74 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z + cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube75 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube66 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube56 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube42 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z - cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube43 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube44 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z + cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube45 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube46 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube36 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube26 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 2, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube11 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube12 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z - cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube13 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube14 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z + cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube15 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));

	cube71->setMaterialTexture(0,text);
	cube72->setMaterialTexture(0,text);
	cube73->setMaterialTexture(0,text);
	cube74->setMaterialTexture(0,text);
	cube75->setMaterialTexture(0,text);
	cube66->setMaterialTexture(0,text);
	cube56->setMaterialTexture(0,text);
	cube42->setMaterialTexture(0,text);
	cube43->setMaterialTexture(0,text);
	cube44->setMaterialTexture(0,text);
	cube45->setMaterialTexture(0,text);
	cube46->setMaterialTexture(0,text);
	cube36->setMaterialTexture(0,text);
	cube26->setMaterialTexture(0,text);
	cube11->setMaterialTexture(0,text);
	cube12->setMaterialTexture(0,text);
	cube13->setMaterialTexture(0,text);
	cube14->setMaterialTexture(0,text);
	cube15->setMaterialTexture(0,text);
}

void LetterE::animate(float max, float min, float diff)
{
	if (up == true) {
		scale += diff;
		if (scale >= max) {
			up = false;
		}
	} else if (up == false) {
		scale -= diff;
		if (scale <= min) {
			up = true;
		}
	}
	cube71->setScale(irr::core::vector3df(scale, scale, scale));
	cube72->setScale(irr::core::vector3df(scale, scale, scale));
	cube73->setScale(irr::core::vector3df(scale, scale, scale));
	cube74->setScale(irr::core::vector3df(scale, scale, scale));
	cube75->setScale(irr::core::vector3df(scale, scale, scale));
	cube66->setScale(irr::core::vector3df(scale, scale, scale));
	cube56->setScale(irr::core::vector3df(scale, scale, scale));
	cube42->setScale(irr::core::vector3df(scale, scale, scale));
	cube43->setScale(irr::core::vector3df(scale, scale, scale));
	cube44->setScale(irr::core::vector3df(scale, scale, scale));
	cube45->setScale(irr::core::vector3df(scale, scale, scale));
	cube46->setScale(irr::core::vector3df(scale, scale, scale));
	cube36->setScale(irr::core::vector3df(scale, scale, scale));
	cube26->setScale(irr::core::vector3df(scale, scale, scale));
	cube11->setScale(irr::core::vector3df(scale, scale, scale));
	cube12->setScale(irr::core::vector3df(scale, scale, scale));
	cube13->setScale(irr::core::vector3df(scale, scale, scale));
	cube14->setScale(irr::core::vector3df(scale, scale, scale));
	cube15->setScale(irr::core::vector3df(scale, scale, scale));
}

void LetterE::setScale(float scale)
{
	cube71->setScale(irr::core::vector3df(scale, scale, scale));
	cube72->setScale(irr::core::vector3df(scale, scale, scale));
	cube73->setScale(irr::core::vector3df(scale, scale, scale));
	cube74->setScale(irr::core::vector3df(scale, scale, scale));
	cube75->setScale(irr::core::vector3df(scale, scale, scale));
	cube66->setScale(irr::core::vector3df(scale, scale, scale));
	cube56->setScale(irr::core::vector3df(scale, scale, scale));
	cube42->setScale(irr::core::vector3df(scale, scale, scale));
	cube43->setScale(irr::core::vector3df(scale, scale, scale));
	cube44->setScale(irr::core::vector3df(scale, scale, scale));
	cube45->setScale(irr::core::vector3df(scale, scale, scale));
	cube46->setScale(irr::core::vector3df(scale, scale, scale));
	cube36->setScale(irr::core::vector3df(scale, scale, scale));
	cube26->setScale(irr::core::vector3df(scale, scale, scale));
	cube11->setScale(irr::core::vector3df(scale, scale, scale));
	cube12->setScale(irr::core::vector3df(scale, scale, scale));
	cube13->setScale(irr::core::vector3df(scale, scale, scale));
	cube14->setScale(irr::core::vector3df(scale, scale, scale));
	cube15->setScale(irr::core::vector3df(scale, scale, scale));
}

LetterF::LetterF(irr::core::vector3df pos, irr::scene::ISceneManager *scene, int inter, int size, irr::video::ITexture *text)
{
	scale = 1.0;
	int cube = inter + size;

	cube76 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube66 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube56 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube42 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z - cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube43 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube44 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z + cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube45 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube46 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube36 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube26 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 2, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube11 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube12 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z - cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube13 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube14 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z + cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube15 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));

	cube76->setMaterialTexture(0,text);
	cube66->setMaterialTexture(0,text);
	cube56->setMaterialTexture(0,text);
	cube42->setMaterialTexture(0,text);
	cube43->setMaterialTexture(0,text);
	cube44->setMaterialTexture(0,text);
	cube45->setMaterialTexture(0,text);
	cube46->setMaterialTexture(0,text);
	cube36->setMaterialTexture(0,text);
	cube26->setMaterialTexture(0,text);
	cube15->setMaterialTexture(0,text);
	cube14->setMaterialTexture(0,text);
	cube13->setMaterialTexture(0,text);
	cube12->setMaterialTexture(0,text);
	cube11->setMaterialTexture(0,text);
}

void LetterF::animate(float max, float min, float diff)
{
	if (up == true) {
		scale += diff;
		if (scale >= max) {
			up = false;
		}
	} else if (up == false) {
		scale -= diff;
		if (scale <= min) {
			up = true;
		}
	}
	cube76->setScale(irr::core::vector3df(scale, scale, scale));
	cube66->setScale(irr::core::vector3df(scale, scale, scale));
	cube56->setScale(irr::core::vector3df(scale, scale, scale));
	cube42->setScale(irr::core::vector3df(scale, scale, scale));
	cube43->setScale(irr::core::vector3df(scale, scale, scale));
	cube44->setScale(irr::core::vector3df(scale, scale, scale));
	cube45->setScale(irr::core::vector3df(scale, scale, scale));
	cube46->setScale(irr::core::vector3df(scale, scale, scale));
	cube36->setScale(irr::core::vector3df(scale, scale, scale));
	cube26->setScale(irr::core::vector3df(scale, scale, scale));
	cube11->setScale(irr::core::vector3df(scale, scale, scale));
	cube12->setScale(irr::core::vector3df(scale, scale, scale));
	cube13->setScale(irr::core::vector3df(scale, scale, scale));
	cube14->setScale(irr::core::vector3df(scale, scale, scale));
	cube15->setScale(irr::core::vector3df(scale, scale, scale));
}

void LetterF::setScale(float scale)
{
	cube76->setScale(irr::core::vector3df(scale, scale, scale));
	cube66->setScale(irr::core::vector3df(scale, scale, scale));
	cube56->setScale(irr::core::vector3df(scale, scale, scale));
	cube42->setScale(irr::core::vector3df(scale, scale, scale));
	cube43->setScale(irr::core::vector3df(scale, scale, scale));
	cube44->setScale(irr::core::vector3df(scale, scale, scale));
	cube45->setScale(irr::core::vector3df(scale, scale, scale));
	cube46->setScale(irr::core::vector3df(scale, scale, scale));
	cube36->setScale(irr::core::vector3df(scale, scale, scale));
	cube26->setScale(irr::core::vector3df(scale, scale, scale));
	cube11->setScale(irr::core::vector3df(scale, scale, scale));
	cube12->setScale(irr::core::vector3df(scale, scale, scale));
	cube13->setScale(irr::core::vector3df(scale, scale, scale));
	cube14->setScale(irr::core::vector3df(scale, scale, scale));
	cube15->setScale(irr::core::vector3df(scale, scale, scale));
}

LetterG::LetterG(irr::core::vector3df pos, irr::scene::ISceneManager *scene, int inter, int size, irr::video::ITexture *text)
{
	scale = 1.0;
	int cube = inter + size;

	cube72 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z - cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube73 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube74 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z + cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube75 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube61 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube66 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube51 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube56 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube41 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube42 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z - cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube43 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube46 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube36 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube21 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 2, pos.X, pos.Z - cube  * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube26 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 2, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube12 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z - cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube13 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube14 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z + cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube15 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));

	cube72->setMaterialTexture(0,text);
	cube73->setMaterialTexture(0,text);
	cube74->setMaterialTexture(0,text);
	cube75->setMaterialTexture(0,text);
	cube61->setMaterialTexture(0,text);
	cube66->setMaterialTexture(0,text);
	cube51->setMaterialTexture(0,text);
	cube56->setMaterialTexture(0,text);
	cube41->setMaterialTexture(0,text);
	cube42->setMaterialTexture(0,text);
	cube43->setMaterialTexture(0,text);
	cube46->setMaterialTexture(0,text);
	cube36->setMaterialTexture(0,text);
	cube21->setMaterialTexture(0,text);
	cube26->setMaterialTexture(0,text);
	cube12->setMaterialTexture(0,text);
	cube13->setMaterialTexture(0,text);
	cube14->setMaterialTexture(0,text);
	cube15->setMaterialTexture(0,text);
}

void LetterG::animate(float max, float min, float diff)
{
	if (up == true) {
		scale += diff;
		if (scale >= max) {
			up = false;
		}
	} else if (up == false) {
		scale -= diff;
		if (scale <= min) {
			up = true;
		}
	}
	cube72->setScale(irr::core::vector3df(scale, scale, scale));
	cube73->setScale(irr::core::vector3df(scale, scale, scale));
	cube74->setScale(irr::core::vector3df(scale, scale, scale));
	cube75->setScale(irr::core::vector3df(scale, scale, scale));
	cube61->setScale(irr::core::vector3df(scale, scale, scale));
	cube66->setScale(irr::core::vector3df(scale, scale, scale));
	cube51->setScale(irr::core::vector3df(scale, scale, scale));
	cube56->setScale(irr::core::vector3df(scale, scale, scale));
	cube41->setScale(irr::core::vector3df(scale, scale, scale));
	cube42->setScale(irr::core::vector3df(scale, scale, scale));
	cube43->setScale(irr::core::vector3df(scale, scale, scale));
	cube46->setScale(irr::core::vector3df(scale, scale, scale));
	cube36->setScale(irr::core::vector3df(scale, scale, scale));
	cube21->setScale(irr::core::vector3df(scale, scale, scale));
	cube26->setScale(irr::core::vector3df(scale, scale, scale));
	cube12->setScale(irr::core::vector3df(scale, scale, scale));
	cube13->setScale(irr::core::vector3df(scale, scale, scale));
	cube14->setScale(irr::core::vector3df(scale, scale, scale));
	cube15->setScale(irr::core::vector3df(scale, scale, scale));
}

void LetterG::setScale(float scale)
{
	cube72->setScale(irr::core::vector3df(scale, scale, scale));
	cube73->setScale(irr::core::vector3df(scale, scale, scale));
	cube74->setScale(irr::core::vector3df(scale, scale, scale));
	cube75->setScale(irr::core::vector3df(scale, scale, scale));
	cube61->setScale(irr::core::vector3df(scale, scale, scale));
	cube66->setScale(irr::core::vector3df(scale, scale, scale));
	cube51->setScale(irr::core::vector3df(scale, scale, scale));
	cube56->setScale(irr::core::vector3df(scale, scale, scale));
	cube41->setScale(irr::core::vector3df(scale, scale, scale));
	cube42->setScale(irr::core::vector3df(scale, scale, scale));
	cube43->setScale(irr::core::vector3df(scale, scale, scale));
	cube46->setScale(irr::core::vector3df(scale, scale, scale));
	cube36->setScale(irr::core::vector3df(scale, scale, scale));
	cube21->setScale(irr::core::vector3df(scale, scale, scale));
	cube26->setScale(irr::core::vector3df(scale, scale, scale));
	cube12->setScale(irr::core::vector3df(scale, scale, scale));
	cube13->setScale(irr::core::vector3df(scale, scale, scale));
	cube14->setScale(irr::core::vector3df(scale, scale, scale));
	cube15->setScale(irr::core::vector3df(scale, scale, scale));
}

LetterH::LetterH(irr::core::vector3df pos, irr::scene::ISceneManager *scene, int inter, int size, irr::video::ITexture *text)
{
	scale = 1.0;
	int cube = inter + size;

	cube71 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube76 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube61 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube66 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube51 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube56 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube41 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube42 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z - cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube43 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube44 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z + cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube45 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube46 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube31 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube36 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube21 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 2, pos.X, pos.Z - cube  * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube26 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 2, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube11 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube16 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));

	cube71->setMaterialTexture(0,text);
	cube76->setMaterialTexture(0,text);
	cube61->setMaterialTexture(0,text);
	cube66->setMaterialTexture(0,text);
	cube51->setMaterialTexture(0,text);
	cube56->setMaterialTexture(0,text);
	cube41->setMaterialTexture(0,text);
	cube42->setMaterialTexture(0,text);
	cube43->setMaterialTexture(0,text);
	cube44->setMaterialTexture(0,text);
	cube45->setMaterialTexture(0,text);
	cube46->setMaterialTexture(0,text);
	cube31->setMaterialTexture(0,text);
	cube36->setMaterialTexture(0,text);
	cube21->setMaterialTexture(0,text);
	cube26->setMaterialTexture(0,text);
	cube11->setMaterialTexture(0,text);
	cube16->setMaterialTexture(0,text);
}

void LetterH::animate(float max, float min, float diff)
{
	if (up == true) {
		scale += diff;
		if (scale >= max) {
			up = false;
		}
	} else if (up == false) {
		scale -= diff;
		if (scale <= min) {
			up = true;
		}
	}
	cube71->setScale(irr::core::vector3df(scale, scale, scale));
	cube76->setScale(irr::core::vector3df(scale, scale, scale));
	cube61->setScale(irr::core::vector3df(scale, scale, scale));
	cube66->setScale(irr::core::vector3df(scale, scale, scale));
	cube51->setScale(irr::core::vector3df(scale, scale, scale));
	cube56->setScale(irr::core::vector3df(scale, scale, scale));
	cube41->setScale(irr::core::vector3df(scale, scale, scale));
	cube42->setScale(irr::core::vector3df(scale, scale, scale));
	cube43->setScale(irr::core::vector3df(scale, scale, scale));
	cube44->setScale(irr::core::vector3df(scale, scale, scale));
	cube45->setScale(irr::core::vector3df(scale, scale, scale));
	cube46->setScale(irr::core::vector3df(scale, scale, scale));
	cube31->setScale(irr::core::vector3df(scale, scale, scale));
	cube36->setScale(irr::core::vector3df(scale, scale, scale));
	cube21->setScale(irr::core::vector3df(scale, scale, scale));
	cube26->setScale(irr::core::vector3df(scale, scale, scale));
	cube11->setScale(irr::core::vector3df(scale, scale, scale));
	cube16->setScale(irr::core::vector3df(scale, scale, scale));
}

void LetterH::setScale(float scale)
{
	cube71->setScale(irr::core::vector3df(scale, scale, scale));
	cube76->setScale(irr::core::vector3df(scale, scale, scale));
	cube61->setScale(irr::core::vector3df(scale, scale, scale));
	cube66->setScale(irr::core::vector3df(scale, scale, scale));
	cube51->setScale(irr::core::vector3df(scale, scale, scale));
	cube56->setScale(irr::core::vector3df(scale, scale, scale));
	cube41->setScale(irr::core::vector3df(scale, scale, scale));
	cube42->setScale(irr::core::vector3df(scale, scale, scale));
	cube43->setScale(irr::core::vector3df(scale, scale, scale));
	cube44->setScale(irr::core::vector3df(scale, scale, scale));
	cube45->setScale(irr::core::vector3df(scale, scale, scale));
	cube46->setScale(irr::core::vector3df(scale, scale, scale));
	cube31->setScale(irr::core::vector3df(scale, scale, scale));
	cube36->setScale(irr::core::vector3df(scale, scale, scale));
	cube21->setScale(irr::core::vector3df(scale, scale, scale));
	cube26->setScale(irr::core::vector3df(scale, scale, scale));
	cube11->setScale(irr::core::vector3df(scale, scale, scale));
	cube16->setScale(irr::core::vector3df(scale, scale, scale));
}

LetterI::LetterI(irr::core::vector3df pos, irr::scene::ISceneManager *scene, int inter, int size, irr::video::ITexture *text)
{
	scale = 1.0;
	int cube = inter + size;

	cube72 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z - cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube73 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube74 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z + cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube63 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube53 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube43 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube33 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube23 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 2, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube12 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z - cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube13 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube14 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z + cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));

	cube72->setMaterialTexture(0,text);
	cube73->setMaterialTexture(0,text);
	cube74->setMaterialTexture(0,text);
	cube63->setMaterialTexture(0,text);
	cube53->setMaterialTexture(0,text);
	cube43->setMaterialTexture(0,text);
	cube33->setMaterialTexture(0,text);
	cube23->setMaterialTexture(0,text);
	cube12->setMaterialTexture(0,text);
	cube13->setMaterialTexture(0,text);
	cube14->setMaterialTexture(0,text);
}

void LetterI::animate(float max, float min, float diff)
{
	if (up == true) {
		scale += diff;
		if (scale >= max) {
			up = false;
		}
	} else if (up == false) {
		scale -= diff;
		if (scale <= min) {
			up = true;
		}
	}
	cube72->setScale(irr::core::vector3df(scale, scale, scale));
	cube73->setScale(irr::core::vector3df(scale, scale, scale));
	cube74->setScale(irr::core::vector3df(scale, scale, scale));
	cube63->setScale(irr::core::vector3df(scale, scale, scale));
	cube53->setScale(irr::core::vector3df(scale, scale, scale));
	cube43->setScale(irr::core::vector3df(scale, scale, scale));
	cube33->setScale(irr::core::vector3df(scale, scale, scale));
	cube23->setScale(irr::core::vector3df(scale, scale, scale));
	cube12->setScale(irr::core::vector3df(scale, scale, scale));
	cube13->setScale(irr::core::vector3df(scale, scale, scale));
	cube14->setScale(irr::core::vector3df(scale, scale, scale));
}

void LetterI::setScale(float scale)
{
	cube72->setScale(irr::core::vector3df(scale, scale, scale));
	cube73->setScale(irr::core::vector3df(scale, scale, scale));
	cube74->setScale(irr::core::vector3df(scale, scale, scale));
	cube63->setScale(irr::core::vector3df(scale, scale, scale));
	cube53->setScale(irr::core::vector3df(scale, scale, scale));
	cube43->setScale(irr::core::vector3df(scale, scale, scale));
	cube33->setScale(irr::core::vector3df(scale, scale, scale));
	cube23->setScale(irr::core::vector3df(scale, scale, scale));
	cube12->setScale(irr::core::vector3df(scale, scale, scale));
	cube13->setScale(irr::core::vector3df(scale, scale, scale));
	cube14->setScale(irr::core::vector3df(scale, scale, scale));
}

LetterJ::LetterJ(irr::core::vector3df pos, irr::scene::ISceneManager *scene, int inter, int size, irr::video::ITexture *text)
{
	scale = 1.0;
	int cube = inter + size;

	cube72 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z - cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube73 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube74 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z + cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube75 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube61 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube66 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube51 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube41 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube31 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube21 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 2, pos.X, pos.Z - cube  * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube11 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));

	cube72->setMaterialTexture(0,text);
	cube73->setMaterialTexture(0,text);
	cube74->setMaterialTexture(0,text);
	cube75->setMaterialTexture(0,text);
	cube61->setMaterialTexture(0,text);
	cube66->setMaterialTexture(0,text);
	cube51->setMaterialTexture(0,text);
	cube41->setMaterialTexture(0,text);
	cube31->setMaterialTexture(0,text);
	cube21->setMaterialTexture(0,text);
	cube11->setMaterialTexture(0,text);
}

void LetterJ::animate(float max, float min, float diff)
{
	if (up == true) {
		scale += diff;
		if (scale >= max) {
			up = false;
		}
	} else if (up == false) {
		scale -= diff;
		if (scale <= min) {
			up = true;
		}
	}
	cube72->setScale(irr::core::vector3df(scale, scale, scale));
	cube73->setScale(irr::core::vector3df(scale, scale, scale));
	cube74->setScale(irr::core::vector3df(scale, scale, scale));
	cube75->setScale(irr::core::vector3df(scale, scale, scale));
	cube61->setScale(irr::core::vector3df(scale, scale, scale));
	cube66->setScale(irr::core::vector3df(scale, scale, scale));
	cube51->setScale(irr::core::vector3df(scale, scale, scale));
	cube41->setScale(irr::core::vector3df(scale, scale, scale));
	cube31->setScale(irr::core::vector3df(scale, scale, scale));
	cube21->setScale(irr::core::vector3df(scale, scale, scale));
	cube11->setScale(irr::core::vector3df(scale, scale, scale));
}

void LetterJ::setScale(float scale)
{
	cube72->setScale(irr::core::vector3df(scale, scale, scale));
	cube73->setScale(irr::core::vector3df(scale, scale, scale));
	cube74->setScale(irr::core::vector3df(scale, scale, scale));
	cube75->setScale(irr::core::vector3df(scale, scale, scale));
	cube61->setScale(irr::core::vector3df(scale, scale, scale));
	cube66->setScale(irr::core::vector3df(scale, scale, scale));
	cube51->setScale(irr::core::vector3df(scale, scale, scale));
	cube41->setScale(irr::core::vector3df(scale, scale, scale));
	cube31->setScale(irr::core::vector3df(scale, scale, scale));
	cube21->setScale(irr::core::vector3df(scale, scale, scale));
	cube11->setScale(irr::core::vector3df(scale, scale, scale));
}

LetterK::LetterK(irr::core::vector3df pos, irr::scene::ISceneManager *scene, int inter, int size, irr::video::ITexture *text)
{
	scale = 1.0;
	int cube = inter + size;

	cube71 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube76 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube62 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z - cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube66 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube53 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube56 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube44 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z + cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube45 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube46 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube33 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube36 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube22 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 2, pos.X, pos.Z - cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube26 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 2, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube11 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube16 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));

	cube71->setMaterialTexture(0,text);
	cube76->setMaterialTexture(0,text);
	cube62->setMaterialTexture(0,text);
	cube66->setMaterialTexture(0,text);
	cube53->setMaterialTexture(0,text);
	cube56->setMaterialTexture(0,text);
	cube44->setMaterialTexture(0,text);
	cube45->setMaterialTexture(0,text);
	cube46->setMaterialTexture(0,text);
	cube33->setMaterialTexture(0,text);
	cube36->setMaterialTexture(0,text);
	cube22->setMaterialTexture(0,text);
	cube26->setMaterialTexture(0,text);
	cube11->setMaterialTexture(0,text);
	cube16->setMaterialTexture(0,text);
}

void LetterK::animate(float max, float min, float diff)
{
	if (up == true) {
		scale += diff;
		if (scale >= max) {
			up = false;
		}
	} else if (up == false) {
		scale -= diff;
		if (scale <= min) {
			up = true;
		}
	}
	cube71->setScale(irr::core::vector3df(scale, scale, scale));
	cube76->setScale(irr::core::vector3df(scale, scale, scale));
	cube62->setScale(irr::core::vector3df(scale, scale, scale));
	cube66->setScale(irr::core::vector3df(scale, scale, scale));
	cube53->setScale(irr::core::vector3df(scale, scale, scale));
	cube56->setScale(irr::core::vector3df(scale, scale, scale));
	cube44->setScale(irr::core::vector3df(scale, scale, scale));
	cube45->setScale(irr::core::vector3df(scale, scale, scale));
	cube46->setScale(irr::core::vector3df(scale, scale, scale));
	cube33->setScale(irr::core::vector3df(scale, scale, scale));
	cube36->setScale(irr::core::vector3df(scale, scale, scale));
	cube22->setScale(irr::core::vector3df(scale, scale, scale));
	cube26->setScale(irr::core::vector3df(scale, scale, scale));
	cube11->setScale(irr::core::vector3df(scale, scale, scale));
	cube16->setScale(irr::core::vector3df(scale, scale, scale));
}

void LetterK::setScale(float scale)
{
	cube71->setScale(irr::core::vector3df(scale, scale, scale));
	cube76->setScale(irr::core::vector3df(scale, scale, scale));
	cube62->setScale(irr::core::vector3df(scale, scale, scale));
	cube66->setScale(irr::core::vector3df(scale, scale, scale));
	cube53->setScale(irr::core::vector3df(scale, scale, scale));
	cube56->setScale(irr::core::vector3df(scale, scale, scale));
	cube44->setScale(irr::core::vector3df(scale, scale, scale));
	cube45->setScale(irr::core::vector3df(scale, scale, scale));
	cube46->setScale(irr::core::vector3df(scale, scale, scale));
	cube33->setScale(irr::core::vector3df(scale, scale, scale));
	cube36->setScale(irr::core::vector3df(scale, scale, scale));
	cube22->setScale(irr::core::vector3df(scale, scale, scale));
	cube26->setScale(irr::core::vector3df(scale, scale, scale));
	cube11->setScale(irr::core::vector3df(scale, scale, scale));
	cube16->setScale(irr::core::vector3df(scale, scale, scale));
}

LetterL::LetterL(irr::core::vector3df pos, irr::scene::ISceneManager *scene, int inter, int size, irr::video::ITexture *text)
{
	scale = 1.0;
	int cube = inter + size;

	cube71 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube72 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z - cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube73 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube74 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z + cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube75 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube76 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube61 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube51 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube41 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube31 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube21 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 2, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube11 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));

	cube71->setMaterialTexture(0,text);
	cube72->setMaterialTexture(0,text);
	cube73->setMaterialTexture(0,text);
	cube74->setMaterialTexture(0,text);
	cube75->setMaterialTexture(0,text);
	cube76->setMaterialTexture(0,text);
	cube61->setMaterialTexture(0,text);
	cube51->setMaterialTexture(0,text);
	cube41->setMaterialTexture(0,text);
	cube31->setMaterialTexture(0,text);
	cube21->setMaterialTexture(0,text);
	cube11->setMaterialTexture(0,text);
}

void LetterL::animate(float max, float min, float diff)
{
	if (up == true) {
		scale += diff;
		if (scale >= max) {
			up = false;
		}
	} else if (up == false) {
		scale -= diff;
		if (scale <= min) {
			up = true;
		}
	}
	cube71->setScale(irr::core::vector3df(scale, scale, scale));
	cube72->setScale(irr::core::vector3df(scale, scale, scale));
	cube73->setScale(irr::core::vector3df(scale, scale, scale));
	cube74->setScale(irr::core::vector3df(scale, scale, scale));
	cube75->setScale(irr::core::vector3df(scale, scale, scale));
	cube76->setScale(irr::core::vector3df(scale, scale, scale));
	cube61->setScale(irr::core::vector3df(scale, scale, scale));
	cube51->setScale(irr::core::vector3df(scale, scale, scale));
	cube41->setScale(irr::core::vector3df(scale, scale, scale));
	cube31->setScale(irr::core::vector3df(scale, scale, scale));
	cube21->setScale(irr::core::vector3df(scale, scale, scale));
	cube11->setScale(irr::core::vector3df(scale, scale, scale));
}

void LetterL::setScale(float scale)
{
	cube71->setScale(irr::core::vector3df(scale, scale, scale));
	cube72->setScale(irr::core::vector3df(scale, scale, scale));
	cube73->setScale(irr::core::vector3df(scale, scale, scale));
	cube74->setScale(irr::core::vector3df(scale, scale, scale));
	cube75->setScale(irr::core::vector3df(scale, scale, scale));
	cube76->setScale(irr::core::vector3df(scale, scale, scale));
	cube61->setScale(irr::core::vector3df(scale, scale, scale));
	cube51->setScale(irr::core::vector3df(scale, scale, scale));
	cube41->setScale(irr::core::vector3df(scale, scale, scale));
	cube31->setScale(irr::core::vector3df(scale, scale, scale));
	cube21->setScale(irr::core::vector3df(scale, scale, scale));
	cube11->setScale(irr::core::vector3df(scale, scale, scale));
}

LetterM::LetterM(irr::core::vector3df pos, irr::scene::ISceneManager *scene, int inter, int size, irr::video::ITexture *text)
{
	scale = 1.0;
	int cube = inter + size;

	cube71 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z - cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube77 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube61 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z - cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube67 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube51 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube, pos.X, pos.Z - cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube57 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube41 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z - cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube44 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube47 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube31 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube, pos.X, pos.Z - cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube33 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube, pos.X, pos.Z - cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube35 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube, pos.X, pos.Z + cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube37 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube21 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 2, pos.X, pos.Z - cube  * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube22 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 2, pos.X, pos.Z - cube  * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube26 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 2, pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube27 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 2, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube11 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z - cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube17 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));

	cube71->setMaterialTexture(0,text);
	cube77->setMaterialTexture(0,text);
	cube61->setMaterialTexture(0,text);
	cube67->setMaterialTexture(0,text);
	cube51->setMaterialTexture(0,text);
	cube57->setMaterialTexture(0,text);
	cube41->setMaterialTexture(0,text);
	cube44->setMaterialTexture(0,text);
	cube47->setMaterialTexture(0,text);
	cube31->setMaterialTexture(0,text);
	cube33->setMaterialTexture(0,text);
	cube35->setMaterialTexture(0,text);
	cube37->setMaterialTexture(0,text);
	cube21->setMaterialTexture(0,text);
	cube22->setMaterialTexture(0,text);
	cube26->setMaterialTexture(0,text);
	cube27->setMaterialTexture(0,text);
	cube11->setMaterialTexture(0,text);
	cube17->setMaterialTexture(0,text);
}

void LetterM::animate(float max, float min, float diff)
{
	if (up == true) {
		scale += diff;
		if (scale >= max) {
			up = false;
		}
	} else if (up == false) {
		scale -= diff;
		if (scale <= min) {
			up = true;
		}
	}
	cube71->setScale(irr::core::vector3df(scale, scale, scale));
	cube77->setScale(irr::core::vector3df(scale, scale, scale));
	cube61->setScale(irr::core::vector3df(scale, scale, scale));
	cube67->setScale(irr::core::vector3df(scale, scale, scale));
	cube51->setScale(irr::core::vector3df(scale, scale, scale));
	cube57->setScale(irr::core::vector3df(scale, scale, scale));
	cube41->setScale(irr::core::vector3df(scale, scale, scale));
	cube44->setScale(irr::core::vector3df(scale, scale, scale));
	cube47->setScale(irr::core::vector3df(scale, scale, scale));
	cube31->setScale(irr::core::vector3df(scale, scale, scale));
	cube33->setScale(irr::core::vector3df(scale, scale, scale));
	cube35->setScale(irr::core::vector3df(scale, scale, scale));
	cube37->setScale(irr::core::vector3df(scale, scale, scale));
	cube21->setScale(irr::core::vector3df(scale, scale, scale));
	cube22->setScale(irr::core::vector3df(scale, scale, scale));
	cube26->setScale(irr::core::vector3df(scale, scale, scale));
	cube27->setScale(irr::core::vector3df(scale, scale, scale));
	cube11->setScale(irr::core::vector3df(scale, scale, scale));
	cube17->setScale(irr::core::vector3df(scale, scale, scale));
}

void LetterM::setScale(float scale)
{
	cube71->setScale(irr::core::vector3df(scale, scale, scale));
	cube77->setScale(irr::core::vector3df(scale, scale, scale));
	cube61->setScale(irr::core::vector3df(scale, scale, scale));
	cube67->setScale(irr::core::vector3df(scale, scale, scale));
	cube51->setScale(irr::core::vector3df(scale, scale, scale));
	cube57->setScale(irr::core::vector3df(scale, scale, scale));
	cube41->setScale(irr::core::vector3df(scale, scale, scale));
	cube44->setScale(irr::core::vector3df(scale, scale, scale));
	cube47->setScale(irr::core::vector3df(scale, scale, scale));
	cube31->setScale(irr::core::vector3df(scale, scale, scale));
	cube33->setScale(irr::core::vector3df(scale, scale, scale));
	cube35->setScale(irr::core::vector3df(scale, scale, scale));
	cube37->setScale(irr::core::vector3df(scale, scale, scale));
	cube21->setScale(irr::core::vector3df(scale, scale, scale));
	cube22->setScale(irr::core::vector3df(scale, scale, scale));
	cube26->setScale(irr::core::vector3df(scale, scale, scale));
	cube27->setScale(irr::core::vector3df(scale, scale, scale));
	cube11->setScale(irr::core::vector3df(scale, scale, scale));
	cube17->setScale(irr::core::vector3df(scale, scale, scale));
}

LetterN::LetterN(irr::core::vector3df pos, irr::scene::ISceneManager *scene, int inter, int size, irr::video::ITexture *text)
{
	scale = 1.0;
	int cube = inter + size;

	cube71 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z - cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube77 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube61 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z - cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube62 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube67 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube51 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube, pos.X, pos.Z - cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube53 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube, pos.X, pos.Z - cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube57 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube41 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z - cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube44 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube47 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube31 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube, pos.X, pos.Z - cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube35 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube, pos.X, pos.Z + cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube37 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube21 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 2, pos.X, pos.Z - cube  * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube26 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 2, pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube27 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 2, pos.X, pos.Z + cube *  3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube11 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z - cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube17 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));

	cube71->setMaterialTexture(0,text);
	cube77->setMaterialTexture(0,text);
	cube61->setMaterialTexture(0,text);
	cube62->setMaterialTexture(0,text);
	cube67->setMaterialTexture(0,text);
	cube51->setMaterialTexture(0,text);
	cube53->setMaterialTexture(0,text);
	cube57->setMaterialTexture(0,text);
	cube41->setMaterialTexture(0,text);
	cube44->setMaterialTexture(0,text);
	cube47->setMaterialTexture(0,text);
	cube31->setMaterialTexture(0,text);
	cube35->setMaterialTexture(0,text);
	cube37->setMaterialTexture(0,text);
	cube21->setMaterialTexture(0,text);
	cube26->setMaterialTexture(0,text);
	cube27->setMaterialTexture(0,text);
	cube11->setMaterialTexture(0,text);
	cube17->setMaterialTexture(0,text);
}

void LetterN::animate(float max, float min, float diff)
{
	if (up == true) {
		scale += diff;
		if (scale >= max) {
			up = false;
		}
	} else if (up == false) {
		scale -= diff;
		if (scale <= min) {
			up = true;
		}
	}
	cube71->setScale(irr::core::vector3df(scale, scale, scale));
	cube77->setScale(irr::core::vector3df(scale, scale, scale));
	cube61->setScale(irr::core::vector3df(scale, scale, scale));
	cube62->setScale(irr::core::vector3df(scale, scale, scale));
	cube67->setScale(irr::core::vector3df(scale, scale, scale));
	cube51->setScale(irr::core::vector3df(scale, scale, scale));
	cube53->setScale(irr::core::vector3df(scale, scale, scale));
	cube57->setScale(irr::core::vector3df(scale, scale, scale));
	cube41->setScale(irr::core::vector3df(scale, scale, scale));
	cube44->setScale(irr::core::vector3df(scale, scale, scale));
	cube47->setScale(irr::core::vector3df(scale, scale, scale));
	cube31->setScale(irr::core::vector3df(scale, scale, scale));
	cube35->setScale(irr::core::vector3df(scale, scale, scale));
	cube37->setScale(irr::core::vector3df(scale, scale, scale));
	cube21->setScale(irr::core::vector3df(scale, scale, scale));
	cube26->setScale(irr::core::vector3df(scale, scale, scale));
	cube27->setScale(irr::core::vector3df(scale, scale, scale));
	cube11->setScale(irr::core::vector3df(scale, scale, scale));
	cube17->setScale(irr::core::vector3df(scale, scale, scale));
}

void LetterN::setScale(float scale)
{
	cube71->setScale(irr::core::vector3df(scale, scale, scale));
	cube77->setScale(irr::core::vector3df(scale, scale, scale));
	cube61->setScale(irr::core::vector3df(scale, scale, scale));
	cube62->setScale(irr::core::vector3df(scale, scale, scale));
	cube67->setScale(irr::core::vector3df(scale, scale, scale));
	cube51->setScale(irr::core::vector3df(scale, scale, scale));
	cube53->setScale(irr::core::vector3df(scale, scale, scale));
	cube57->setScale(irr::core::vector3df(scale, scale, scale));
	cube41->setScale(irr::core::vector3df(scale, scale, scale));
	cube44->setScale(irr::core::vector3df(scale, scale, scale));
	cube47->setScale(irr::core::vector3df(scale, scale, scale));
	cube31->setScale(irr::core::vector3df(scale, scale, scale));
	cube35->setScale(irr::core::vector3df(scale, scale, scale));
	cube37->setScale(irr::core::vector3df(scale, scale, scale));
	cube21->setScale(irr::core::vector3df(scale, scale, scale));
	cube26->setScale(irr::core::vector3df(scale, scale, scale));
	cube27->setScale(irr::core::vector3df(scale, scale, scale));
	cube11->setScale(irr::core::vector3df(scale, scale, scale));
	cube17->setScale(irr::core::vector3df(scale, scale, scale));
}

LetterO::LetterO(irr::core::vector3df pos, irr::scene::ISceneManager *scene, int inter, int size, irr::video::ITexture *text)
{
	scale = 1.0;
	int cube = inter + size;

	cube72 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z - cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube73 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube74 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z + cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube75 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube61 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube66 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube51 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube56 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube41 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube46 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube31 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube36 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube21 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 2, pos.X, pos.Z - cube  * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube26 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 2, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube12 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z - cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube13 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube14 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z + cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube15 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));

	cube72->setMaterialTexture(0,text);
	cube73->setMaterialTexture(0,text);
	cube74->setMaterialTexture(0,text);
	cube75->setMaterialTexture(0,text);
	cube61->setMaterialTexture(0,text);
	cube66->setMaterialTexture(0,text);
	cube51->setMaterialTexture(0,text);
	cube56->setMaterialTexture(0,text);
	cube41->setMaterialTexture(0,text);
	cube46->setMaterialTexture(0,text);
	cube31->setMaterialTexture(0,text);
	cube36->setMaterialTexture(0,text);
	cube21->setMaterialTexture(0,text);
	cube26->setMaterialTexture(0,text);
	cube12->setMaterialTexture(0,text);
	cube13->setMaterialTexture(0,text);
	cube14->setMaterialTexture(0,text);
	cube15->setMaterialTexture(0,text);
}

void LetterO::animate(float max, float min, float diff)
{
	if (up == true) {
		scale += diff;
		if (scale >= max) {
			up = false;
		}
	} else if (up == false) {
		scale -= diff;
		if (scale <= min) {
			up = true;
		}
	}
	cube72->setScale(irr::core::vector3df(scale, scale, scale));
	cube73->setScale(irr::core::vector3df(scale, scale, scale));
	cube74->setScale(irr::core::vector3df(scale, scale, scale));
	cube75->setScale(irr::core::vector3df(scale, scale, scale));
	cube61->setScale(irr::core::vector3df(scale, scale, scale));
	cube66->setScale(irr::core::vector3df(scale, scale, scale));
	cube51->setScale(irr::core::vector3df(scale, scale, scale));
	cube56->setScale(irr::core::vector3df(scale, scale, scale));
	cube41->setScale(irr::core::vector3df(scale, scale, scale));
	cube46->setScale(irr::core::vector3df(scale, scale, scale));
	cube31->setScale(irr::core::vector3df(scale, scale, scale));
	cube36->setScale(irr::core::vector3df(scale, scale, scale));
	cube21->setScale(irr::core::vector3df(scale, scale, scale));
	cube26->setScale(irr::core::vector3df(scale, scale, scale));
	cube12->setScale(irr::core::vector3df(scale, scale, scale));
	cube13->setScale(irr::core::vector3df(scale, scale, scale));
	cube14->setScale(irr::core::vector3df(scale, scale, scale));
	cube15->setScale(irr::core::vector3df(scale, scale, scale));
}

void LetterO::setScale(float scale)
{
	cube72->setScale(irr::core::vector3df(scale, scale, scale));
	cube73->setScale(irr::core::vector3df(scale, scale, scale));
	cube74->setScale(irr::core::vector3df(scale, scale, scale));
	cube75->setScale(irr::core::vector3df(scale, scale, scale));
	cube61->setScale(irr::core::vector3df(scale, scale, scale));
	cube66->setScale(irr::core::vector3df(scale, scale, scale));
	cube51->setScale(irr::core::vector3df(scale, scale, scale));
	cube56->setScale(irr::core::vector3df(scale, scale, scale));
	cube41->setScale(irr::core::vector3df(scale, scale, scale));
	cube46->setScale(irr::core::vector3df(scale, scale, scale));
	cube31->setScale(irr::core::vector3df(scale, scale, scale));
	cube36->setScale(irr::core::vector3df(scale, scale, scale));
	cube21->setScale(irr::core::vector3df(scale, scale, scale));
	cube26->setScale(irr::core::vector3df(scale, scale, scale));
	cube12->setScale(irr::core::vector3df(scale, scale, scale));
	cube13->setScale(irr::core::vector3df(scale, scale, scale));
	cube14->setScale(irr::core::vector3df(scale, scale, scale));
	cube15->setScale(irr::core::vector3df(scale, scale, scale));
}

LetterP::LetterP(irr::core::vector3df pos, irr::scene::ISceneManager *scene, int inter, int size, irr::video::ITexture *text)
{
	scale = 1.0;
	int cube = inter + size;

	cube71 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube61 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube51 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube, pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube41 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube42 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z - cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube43 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube44 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z + cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube45 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube31 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube, pos.X, pos.Z - cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube32 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube, pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube21 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 2, pos.X, pos.Z - cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube22 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 2, pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube11 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube12 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z - cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube13 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z ), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube14 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z + cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube15 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));

	cube71->setMaterialTexture(0,text);
	cube61->setMaterialTexture(0,text);
	cube51->setMaterialTexture(0,text);
	cube41->setMaterialTexture(0,text);
	cube42->setMaterialTexture(0,text);
	cube43->setMaterialTexture(0,text);
	cube44->setMaterialTexture(0,text);
	cube45->setMaterialTexture(0,text);
	cube31->setMaterialTexture(0,text);
	cube32->setMaterialTexture(0,text);
	cube21->setMaterialTexture(0,text);
	cube22->setMaterialTexture(0,text);
	cube11->setMaterialTexture(0,text);
	cube12->setMaterialTexture(0,text);
	cube13->setMaterialTexture(0,text);
	cube14->setMaterialTexture(0,text);
	cube15->setMaterialTexture(0,text);
}

void LetterP::animate(float max, float min, float diff)
{
	if (up == true) {
		scale += diff;
		if (scale >= max) {
			up = false;
		}
	} else if (up == false) {
		scale -= diff;
		if (scale <= min) {
			up = true;
		}
	}
	cube71->setScale(irr::core::vector3df(scale, scale, scale));
	cube61->setScale(irr::core::vector3df(scale, scale, scale));
	cube51->setScale(irr::core::vector3df(scale, scale, scale));
	cube41->setScale(irr::core::vector3df(scale, scale, scale));
	cube42->setScale(irr::core::vector3df(scale, scale, scale));
	cube43->setScale(irr::core::vector3df(scale, scale, scale));
	cube44->setScale(irr::core::vector3df(scale, scale, scale));
	cube45->setScale(irr::core::vector3df(scale, scale, scale));
	cube31->setScale(irr::core::vector3df(scale, scale, scale));
	cube32->setScale(irr::core::vector3df(scale, scale, scale));
	cube21->setScale(irr::core::vector3df(scale, scale, scale));
	cube22->setScale(irr::core::vector3df(scale, scale, scale));
	cube11->setScale(irr::core::vector3df(scale, scale, scale));
	cube12->setScale(irr::core::vector3df(scale, scale, scale));
	cube13->setScale(irr::core::vector3df(scale, scale, scale));
	cube14->setScale(irr::core::vector3df(scale, scale, scale));
	cube15->setScale(irr::core::vector3df(scale, scale, scale));
}

void LetterP::setScale(float scale)
{
	cube71->setScale(irr::core::vector3df(scale, scale, scale));
	cube61->setScale(irr::core::vector3df(scale, scale, scale));
	cube51->setScale(irr::core::vector3df(scale, scale, scale));
	cube41->setScale(irr::core::vector3df(scale, scale, scale));
	cube42->setScale(irr::core::vector3df(scale, scale, scale));
	cube43->setScale(irr::core::vector3df(scale, scale, scale));
	cube44->setScale(irr::core::vector3df(scale, scale, scale));
	cube45->setScale(irr::core::vector3df(scale, scale, scale));
	cube31->setScale(irr::core::vector3df(scale, scale, scale));
	cube32->setScale(irr::core::vector3df(scale, scale, scale));
	cube21->setScale(irr::core::vector3df(scale, scale, scale));
	cube22->setScale(irr::core::vector3df(scale, scale, scale));
	cube11->setScale(irr::core::vector3df(scale, scale, scale));
	cube12->setScale(irr::core::vector3df(scale, scale, scale));
	cube13->setScale(irr::core::vector3df(scale, scale, scale));
	cube14->setScale(irr::core::vector3df(scale, scale, scale));
	cube15->setScale(irr::core::vector3df(scale, scale, scale));
}

LetterQ::LetterQ(irr::core::vector3df pos, irr::scene::ISceneManager *scene, int inter, int size, irr::video::ITexture *text)
{
	scale = 1.0;
	int cube = inter + size;

	cube71 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube62 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z - cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube63 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube64 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z + cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube65 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube51 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube56 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube41 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube46 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube31 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube36 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube21 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 2, pos.X, pos.Z - cube  * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube26 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 2, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube12 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z - cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube13 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube14 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z + cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube15 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));

	cube71->setMaterialTexture(0,text);
	cube62->setMaterialTexture(0,text);
	cube63->setMaterialTexture(0,text);
	cube64->setMaterialTexture(0,text);
	cube65->setMaterialTexture(0,text);
	cube51->setMaterialTexture(0,text);
	cube56->setMaterialTexture(0,text);
	cube41->setMaterialTexture(0,text);
	cube46->setMaterialTexture(0,text);
	cube31->setMaterialTexture(0,text);
	cube36->setMaterialTexture(0,text);
	cube21->setMaterialTexture(0,text);
	cube26->setMaterialTexture(0,text);
	cube12->setMaterialTexture(0,text);
	cube13->setMaterialTexture(0,text);
	cube14->setMaterialTexture(0,text);
	cube15->setMaterialTexture(0,text);
}

void LetterQ::animate(float max, float min, float diff)
{
	if (up == true) {
		scale += diff;
		if (scale >= max) {
			up = false;
		}
	} else if (up == false) {
		scale -= diff;
		if (scale <= min) {
			up = true;
		}
	}
	cube71->setScale(irr::core::vector3df(scale, scale, scale));
	cube62->setScale(irr::core::vector3df(scale, scale, scale));
	cube63->setScale(irr::core::vector3df(scale, scale, scale));
	cube64->setScale(irr::core::vector3df(scale, scale, scale));
	cube65->setScale(irr::core::vector3df(scale, scale, scale));
	cube51->setScale(irr::core::vector3df(scale, scale, scale));
	cube56->setScale(irr::core::vector3df(scale, scale, scale));
	cube41->setScale(irr::core::vector3df(scale, scale, scale));
	cube46->setScale(irr::core::vector3df(scale, scale, scale));
	cube31->setScale(irr::core::vector3df(scale, scale, scale));
	cube36->setScale(irr::core::vector3df(scale, scale, scale));
	cube21->setScale(irr::core::vector3df(scale, scale, scale));
	cube26->setScale(irr::core::vector3df(scale, scale, scale));
	cube12->setScale(irr::core::vector3df(scale, scale, scale));
	cube13->setScale(irr::core::vector3df(scale, scale, scale));
	cube14->setScale(irr::core::vector3df(scale, scale, scale));
	cube15->setScale(irr::core::vector3df(scale, scale, scale));
}

void LetterQ::setScale(float scale)
{
	cube71->setScale(irr::core::vector3df(scale, scale, scale));
	cube62->setScale(irr::core::vector3df(scale, scale, scale));
	cube63->setScale(irr::core::vector3df(scale, scale, scale));
	cube64->setScale(irr::core::vector3df(scale, scale, scale));
	cube65->setScale(irr::core::vector3df(scale, scale, scale));
	cube51->setScale(irr::core::vector3df(scale, scale, scale));
	cube56->setScale(irr::core::vector3df(scale, scale, scale));
	cube41->setScale(irr::core::vector3df(scale, scale, scale));
	cube46->setScale(irr::core::vector3df(scale, scale, scale));
	cube31->setScale(irr::core::vector3df(scale, scale, scale));
	cube36->setScale(irr::core::vector3df(scale, scale, scale));
	cube21->setScale(irr::core::vector3df(scale, scale, scale));
	cube26->setScale(irr::core::vector3df(scale, scale, scale));
	cube12->setScale(irr::core::vector3df(scale, scale, scale));
	cube13->setScale(irr::core::vector3df(scale, scale, scale));
	cube14->setScale(irr::core::vector3df(scale, scale, scale));
	cube15->setScale(irr::core::vector3df(scale, scale, scale));
}

LetterR::LetterR(irr::core::vector3df pos, irr::scene::ISceneManager *scene, int inter, int size, irr::video::ITexture *text)
{
	scale = 1.0;
	int cube = inter + size;

	cube71 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube76 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube62 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z - cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube66 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube53 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube56 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube42 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z - cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube43 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube44 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z + cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube45 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube46 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube31 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube36 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube21 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 2, pos.X, pos.Z - cube  * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube26 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 2, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube12 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z - cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube13 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube14 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z + cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube15 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube16 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));

	cube71->setMaterialTexture(0,text);
	cube76->setMaterialTexture(0,text);
	cube62->setMaterialTexture(0,text);
	cube66->setMaterialTexture(0,text);
	cube53->setMaterialTexture(0,text);
	cube56->setMaterialTexture(0,text);
	cube42->setMaterialTexture(0,text);
	cube43->setMaterialTexture(0,text);
	cube44->setMaterialTexture(0,text);
	cube45->setMaterialTexture(0,text);
	cube46->setMaterialTexture(0,text);
	cube31->setMaterialTexture(0,text);
	cube36->setMaterialTexture(0,text);
	cube21->setMaterialTexture(0,text);
	cube26->setMaterialTexture(0,text);
	cube12->setMaterialTexture(0,text);
	cube13->setMaterialTexture(0,text);
	cube14->setMaterialTexture(0,text);
	cube15->setMaterialTexture(0,text);
	cube16->setMaterialTexture(0,text);
}

void LetterR::animate(float max, float min, float diff)
{
	if (up == true) {
		scale += diff;
		if (scale >= max) {
			up = false;
		}
	} else if (up == false) {
		scale -= diff;
		if (scale <= min) {
			up = true;
		}
	}
	cube71->setScale(irr::core::vector3df(scale, scale, scale));
	cube76->setScale(irr::core::vector3df(scale, scale, scale));
	cube62->setScale(irr::core::vector3df(scale, scale, scale));
	cube66->setScale(irr::core::vector3df(scale, scale, scale));
	cube53->setScale(irr::core::vector3df(scale, scale, scale));
	cube56->setScale(irr::core::vector3df(scale, scale, scale));
	cube42->setScale(irr::core::vector3df(scale, scale, scale));
	cube43->setScale(irr::core::vector3df(scale, scale, scale));
	cube44->setScale(irr::core::vector3df(scale, scale, scale));
	cube45->setScale(irr::core::vector3df(scale, scale, scale));
	cube46->setScale(irr::core::vector3df(scale, scale, scale));
	cube31->setScale(irr::core::vector3df(scale, scale, scale));
	cube36->setScale(irr::core::vector3df(scale, scale, scale));
	cube21->setScale(irr::core::vector3df(scale, scale, scale));
	cube26->setScale(irr::core::vector3df(scale, scale, scale));
	cube12->setScale(irr::core::vector3df(scale, scale, scale));
	cube13->setScale(irr::core::vector3df(scale, scale, scale));
	cube14->setScale(irr::core::vector3df(scale, scale, scale));
	cube15->setScale(irr::core::vector3df(scale, scale, scale));
	cube16->setScale(irr::core::vector3df(scale, scale, scale));
}

void LetterR::setScale(float scale)
{
	cube71->setScale(irr::core::vector3df(scale, scale, scale));
	cube76->setScale(irr::core::vector3df(scale, scale, scale));
	cube62->setScale(irr::core::vector3df(scale, scale, scale));
	cube66->setScale(irr::core::vector3df(scale, scale, scale));
	cube53->setScale(irr::core::vector3df(scale, scale, scale));
	cube56->setScale(irr::core::vector3df(scale, scale, scale));
	cube42->setScale(irr::core::vector3df(scale, scale, scale));
	cube43->setScale(irr::core::vector3df(scale, scale, scale));
	cube44->setScale(irr::core::vector3df(scale, scale, scale));
	cube45->setScale(irr::core::vector3df(scale, scale, scale));
	cube46->setScale(irr::core::vector3df(scale, scale, scale));
	cube31->setScale(irr::core::vector3df(scale, scale, scale));
	cube36->setScale(irr::core::vector3df(scale, scale, scale));
	cube21->setScale(irr::core::vector3df(scale, scale, scale));
	cube26->setScale(irr::core::vector3df(scale, scale, scale));
	cube12->setScale(irr::core::vector3df(scale, scale, scale));
	cube13->setScale(irr::core::vector3df(scale, scale, scale));
	cube14->setScale(irr::core::vector3df(scale, scale, scale));
	cube15->setScale(irr::core::vector3df(scale, scale, scale));
	cube16->setScale(irr::core::vector3df(scale, scale, scale));
}

LetterS::LetterS(irr::core::vector3df pos, irr::scene::ISceneManager *scene, int inter, int size, irr::video::ITexture *text)
{
	scale = 1.0;
	int cube = inter + size;

	cube72 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z - cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube73 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube74 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z + cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube75 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube61 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube66 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube51 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube42 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z - cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube43 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube44 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z + cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube45 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube36 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube21 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 2, pos.X, pos.Z - cube  * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube26 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 2, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube12 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z - cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube13 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube14 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z + cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube15 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));

	cube72->setMaterialTexture(0,text);
	cube73->setMaterialTexture(0,text);
	cube74->setMaterialTexture(0,text);
	cube75->setMaterialTexture(0,text);
	cube61->setMaterialTexture(0,text);
	cube66->setMaterialTexture(0,text);
	cube51->setMaterialTexture(0,text);
	cube42->setMaterialTexture(0,text);
	cube43->setMaterialTexture(0,text);
	cube44->setMaterialTexture(0,text);
	cube45->setMaterialTexture(0,text);
	cube36->setMaterialTexture(0,text);
	cube21->setMaterialTexture(0,text);
	cube26->setMaterialTexture(0,text);
	cube12->setMaterialTexture(0,text);
	cube13->setMaterialTexture(0,text);
	cube14->setMaterialTexture(0,text);
	cube15->setMaterialTexture(0,text);
}

void LetterS::animate(float max, float min, float diff)
{
	if (up == true) {
		scale += diff;
		if (scale >= max) {
			up = false;
		}
	} else if (up == false) {
		scale -= diff;
		if (scale <= min) {
			up = true;
		}
	}
	cube72->setScale(irr::core::vector3df(scale, scale, scale));
	cube73->setScale(irr::core::vector3df(scale, scale, scale));
	cube74->setScale(irr::core::vector3df(scale, scale, scale));
	cube75->setScale(irr::core::vector3df(scale, scale, scale));
	cube61->setScale(irr::core::vector3df(scale, scale, scale));
	cube66->setScale(irr::core::vector3df(scale, scale, scale));
	cube51->setScale(irr::core::vector3df(scale, scale, scale));
	cube42->setScale(irr::core::vector3df(scale, scale, scale));
	cube43->setScale(irr::core::vector3df(scale, scale, scale));
	cube44->setScale(irr::core::vector3df(scale, scale, scale));
	cube45->setScale(irr::core::vector3df(scale, scale, scale));
	cube36->setScale(irr::core::vector3df(scale, scale, scale));
	cube21->setScale(irr::core::vector3df(scale, scale, scale));
	cube26->setScale(irr::core::vector3df(scale, scale, scale));
	cube12->setScale(irr::core::vector3df(scale, scale, scale));
	cube13->setScale(irr::core::vector3df(scale, scale, scale));
	cube14->setScale(irr::core::vector3df(scale, scale, scale));
	cube15->setScale(irr::core::vector3df(scale, scale, scale));
}

void LetterS::setScale(float scale)
{
	cube72->setScale(irr::core::vector3df(scale, scale, scale));
	cube73->setScale(irr::core::vector3df(scale, scale, scale));
	cube74->setScale(irr::core::vector3df(scale, scale, scale));
	cube75->setScale(irr::core::vector3df(scale, scale, scale));
	cube61->setScale(irr::core::vector3df(scale, scale, scale));
	cube66->setScale(irr::core::vector3df(scale, scale, scale));
	cube51->setScale(irr::core::vector3df(scale, scale, scale));
	cube42->setScale(irr::core::vector3df(scale, scale, scale));
	cube43->setScale(irr::core::vector3df(scale, scale, scale));
	cube44->setScale(irr::core::vector3df(scale, scale, scale));
	cube45->setScale(irr::core::vector3df(scale, scale, scale));
	cube36->setScale(irr::core::vector3df(scale, scale, scale));
	cube21->setScale(irr::core::vector3df(scale, scale, scale));
	cube26->setScale(irr::core::vector3df(scale, scale, scale));
	cube12->setScale(irr::core::vector3df(scale, scale, scale));
	cube13->setScale(irr::core::vector3df(scale, scale, scale));
	cube14->setScale(irr::core::vector3df(scale, scale, scale));
	cube15->setScale(irr::core::vector3df(scale, scale, scale));
}

LetterT::LetterT(irr::core::vector3df pos, irr::scene::ISceneManager *scene, int inter, int size, irr::video::ITexture *text)
{
	scale = 1.0;
	int cube = inter + size;

	cube73 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube63 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube53 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube43 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube33 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube23 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 2, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube11 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube12 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z - cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube13 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube14 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z + cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube15 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));

	cube73->setMaterialTexture(0,text);
	cube63->setMaterialTexture(0,text);
	cube53->setMaterialTexture(0,text);
	cube43->setMaterialTexture(0,text);
	cube33->setMaterialTexture(0,text);
	cube23->setMaterialTexture(0,text);
	cube11->setMaterialTexture(0,text);
	cube12->setMaterialTexture(0,text);
	cube13->setMaterialTexture(0,text);
	cube14->setMaterialTexture(0,text);
	cube15->setMaterialTexture(0,text);
}

void LetterT::animate(float max, float min, float diff)
{
	if (up == true) {
		scale += diff;
		if (scale >= max) {
			up = false;
		}
	} else if (up == false) {
		scale -= diff;
		if (scale <= min) {
			up = true;
		}
	}
	cube73->setScale(irr::core::vector3df(scale, scale, scale));
	cube63->setScale(irr::core::vector3df(scale, scale, scale));
	cube53->setScale(irr::core::vector3df(scale, scale, scale));
	cube43->setScale(irr::core::vector3df(scale, scale, scale));
	cube33->setScale(irr::core::vector3df(scale, scale, scale));
	cube23->setScale(irr::core::vector3df(scale, scale, scale));
	cube11->setScale(irr::core::vector3df(scale, scale, scale));
	cube12->setScale(irr::core::vector3df(scale, scale, scale));
	cube13->setScale(irr::core::vector3df(scale, scale, scale));
	cube14->setScale(irr::core::vector3df(scale, scale, scale));
	cube15->setScale(irr::core::vector3df(scale, scale, scale));
}

void LetterT::setScale(float scale)
{
	cube73->setScale(irr::core::vector3df(scale, scale, scale));
	cube63->setScale(irr::core::vector3df(scale, scale, scale));
	cube53->setScale(irr::core::vector3df(scale, scale, scale));
	cube43->setScale(irr::core::vector3df(scale, scale, scale));
	cube33->setScale(irr::core::vector3df(scale, scale, scale));
	cube23->setScale(irr::core::vector3df(scale, scale, scale));
	cube11->setScale(irr::core::vector3df(scale, scale, scale));
	cube12->setScale(irr::core::vector3df(scale, scale, scale));
	cube13->setScale(irr::core::vector3df(scale, scale, scale));
	cube14->setScale(irr::core::vector3df(scale, scale, scale));
	cube15->setScale(irr::core::vector3df(scale, scale, scale));
}

LetterU::LetterU(irr::core::vector3df pos, irr::scene::ISceneManager *scene, int inter, int size, irr::video::ITexture *text)
{
	scale = 1.0;
	int cube = inter + size;

	cube72 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z - cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube73 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube74 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z + cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube75 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube61 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube66 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube51 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube56 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube41 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube46 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube31 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube36 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube21 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 2, pos.X, pos.Z - cube  * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube26 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 2, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube11 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube16 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));

	cube72->setMaterialTexture(0,text);
	cube73->setMaterialTexture(0,text);
	cube74->setMaterialTexture(0,text);
	cube75->setMaterialTexture(0,text);
	cube61->setMaterialTexture(0,text);
	cube66->setMaterialTexture(0,text);
	cube51->setMaterialTexture(0,text);
	cube56->setMaterialTexture(0,text);
	cube41->setMaterialTexture(0,text);
	cube46->setMaterialTexture(0,text);
	cube31->setMaterialTexture(0,text);
	cube36->setMaterialTexture(0,text);
	cube21->setMaterialTexture(0,text);
	cube26->setMaterialTexture(0,text);
	cube11->setMaterialTexture(0,text);
	cube16->setMaterialTexture(0,text);
}

void LetterU::animate(float max, float min, float diff)
{
	if (up == true) {
		scale += diff;
		if (scale >= max) {
			up = false;
		}
	} else if (up == false) {
		scale -= diff;
		if (scale <= min) {
			up = true;
		}
	}
	cube72->setScale(irr::core::vector3df(scale, scale, scale));
	cube73->setScale(irr::core::vector3df(scale, scale, scale));
	cube74->setScale(irr::core::vector3df(scale, scale, scale));
	cube75->setScale(irr::core::vector3df(scale, scale, scale));
	cube61->setScale(irr::core::vector3df(scale, scale, scale));
	cube66->setScale(irr::core::vector3df(scale, scale, scale));
	cube51->setScale(irr::core::vector3df(scale, scale, scale));
	cube56->setScale(irr::core::vector3df(scale, scale, scale));
	cube41->setScale(irr::core::vector3df(scale, scale, scale));
	cube46->setScale(irr::core::vector3df(scale, scale, scale));
	cube31->setScale(irr::core::vector3df(scale, scale, scale));
	cube36->setScale(irr::core::vector3df(scale, scale, scale));
	cube21->setScale(irr::core::vector3df(scale, scale, scale));
	cube26->setScale(irr::core::vector3df(scale, scale, scale));
	cube11->setScale(irr::core::vector3df(scale, scale, scale));
	cube16->setScale(irr::core::vector3df(scale, scale, scale));
}

void LetterU::setScale(float scale)
{
	cube72->setScale(irr::core::vector3df(scale, scale, scale));
	cube73->setScale(irr::core::vector3df(scale, scale, scale));
	cube74->setScale(irr::core::vector3df(scale, scale, scale));
	cube75->setScale(irr::core::vector3df(scale, scale, scale));
	cube61->setScale(irr::core::vector3df(scale, scale, scale));
	cube66->setScale(irr::core::vector3df(scale, scale, scale));
	cube51->setScale(irr::core::vector3df(scale, scale, scale));
	cube56->setScale(irr::core::vector3df(scale, scale, scale));
	cube41->setScale(irr::core::vector3df(scale, scale, scale));
	cube46->setScale(irr::core::vector3df(scale, scale, scale));
	cube31->setScale(irr::core::vector3df(scale, scale, scale));
	cube36->setScale(irr::core::vector3df(scale, scale, scale));
	cube21->setScale(irr::core::vector3df(scale, scale, scale));
	cube26->setScale(irr::core::vector3df(scale, scale, scale));
	cube11->setScale(irr::core::vector3df(scale, scale, scale));
	cube16->setScale(irr::core::vector3df(scale, scale, scale));
}

LetterV::LetterV(irr::core::vector3df pos, irr::scene::ISceneManager *scene, int inter, int size, irr::video::ITexture *text)
{
	scale = 1.0;
	int cube = inter + size;

	cube74 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube63 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z - cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube65 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z + cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube53 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube, pos.X, pos.Z - cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube55 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube, pos.X, pos.Z + cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube42 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube46 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube32 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube36 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube, pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube21 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 2, pos.X, pos.Z - cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube27 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 2, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube11 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z - cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube17 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));

	cube74->setMaterialTexture(0,text);
	cube63->setMaterialTexture(0,text);
	cube65->setMaterialTexture(0,text);
	cube53->setMaterialTexture(0,text);
	cube55->setMaterialTexture(0,text);
	cube42->setMaterialTexture(0,text);
	cube46->setMaterialTexture(0,text);
	cube32->setMaterialTexture(0,text);
	cube36->setMaterialTexture(0,text);
	cube21->setMaterialTexture(0,text);
	cube27->setMaterialTexture(0,text);
	cube11->setMaterialTexture(0,text);
	cube17->setMaterialTexture(0,text);
}

void LetterV::animate(float max, float min, float diff)
{
	if (up == true) {
		scale += diff;
		if (scale >= max) {
			up = false;
		}
	} else if (up == false) {
		scale -= diff;
		if (scale <= min) {
			up = true;
		}
	}
	cube74->setScale(irr::core::vector3df(scale, scale, scale));
	cube63->setScale(irr::core::vector3df(scale, scale, scale));
	cube65->setScale(irr::core::vector3df(scale, scale, scale));
	cube53->setScale(irr::core::vector3df(scale, scale, scale));
	cube55->setScale(irr::core::vector3df(scale, scale, scale));
	cube42->setScale(irr::core::vector3df(scale, scale, scale));
	cube46->setScale(irr::core::vector3df(scale, scale, scale));
	cube32->setScale(irr::core::vector3df(scale, scale, scale));
	cube36->setScale(irr::core::vector3df(scale, scale, scale));
	cube21->setScale(irr::core::vector3df(scale, scale, scale));
	cube27->setScale(irr::core::vector3df(scale, scale, scale));
	cube11->setScale(irr::core::vector3df(scale, scale, scale));
	cube17->setScale(irr::core::vector3df(scale, scale, scale));
}

void LetterV::setScale(float scale)
{
	cube74->setScale(irr::core::vector3df(scale, scale, scale));
	cube63->setScale(irr::core::vector3df(scale, scale, scale));
	cube65->setScale(irr::core::vector3df(scale, scale, scale));
	cube53->setScale(irr::core::vector3df(scale, scale, scale));
	cube55->setScale(irr::core::vector3df(scale, scale, scale));
	cube42->setScale(irr::core::vector3df(scale, scale, scale));
	cube46->setScale(irr::core::vector3df(scale, scale, scale));
	cube32->setScale(irr::core::vector3df(scale, scale, scale));
	cube36->setScale(irr::core::vector3df(scale, scale, scale));
	cube21->setScale(irr::core::vector3df(scale, scale, scale));
	cube27->setScale(irr::core::vector3df(scale, scale, scale));
	cube11->setScale(irr::core::vector3df(scale, scale, scale));
	cube17->setScale(irr::core::vector3df(scale, scale, scale));
}

LetterW::LetterW(irr::core::vector3df pos, irr::scene::ISceneManager *scene, int inter, int size, irr::video::ITexture *text)
{
	scale = 1.0;
	int cube = inter + size;

	cube72 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube73 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z - cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube75 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z + cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube76 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube61 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z - cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube64 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube67 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube51 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube, pos.X, pos.Z - cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube54 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube57 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube41 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z - cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube44 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube47 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube31 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube, pos.X, pos.Z - cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube34 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube37 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube21 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 2, pos.X, pos.Z - cube  * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube24 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 2, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube27 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 2, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube11 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z - cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube14 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube17 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));

	cube72->setMaterialTexture(0,text);
	cube73->setMaterialTexture(0,text);
	cube75->setMaterialTexture(0,text);
	cube76->setMaterialTexture(0,text);
	cube61->setMaterialTexture(0,text);
	cube64->setMaterialTexture(0,text);
	cube67->setMaterialTexture(0,text);
	cube51->setMaterialTexture(0,text);
	cube54->setMaterialTexture(0,text);
	cube57->setMaterialTexture(0,text);
	cube41->setMaterialTexture(0,text);
	cube44->setMaterialTexture(0,text);
	cube47->setMaterialTexture(0,text);
	cube31->setMaterialTexture(0,text);
	cube34->setMaterialTexture(0,text);
	cube37->setMaterialTexture(0,text);
	cube21->setMaterialTexture(0,text);
	cube24->setMaterialTexture(0,text);
	cube27->setMaterialTexture(0,text);
	cube11->setMaterialTexture(0,text);
	cube14->setMaterialTexture(0,text);
	cube17->setMaterialTexture(0,text);
}

void LetterW::animate(float max, float min, float diff)
{
	if (up == true) {
		scale += diff;
		if (scale >= max) {
			up = false;
		}
	} else if (up == false) {
		scale -= diff;
		if (scale <= min) {
			up = true;
		}
	}
	cube72->setScale(irr::core::vector3df(scale, scale, scale));
	cube73->setScale(irr::core::vector3df(scale, scale, scale));
	cube75->setScale(irr::core::vector3df(scale, scale, scale));
	cube76->setScale(irr::core::vector3df(scale, scale, scale));
	cube61->setScale(irr::core::vector3df(scale, scale, scale));
	cube64->setScale(irr::core::vector3df(scale, scale, scale));
	cube67->setScale(irr::core::vector3df(scale, scale, scale));
	cube51->setScale(irr::core::vector3df(scale, scale, scale));
	cube54->setScale(irr::core::vector3df(scale, scale, scale));
	cube57->setScale(irr::core::vector3df(scale, scale, scale));
	cube41->setScale(irr::core::vector3df(scale, scale, scale));
	cube44->setScale(irr::core::vector3df(scale, scale, scale));
	cube47->setScale(irr::core::vector3df(scale, scale, scale));
	cube31->setScale(irr::core::vector3df(scale, scale, scale));
	cube34->setScale(irr::core::vector3df(scale, scale, scale));
	cube37->setScale(irr::core::vector3df(scale, scale, scale));
	cube21->setScale(irr::core::vector3df(scale, scale, scale));
	cube24->setScale(irr::core::vector3df(scale, scale, scale));
	cube27->setScale(irr::core::vector3df(scale, scale, scale));
	cube11->setScale(irr::core::vector3df(scale, scale, scale));
	cube14->setScale(irr::core::vector3df(scale, scale, scale));
	cube17->setScale(irr::core::vector3df(scale, scale, scale));
}

void LetterW::setScale(float scale)
{
	cube72->setScale(irr::core::vector3df(scale, scale, scale));
	cube73->setScale(irr::core::vector3df(scale, scale, scale));
	cube75->setScale(irr::core::vector3df(scale, scale, scale));
	cube76->setScale(irr::core::vector3df(scale, scale, scale));
	cube61->setScale(irr::core::vector3df(scale, scale, scale));
	cube64->setScale(irr::core::vector3df(scale, scale, scale));
	cube67->setScale(irr::core::vector3df(scale, scale, scale));
	cube51->setScale(irr::core::vector3df(scale, scale, scale));
	cube54->setScale(irr::core::vector3df(scale, scale, scale));
	cube57->setScale(irr::core::vector3df(scale, scale, scale));
	cube41->setScale(irr::core::vector3df(scale, scale, scale));
	cube44->setScale(irr::core::vector3df(scale, scale, scale));
	cube47->setScale(irr::core::vector3df(scale, scale, scale));
	cube31->setScale(irr::core::vector3df(scale, scale, scale));
	cube34->setScale(irr::core::vector3df(scale, scale, scale));
	cube37->setScale(irr::core::vector3df(scale, scale, scale));
	cube21->setScale(irr::core::vector3df(scale, scale, scale));
	cube24->setScale(irr::core::vector3df(scale, scale, scale));
	cube27->setScale(irr::core::vector3df(scale, scale, scale));
	cube11->setScale(irr::core::vector3df(scale, scale, scale));
	cube14->setScale(irr::core::vector3df(scale, scale, scale));
	cube17->setScale(irr::core::vector3df(scale, scale, scale));
}

LetterX::LetterX(irr::core::vector3df pos, irr::scene::ISceneManager *scene, int inter, int size, irr::video::ITexture *text)
{
	scale = 1.0;
	int cube = inter + size;

	cube71 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z - cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube77 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube62 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube66 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube53 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube, pos.X, pos.Z - cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube55 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube, pos.X, pos.Z + cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube44 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube33 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube, pos.X, pos.Z - cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube35 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube, pos.X, pos.Z + cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube22 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 2, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube26 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 2, pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube11 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z - cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube17 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));

	cube71->setMaterialTexture(0,text);
	cube77->setMaterialTexture(0,text);
	cube62->setMaterialTexture(0,text);
	cube66->setMaterialTexture(0,text);
	cube53->setMaterialTexture(0,text);
	cube55->setMaterialTexture(0,text);
	cube44->setMaterialTexture(0,text);
	cube33->setMaterialTexture(0,text);
	cube35->setMaterialTexture(0,text);
	cube22->setMaterialTexture(0,text);
	cube26->setMaterialTexture(0,text);
	cube11->setMaterialTexture(0,text);
	cube17->setMaterialTexture(0,text);
}

void LetterX::animate(float max, float min, float diff)
{
	if (up == true) {
		scale += diff;
		if (scale >= max) {
			up = false;
		}
	} else if (up == false) {
		scale -= diff;
		if (scale <= min) {
			up = true;
		}
	}
	cube71->setScale(irr::core::vector3df(scale, scale, scale));
	cube77->setScale(irr::core::vector3df(scale, scale, scale));
	cube62->setScale(irr::core::vector3df(scale, scale, scale));
	cube66->setScale(irr::core::vector3df(scale, scale, scale));
	cube53->setScale(irr::core::vector3df(scale, scale, scale));
	cube55->setScale(irr::core::vector3df(scale, scale, scale));
	cube44->setScale(irr::core::vector3df(scale, scale, scale));
	cube33->setScale(irr::core::vector3df(scale, scale, scale));
	cube35->setScale(irr::core::vector3df(scale, scale, scale));
	cube22->setScale(irr::core::vector3df(scale, scale, scale));
	cube26->setScale(irr::core::vector3df(scale, scale, scale));
	cube11->setScale(irr::core::vector3df(scale, scale, scale));
	cube17->setScale(irr::core::vector3df(scale, scale, scale));
}

void LetterX::setScale(float scale)
{
	cube71->setScale(irr::core::vector3df(scale, scale, scale));
	cube77->setScale(irr::core::vector3df(scale, scale, scale));
	cube62->setScale(irr::core::vector3df(scale, scale, scale));
	cube66->setScale(irr::core::vector3df(scale, scale, scale));
	cube53->setScale(irr::core::vector3df(scale, scale, scale));
	cube55->setScale(irr::core::vector3df(scale, scale, scale));
	cube44->setScale(irr::core::vector3df(scale, scale, scale));
	cube33->setScale(irr::core::vector3df(scale, scale, scale));
	cube35->setScale(irr::core::vector3df(scale, scale, scale));
	cube22->setScale(irr::core::vector3df(scale, scale, scale));
	cube26->setScale(irr::core::vector3df(scale, scale, scale));
	cube11->setScale(irr::core::vector3df(scale, scale, scale));
	cube17->setScale(irr::core::vector3df(scale, scale, scale));
}

LetterY::LetterY(irr::core::vector3df pos, irr::scene::ISceneManager *scene, int inter, int size, irr::video::ITexture *text)
{
	scale = 1.0;
	int cube = inter + size;

	cube74 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 3, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube64 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube54 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube44 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube33 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube, pos.X, pos.Z - cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube35 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube, pos.X, pos.Z + cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube22 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 2, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube26 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 2, pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube11 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z - cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube17 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));

	cube74->setMaterialTexture(0,text);
	cube64->setMaterialTexture(0,text);
	cube54->setMaterialTexture(0,text);
	cube44->setMaterialTexture(0,text);
	cube33->setMaterialTexture(0,text);
	cube35->setMaterialTexture(0,text);
	cube22->setMaterialTexture(0,text);
	cube26->setMaterialTexture(0,text);
	cube11->setMaterialTexture(0,text);
	cube17->setMaterialTexture(0,text);
}

void LetterY::animate(float max, float min, float diff)
{
	if (up == true) {
		scale += diff;
		if (scale >= max) {
			up = false;
		}
	} else if (up == false) {
		scale -= diff;
		if (scale <= min) {
			up = true;
		}
	}
	cube74->setScale(irr::core::vector3df(scale, scale, scale));
	cube64->setScale(irr::core::vector3df(scale, scale, scale));
	cube54->setScale(irr::core::vector3df(scale, scale, scale));
	cube44->setScale(irr::core::vector3df(scale, scale, scale));
	cube33->setScale(irr::core::vector3df(scale, scale, scale));
	cube35->setScale(irr::core::vector3df(scale, scale, scale));
	cube22->setScale(irr::core::vector3df(scale, scale, scale));
	cube26->setScale(irr::core::vector3df(scale, scale, scale));
	cube11->setScale(irr::core::vector3df(scale, scale, scale));
	cube17->setScale(irr::core::vector3df(scale, scale, scale));
}

void LetterY::setScale(float scale)
{
	cube74->setScale(irr::core::vector3df(scale, scale, scale));
	cube64->setScale(irr::core::vector3df(scale, scale, scale));
	cube54->setScale(irr::core::vector3df(scale, scale, scale));
	cube44->setScale(irr::core::vector3df(scale, scale, scale));
	cube33->setScale(irr::core::vector3df(scale, scale, scale));
	cube35->setScale(irr::core::vector3df(scale, scale, scale));
	cube22->setScale(irr::core::vector3df(scale, scale, scale));
	cube26->setScale(irr::core::vector3df(scale, scale, scale));
	cube11->setScale(irr::core::vector3df(scale, scale, scale));
	cube17->setScale(irr::core::vector3df(scale, scale, scale));
}

LetterZ::LetterZ(irr::core::vector3df pos, irr::scene::ISceneManager *scene, int inter, int size, irr::video::ITexture *text)
{
	scale = 1.0;
	int cube = inter + size;

	cube61 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube62 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z - cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube63 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube64 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z + cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube65 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube66 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube * 2, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube55 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y - cube, pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube44 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y, pos.X, pos.Z + cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube33 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube22 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 2, pos.X, pos.Z - cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube11 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z - cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube12 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z - cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube13 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube14 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z + cube), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube15 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z + cube * 2), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));
	cube16 = scene->addCubeSceneNode(size, 0, 10, irr::core::vector3df(pos.Y + cube * 3, pos.X, pos.Z + cube * 3), irr::core::vector3df(0,0,0), irr::core::vector3df(1.0f,1.0f,1.0f));

	cube61->setMaterialTexture(0,text);
	cube62->setMaterialTexture(0,text);
	cube63->setMaterialTexture(0,text);
	cube64->setMaterialTexture(0,text);
	cube65->setMaterialTexture(0,text);
	cube66->setMaterialTexture(0,text);
	cube55->setMaterialTexture(0,text);
	cube44->setMaterialTexture(0,text);
	cube33->setMaterialTexture(0,text);
	cube22->setMaterialTexture(0,text);
	cube11->setMaterialTexture(0,text);
	cube12->setMaterialTexture(0,text);
	cube13->setMaterialTexture(0,text);
	cube14->setMaterialTexture(0,text);
	cube15->setMaterialTexture(0,text);
	cube16->setMaterialTexture(0,text);
}

void LetterZ::animate(float max, float min, float diff)
{
	if (up == true) {
		scale += diff;
		if (scale >= max) {
			up = false;
		}
	} else if (up == false) {
		scale -= diff;
		if (scale <= min) {
			up = true;
		}
	}
	cube61->setScale(irr::core::vector3df(scale, scale, scale));
	cube62->setScale(irr::core::vector3df(scale, scale, scale));
	cube63->setScale(irr::core::vector3df(scale, scale, scale));
	cube64->setScale(irr::core::vector3df(scale, scale, scale));
	cube65->setScale(irr::core::vector3df(scale, scale, scale));
	cube66->setScale(irr::core::vector3df(scale, scale, scale));
	cube55->setScale(irr::core::vector3df(scale, scale, scale));
	cube44->setScale(irr::core::vector3df(scale, scale, scale));
	cube33->setScale(irr::core::vector3df(scale, scale, scale));
	cube22->setScale(irr::core::vector3df(scale, scale, scale));
	cube11->setScale(irr::core::vector3df(scale, scale, scale));
	cube12->setScale(irr::core::vector3df(scale, scale, scale));
	cube13->setScale(irr::core::vector3df(scale, scale, scale));
	cube14->setScale(irr::core::vector3df(scale, scale, scale));
	cube15->setScale(irr::core::vector3df(scale, scale, scale));
	cube16->setScale(irr::core::vector3df(scale, scale, scale));
}

void LetterZ::setScale(float scale)
{
	cube61->setScale(irr::core::vector3df(scale, scale, scale));
	cube62->setScale(irr::core::vector3df(scale, scale, scale));
	cube63->setScale(irr::core::vector3df(scale, scale, scale));
	cube64->setScale(irr::core::vector3df(scale, scale, scale));
	cube65->setScale(irr::core::vector3df(scale, scale, scale));
	cube66->setScale(irr::core::vector3df(scale, scale, scale));
	cube55->setScale(irr::core::vector3df(scale, scale, scale));
	cube44->setScale(irr::core::vector3df(scale, scale, scale));
	cube33->setScale(irr::core::vector3df(scale, scale, scale));
	cube22->setScale(irr::core::vector3df(scale, scale, scale));
	cube11->setScale(irr::core::vector3df(scale, scale, scale));
	cube12->setScale(irr::core::vector3df(scale, scale, scale));
	cube13->setScale(irr::core::vector3df(scale, scale, scale));
	cube14->setScale(irr::core::vector3df(scale, scale, scale));
	cube15->setScale(irr::core::vector3df(scale, scale, scale));
	cube16->setScale(irr::core::vector3df(scale, scale, scale));
}
