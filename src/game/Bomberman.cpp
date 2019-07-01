/*
** EPITECH PROJECT, 2019
** IndieStudio
** File description:
** src/game/Bomberman.cpp
*/

#include "Bomberman.hpp"
#include "MainMenu.hpp"
#include "SoundMenu.hpp"
#include "GameTransition.hpp"
#include "GameOverTransition.hpp"
#include "Game.hpp"

Bomberman::Bomberman() :
	isge::GameEngine(
		"Bomberman",
		isge::vec2i(1280, 720),
		false
	)
{
	showCursor();
	hideFPS();
}

bool Bomberman::onCreate()
{
	isge::Scene sceneManager(_device);

	sceneManager._scenes.push_back(new MainMenu(_device));
	sceneManager._scenes.push_back(new SoundMenu(_device));
	sceneManager._scenes.push_back(new GameTransition(_device));
	sceneManager._scenes.push_back(new Game(_device));
	sceneManager._scenes.push_back(new GameOverTransition(_device));

	sceneManager._sceneIndex = MAIN_MENU_SCENE;
	sceneManager._scenes.at(sceneManager._sceneIndex)->load();

	_device->setEventReceiver(&sceneManager._eventListener);

	return (true);
}

bool Bomberman::onUpdate(float fElapsedTime)
{
	return (true);
}

bool Bomberman::onDestroy()
{
	return (true);
}
