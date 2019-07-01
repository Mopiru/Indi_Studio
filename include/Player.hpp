/*
** EPITECH PROJECT, 2018
** IndieStudio
** File description:
** include/Player.hpp
*/

#ifndef __PLAYER_HPP__
#define __PLAYER_HPP__

#include <string>
#include "irrlicht.h"
#include "Bomb.hpp"

class Player {
public:
	Player(
		irr::s32 nodeId,
		irr::video::IVideoDriver *driver,
		irr::scene::ISceneManager *scene,
		irr::core::vector3df position,
		std::string color);

	irr::scene::IAnimatedMeshSceneNode* getNode() const;
	irr::s32 getNodeId() const;
	bool isPlayerAlive() const;
	void setDead();
	Bomb *getBomb() const;

private:
	irr::scene::IAnimatedMeshSceneNode* _node;
	irr::s32 _nodeId;
	int _bombNb;
	bool _isAlive;
	Bomb *_bomb = 0;
};

bool operator==(const Player &a, const Player &b);

#endif /* __PLAYER_HPP__ */
