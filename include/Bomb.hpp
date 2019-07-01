/*
** EPITECH PROJECT, 2019
** IndieStudio
** File description:
** include/Bomb.hpp
*/

#ifndef BOMB_HPP
#define BOMB_HPP

#include <chrono>
#include <irrlicht.h>
#include <vector>
#include <SFML/Audio.hpp>

#define POS_BOMB_STORAGE irr::core::vector3df(-1000.0f, 1.0f, 0.0f)

class Flame;
class Player;

class Bomb
{
public:
	enum BombState
	{
		BOMB_TO_PLANT,
		BOMB_PLANTED,
		BOMB_EXPLOSED,
		BOMB_EXPIRED
	};

	Bomb(irr::scene::ISceneManager *scene, irr::video::IVideoDriver *driver);

	bool place(const irr::core::vector3df &playerPosition);
	const BombState &getState();
	void setFire();
	void removeFire();
	void checkPlayerCollision(std::vector<Player *> &collisionPlayerList, std::vector<Player *> &playerList);
	bool isPlayerInList(Player *player, std::vector<Player *> &playerList) const;
	void checkWoodCollision(std::vector<irr::scene::IMeshSceneNode *> &collisionWoodList, std::vector<irr::scene::IMeshSceneNode *> &woodList);
	bool isCubeInList(irr::scene::IMeshSceneNode *cube, std::vector<irr::scene::IMeshSceneNode *> &woodList) const;

	void load(void);
	bool update(float fElapsedTime);
	bool render(void);

	void clear(void);

private:
	irr::scene::ISceneManager *_scene;
	irr::scene::IAnimatedMeshSceneNode *_bomb;
	std::chrono::time_point<std::chrono::_V2::system_clock, std::chrono::duration<long int, std::ratio<1l, 1000000000l>>> _clock;
	BombState _state;
	bool _explosed;
	bool _expired;

	void setState(const Bomb::BombState &bomb);
	std::vector<Flame *> _flameList;
	sf::Music _musicBoom;
	sf::Music _musicDead;
	sf::Music _musicPlanted;
};

#endif /* BOMB_HPP */
