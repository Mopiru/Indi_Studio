/*
** EPITECH PROJECT, 2019
** IndieStudio
** File description:
** src/game/GameOverTransition.cpp
*/

#include "Bomberman.hpp"
#include "GameOverTransition.hpp"

GameOverTransition::GameOverTransition(irr::IrrlichtDevice *device) :
	Scene(device),
	_gameG(irr::core::vector3df(0, -600, 150), device->getSceneManager(), 0, 10, device->getVideoDriver()->getTexture("./assets/stone.jpg")),
	_gameA(irr::core::vector3df(0, -600, 50), device->getSceneManager(), 0, 10, device->getVideoDriver()->getTexture("./assets/stone.jpg")),
	_gameM(irr::core::vector3df(0, -600, -50), device->getSceneManager(), 0, 10, device->getVideoDriver()->getTexture("./assets/stone.jpg")),
	_gameE(irr::core::vector3df(0, -600, -150), device->getSceneManager(), 0, 10, device->getVideoDriver()->getTexture("./assets/stone.jpg")),
	_overO(irr::core::vector3df(0, -700, 150), device->getSceneManager(), 0, 10, device->getVideoDriver()->getTexture("./assets/stone.jpg")),
	_overV(irr::core::vector3df(0, -700, 50), device->getSceneManager(), 0, 10, device->getVideoDriver()->getTexture("./assets/stone.jpg")),
	_overE(irr::core::vector3df(0, -700, -50), device->getSceneManager(), 0, 10, device->getVideoDriver()->getTexture("./assets/stone.jpg")),
	_overR(irr::core::vector3df(0, -700, -150), device->getSceneManager(), 0, 10, device->getVideoDriver()->getTexture("./assets/stone.jpg"))
{
	this->_cube = device->getSceneManager()->addCubeSceneNode(300, 0, 30, irr::core::vector3df(0 , 800 ,0), irr::core::vector3df(0, 0, 0), irr::core::vector3df(1.0f, 1.0f, 1.0f));
	_cube->setMaterialTexture(0, device->getVideoDriver()->getTexture("./assets/game_controls_inversed.png"));
	_cube->setScale(irr::core::vector3df(0.01f, 1.5f, 1.5f));

	this->_skybox = _device->getSceneManager()->addSkyBoxSceneNode(
		_device->getVideoDriver()->getTexture("./assets/irrlicht2_up.jpg"),
		_device->getVideoDriver()->getTexture("./assets/irrlicht2_dn.jpg"),
		_device->getVideoDriver()->getTexture("./assets/irrlicht2_lf.jpg"),
		_device->getVideoDriver()->getTexture("./assets/irrlicht2_rt.jpg"),
		_device->getVideoDriver()->getTexture("./assets/irrlicht2_ft.jpg"),
		_device->getVideoDriver()->getTexture("./assets/irrlicht2_bk.jpg")
	);
	_skybox->setVisible(false);
}

void GameOverTransition::load(void)
{
	this->_move_smooth_check = false;
	this->_move_target_check = false;
	this->_animation = true;

	_device->getSceneManager()->setAmbientLight(irr::video::SColorf(1.0f, 1.0f, 1.0f, 0.0f));
	_device->getSceneManager()->getActiveCamera()->setPosition(irr::core::vector3df(-100, 550, 0));
	_device->getSceneManager()->getActiveCamera()->setTarget(irr::core::vector3df(0, 0, 0));

	_skybox->setVisible(true);
}

bool GameOverTransition::update(float fElapsedTime)
{
	int tmp = 0;

	if (!_animation) {
		if (_eventListener.isKeyPressed(irr::KEY_RETURN)) {
			_skybox->setVisible(false);
			changeScene(BombermanScenes::MAIN_MENU_SCENE);
		}
		return (true);
	}

	tmp -= move_smooth(irr::core::vector3df(-650, 300, 0), 2);
	tmp -= move_target(irr::core::vector3df(-650, 100, 0), 2);

	if (tmp == 2)
		this->_animation = false;

	return (true);
}

bool GameOverTransition::render(void)
{
	_device->getSceneManager()->drawAll();
	return (true);
}

void GameOverTransition::onEvent(const irr::SEvent &event)
{
}

int GameOverTransition::move_smooth(irr::core::vector3df dest_pos, float speed)
{
	if (_move_smooth_check)
		return (-1);

	irr::core::vector3df act = _device->getSceneManager()->getActiveCamera()->getAbsolutePosition();
	if (act.X - dest_pos.X == 0 && act.Y - dest_pos.Y  == 0 && act.Z - dest_pos.Z == 0) {
		this->_move_smooth_check = true;
		return (-1);
	}

	float x = dest_pos.X - act.X;
	if (x == 0)
		x = act.X;
	else if (x < 0)
		x = act.X - speed;
	else
		x = act.X + speed;

	float y = dest_pos.Y - act.Y;
	if (y == 0)
		y = act.Y;
	else if (y < 0)
		y = act.Y - speed;
	else
		y = act.Y + speed;

	float z = dest_pos.Z - act.Z;
	if (z == 0)
		z = act.Z;
	else if (z < 0)
		z = act.Z - speed;
	else
		z = act.Z + speed;

	_device->getSceneManager()->getActiveCamera()->setPosition(irr::core::vector3df(x, y, z));
	return (0);
}

int GameOverTransition::move_target(irr::core::vector3df dest_pos, float speed)
{
	if (_move_target_check)
		return (-1);

	irr::core::vector3df act = _device->getSceneManager()->getActiveCamera()->getTarget();
	if (act.X - dest_pos.X == 0 && act.Y - dest_pos.Y  == 0 && act.Z - dest_pos.Z == 0) {
		this->_move_target_check = true;
		return (-1);
	}

	float x = dest_pos.X - act.X;
	if (x == 0)
		x = act.X;
	else if (x < 0)
		x = act.X - speed;
	else
		x = act.X + speed;

	float y = dest_pos.Y - act.Y;
	if (y == 0)
		y = act.Y;
	else if (y < 0)
		y = act.Y - speed;
	else
		y = act.Y + speed;

	float z = dest_pos.Z - act.Z;
	if (z == 0)
		z = act.Z;
	else if (z < 0)
		z = act.Z - speed;
	else
		z = act.Z + speed;

	_device->getSceneManager()->getActiveCamera()->setTarget(irr::core::vector3df(x, y, z));
	return (0);
}
