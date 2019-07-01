/*
** EPITECH PROJECT, 2019
** IndieStudio
** File description:
** src/game/GameTransition.cpp
*/

#include "Bomberman.hpp"
#include "Game.hpp"
#include "GameTransition.hpp"

GameTransition::GameTransition(irr::IrrlichtDevice *device) :
	Scene(device)
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

void GameTransition::load(void)
{
	this->_move_smooth_check = false;
	this->_move_target_check = false;
	this->_animation = false;

	_device->getSceneManager()->setAmbientLight(irr::video::SColorf(1.0f, 1.0f, 1.0f, 0.0f));
	_device->getSceneManager()->getActiveCamera()->setPosition(irr::core::vector3df(-400, 800, 0));
	_device->getSceneManager()->getActiveCamera()->setTarget(irr::core::vector3df(700, 800, 0));

	this->_increment = 0;
	_skybox->setVisible(true);

	static_cast<Game *>(_scenes.at(BombermanScenes::GAME_SCENE))->reset();
}

bool GameTransition::update(float fElapsedTime)
{
	int tmp = 0;

	if (_eventListener.isKeyPressed(irr::KEY_RETURN) && _increment > 30)
		_animation = true;

	this->_increment += 1;

	if (!_animation)
		return (true);

	tmp -= move_smooth(irr::core::vector3df(-100, 550, 0), 2);
	tmp -= move_target(irr::core::vector3df(0, 0, 0), 2.5f);

	if (tmp == 2) {
		changeScene(BombermanScenes::GAME_SCENE);
		_skybox->setVisible(false);
	}

	return (true);
}

bool GameTransition::render(void)
{
	_device->getSceneManager()->drawAll();
	return (true);
}

void GameTransition::onEvent(const irr::SEvent &event)
{
}

int GameTransition::move_smooth(irr::core::vector3df dest_pos, float speed)
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

int GameTransition::move_target(irr::core::vector3df dest_pos, float speed)
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
