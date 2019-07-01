/*
** EPITECH PROJECT, 2018
** IndieStudio
** File description:
** src/game/Flame.cpp
*/

#include "Flame.hpp"
#include "Player.hpp"
#include <iostream>

Flame::Flame(
	irr::core::vector3df bombPosition,
	irr::scene::ISceneManager *scene,
	irr::video::IVideoDriver *driver)
{
	_node = scene->addCubeSceneNode(
		40.0f,
		0,
		-1,
		bombPosition
	);
	_node->setMaterialTexture(0, driver->getTexture("./assets/fire.jpg"));
	_node->setMaterialFlag(irr::video::EMF_LIGHTING, false);
}

irr::scene::IMeshSceneNode *Flame::getNode() const
{
	return _node;
}
