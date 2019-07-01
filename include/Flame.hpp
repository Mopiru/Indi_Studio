/*
** EPITECH PROJECT, 2018
** IndieStudio
** File description:
** include/Flame.hpp
*/

#ifndef __FLAME_HPP__
#define __FLAME_HPP__

#include <string>
#include <vector>
#include "irrlicht.h"

class Player;
class Map;

class Flame {
public:
	Flame(
		irr::core::vector3df bombPosition,
		irr::scene::ISceneManager *scene,
		irr::video::IVideoDriver *driver);
	irr::scene::IMeshSceneNode *getNode() const;
private:
	irr::scene::IMeshSceneNode *_node;
};

#endif /* __FLAME_HPP__ */
