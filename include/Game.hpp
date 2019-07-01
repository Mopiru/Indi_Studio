/*
** EPITECH PROJECT, 2019
** IndieStudio
** File description:
** include/Game.hpp
*/

#ifndef GAME_HPP
#define GAME_HPP

#include "ISGE.hpp"
#include "Map.hpp"
#include "Player.hpp"

#define POS_START_PLAYER_ONE irr::core::vector3df(270.0f, 1.0f, 220.0f)
#define POS_START_PLAYER_TWO irr::core::vector3df(270.0f, 1.0f, -270.0f)
#define POS_START_PLAYER_THREE irr::core::vector3df(-220.0f, 1.0f, 220.0f)
#define POS_START_PLAYER_FOUR irr::core::vector3df(-220.0f, 1.0f, -270.0f)
#define CEMETERY irr::core::vector3df(-1000.0f, 1.0f, 0.0f)

enum GameElement
{
	GAME_MENU_BUTTON = 1000,
	GAME_PAUSE_BUTTON = 1001
};

class Game : public isge::Scene
{
public:
	Game(irr::IrrlichtDevice *device);

	void load(void) override;
	bool update(float fElapsedTime) override;
	bool render(void) override;
	void onEvent(const irr::SEvent &event) override;

	void reset(void);

private:
	Map *_map = 0;
	std::vector<Player *> _playerList;
	irr::scene::ISceneNode *_skybox;
	sf::Music _musicGame;
	sf::Music _musicDead;
	irr::gui::IGUIButton *_pause;
	int _increment;
};

#endif /* GAME_HPP */
