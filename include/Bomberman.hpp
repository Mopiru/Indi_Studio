/*
** EPITECH PROJECT, 2019
** IndieStudio
** File description:
** include/Bomberman.hpp
*/

#ifndef BOMBERMAN_HPP
#define BOMBERMAN_HPP

#include "ISGE.hpp"
#include <SFML/Audio.hpp>

enum BombermanScenes
{
	MAIN_MENU_SCENE = 0,
	SOUND_MENU_SCENE = 1,
	GAME_TRANSITION_SCENE = 2,
	GAME_SCENE = 3,
	GAMEOVER_TRANSITION_SCENE = 4
};

class Bomberman : public isge::GameEngine
{
public:
	Bomberman();

	bool onCreate() override;
	bool onUpdate(float fElapsedTime) override;
	bool onDestroy() override;
};

#endif /* BOMBERMAN_HPP */
