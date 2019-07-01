/*
** EPITECH PROJECT, 2019
** IndieStudio
** File description:
** src/game/Bomb.cpp
*/

#include "Bomb.hpp"
#include "Flame.hpp"
#include "Player.hpp"
#include "SoundMenu.hpp"

Bomb::Bomb(irr::scene::ISceneManager *scene, irr::video::IVideoDriver *driver) :
	_scene(scene),
	_state(BOMB_TO_PLANT),
	_explosed(false),
	_expired(false)
{
	_bomb = scene->addAnimatedMeshSceneNode(
		scene->getMesh("./assets/black-handbomb.b3d"),
		0,
		-1,
		irr::core::vector3df(POS_BOMB_STORAGE),
		irr::core::vector3df(0.0f, 0.0f, 0.0f),
		irr::core::vector3df(3.0f, 3.0f, 3.0f)
	);
	if (_bomb) {
		_bomb->getMaterial(0).setTexture(0, driver->getTexture("./assets/black-handbomb.jpg"));
		_bomb->setAnimationSpeed(10.0f);
		_bomb->getMaterial(0).NormalizeNormals = true;
		_bomb->setMaterialFlag(irr::video::EMF_LIGHTING, false);
	}
	for (int i = 0; i != 5; ++i) {
		_flameList.push_back(new Flame(_bomb->getPosition(), scene, driver));
	}
	_musicBoom.openFromFile("assets/music/explosion.ogg");
	_musicPlanted.openFromFile("./assets/music/surprise-motherfcker.ogg");
}

bool Bomb::place(const irr::core::vector3df &playerPosition)
{
	if (_state != BOMB_TO_PLANT)
		return (false);

	if (SoundMenu::isSoundEnabled())
		_musicPlanted.play();
	_bomb->setPosition(playerPosition);
	setState(BOMB_PLANTED);

	return (true);
}

const Bomb::BombState &Bomb::getState()
{
	return (_state);
}

void Bomb::load(void)
{
	setState(BOMB_TO_PLANT);
}

bool Bomb::update(float fElapsedTime)
{
	if (_state == BOMB_TO_PLANT)
		return (true);
	auto time = std::chrono::system_clock::now();
	std::chrono::duration<float> diff = time - _clock;

	if (diff.count() > 4.5 && !_expired) {
		setState(BOMB_EXPIRED);
		setState(BOMB_TO_PLANT);
	}
	else if (diff.count() > 3 && !_explosed)
		setState(BOMB_EXPLOSED);
	return (true);
}

bool Bomb::render(void)
{
	return (true);
}

void Bomb::setState(const Bomb::BombState &state)
{
	switch (state) {
	case BOMB_TO_PLANT:
		this->_state = BOMB_TO_PLANT;
		this->_explosed = false;
		this->_expired = false;
		break;
	case BOMB_PLANTED:
		this->_state = BOMB_PLANTED;
		this->_clock = std::chrono::system_clock::now();
		break;
	case BOMB_EXPLOSED:
		if (SoundMenu::isSoundEnabled())
			_musicBoom.play();
		this->_state = BOMB_EXPLOSED;
		this->_explosed = true;
		setFire();
		_bomb->setPosition(POS_BOMB_STORAGE);
		break;
	case BOMB_EXPIRED:
		this->_state = BOMB_EXPIRED;
		this->_expired = true;
		removeFire();
		break;
	}
}

void	Bomb::setFire()
{
	irr::core::vector3df nodePosition = _bomb->getPosition();
	nodePosition.X += 40.0f;
	nodePosition.Y -= 15.0f;
	_flameList[0]->getNode()->setPosition(nodePosition);

	nodePosition = _bomb->getPosition();
	nodePosition.X -= 40.0f;
	nodePosition.Y -= 15.0f;
	_flameList[1]->getNode()->setPosition(nodePosition);

	nodePosition = _bomb->getPosition();
	nodePosition.Z += 40.0f;
	nodePosition.Y -= 15.0f;
	_flameList[2]->getNode()->setPosition(nodePosition);

	nodePosition = _bomb->getPosition();
	nodePosition.Z -= 40.0f;
	nodePosition.Y -= 15.0f;
	_flameList[3]->getNode()->setPosition(nodePosition);

	nodePosition = _bomb->getPosition();
	nodePosition.Y -= 15.0f;
	_flameList[4]->getNode()->setPosition(nodePosition);
}

void	Bomb::removeFire()
{
	irr::core::vector3df nodePosition = _bomb->getPosition();
	for (Flame *flame: _flameList)
		flame->getNode()->setPosition(nodePosition);
}

void	Bomb::checkPlayerCollision(std::vector<Player *> &collisionPlayerList, std::vector<Player *> &playerList)
{
	for (Player *player: playerList) {
		if (!player->isPlayerAlive()) {
			continue;
		}
		for (Flame *flame: _flameList) {
			if (flame->getNode()->getTransformedBoundingBox().intersectsWithBox(player->getNode()->getTransformedBoundingBox())) {
				if (!isPlayerInList(player, collisionPlayerList))
					collisionPlayerList.push_back(player);
			}
		}
	}
}

bool	Bomb::isPlayerInList(Player *player, std::vector<Player *> &playerList) const
{
	for (Player *playerInList: playerList) {
		if (playerInList == player) {
			return true;
		}
	}
	return false;
}

void	Bomb::checkWoodCollision(std::vector<irr::scene::IMeshSceneNode *> &collisionWoodList, std::vector<irr::scene::IMeshSceneNode *> &woodList)
{
	for (irr::scene::IMeshSceneNode *cube: woodList) {
		for (Flame *flame: _flameList) {
			if (flame->getNode()->getTransformedBoundingBox().intersectsWithBox(cube->getTransformedBoundingBox())) {
				if (!isCubeInList(cube, collisionWoodList))
					collisionWoodList.push_back(cube);
			}
		}
	}
}

bool	Bomb::isCubeInList(irr::scene::IMeshSceneNode *cube, std::vector<irr::scene::IMeshSceneNode *> &woodList) const
{
	for (irr::scene::IMeshSceneNode *cubeInList: woodList) {
		if (cubeInList->getID() == cube->getID()) {
			return true;
		}
	}
	return false;
}

void Bomb::clear(void)
{
	_bomb->setPosition(POS_BOMB_STORAGE);
	removeFire();
}
