/*
** EPITECH PROJECT, 2018
** IndieStudio
** File description:
** src/game/Player.cpp
*/

#include "Player.hpp"

Player::Player(
	irr::s32 nodeId,
	irr::video::IVideoDriver *driver,
	irr::scene::ISceneManager *scene,
	irr::core::vector3df position,
	std::string color)
	: _node(nullptr), _nodeId(nodeId), _bombNb(0), _isAlive(true)
{
	std::string texturePath = "./assets/pedobear";
	if (color.compare("blue") == 0 || color.compare("red") == 0 || color.compare("yellow") == 0) {
		texturePath.push_back('_');
		texturePath.append(color.append(".png"));
	}
	else
		texturePath.append(".png");
	_node = scene->addAnimatedMeshSceneNode(
		scene->getMesh("./assets/pedobear_animated.b3d"),
		0,
		nodeId,
		position,
		irr::core::vector3df(0.0f, 90.0f, 0.0f),
		irr::core::vector3df(0.35f, 0.35f, 0.5f));
	if (_node) {
		_node->getMaterial(0).setTexture(0, driver->getTexture(texturePath.c_str()));
		_node->setAnimationSpeed(0.0);
		_node->getMaterial(0).NormalizeNormals = true;
		_node->setMaterialFlag(irr::video::EMF_LIGHTING, false);
	}
	this->_bomb = new Bomb(scene, driver);
}

irr::scene::IAnimatedMeshSceneNode *Player::getNode() const
{
	if (_node)
		return _node;
	return nullptr;
}

irr::s32 Player::getNodeId() const
{
	return _nodeId;
}

bool Player::isPlayerAlive() const
{
	return _isAlive;
}

void Player::setDead()
{
	_isAlive = false;
}

Bomb	*Player::getBomb() const
{
	return _bomb;
}

bool operator==(const Player &a, const Player &b)
{
	return a.getNodeId() == b.getNodeId();
}
