/*
** EPITECH PROJECT, 2019
** IndieStudio
** File description:
** include/Map.hpp
*/

#ifndef MAP_HPP
#define MAP_HPP

#include <vector>
#include <irrlicht.h>

// #include "Logger.hpp"
// #include "Utils.hpp"
#include <cstdlib>
#include <iostream>
#include <ctime>

class Map
{
private:
	std::vector<irr::scene::IMeshSceneNode *> cube_ground;
	std::vector<irr::scene::IMeshSceneNode *> cube_stone;
	std::vector<irr::scene::IMeshSceneNode *> cube_wood;
public:
	Map(irr::scene::ISceneManager *sce, int height, int size_cube, int ratio, irr::video::ITexture *text_ground, irr::video::ITexture *text_stone, irr::video::ITexture *text_wood);
	std::vector<irr::scene::IMeshSceneNode *> getCubeVector(std::string) const;
	void setPlayerCollision(irr::scene::ISceneManager *scene, irr::scene::IAnimatedMeshSceneNode *playerNode, std::string) const;

	void clear(void);
};

#endif
