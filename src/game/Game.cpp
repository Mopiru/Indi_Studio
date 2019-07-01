/*
** EPITECH PROJECT, 2019
** IndieStudio
** File description:
** src/game/Game.cpp
*/

#include "Bomberman.hpp"
#include "Game.hpp"
#include "SoundMenu.hpp"

Game::Game(irr::IrrlichtDevice *device) :
	Scene(device)
{
	_map = new Map(
		_device->getSceneManager(),
		13,
		50,
		10,
		_device->getVideoDriver()->getTexture("./assets/ground.png"),
		_device->getVideoDriver()->getTexture("./assets/wall.png"),
		_device->getVideoDriver()->getTexture("./assets/wood.png")
	);

	Player *playerOne = new Player(1001, _device->getVideoDriver(), _device->getSceneManager(), POS_START_PLAYER_ONE, "");
	Player *playerTwo = new Player(1002, _device->getVideoDriver(), _device->getSceneManager(), POS_START_PLAYER_FOUR, "red");
	_playerList.push_back(playerOne);
	_playerList.push_back(playerTwo);
	for (Player *player: _playerList) {
		_map->setPlayerCollision(_device->getSceneManager(), player->getNode(), "wall");
		_map->setPlayerCollision(_device->getSceneManager(), player->getNode(), "wood");
	}

	this->_skybox = _device->getSceneManager()->addSkyBoxSceneNode(
		_device->getVideoDriver()->getTexture("./assets/irrlicht2_up.jpg"),
		_device->getVideoDriver()->getTexture("./assets/irrlicht2_dn.jpg"),
		_device->getVideoDriver()->getTexture("./assets/irrlicht2_lf.jpg"),
		_device->getVideoDriver()->getTexture("./assets/irrlicht2_rt.jpg"),
		_device->getVideoDriver()->getTexture("./assets/irrlicht2_ft.jpg"),
		_device->getVideoDriver()->getTexture("./assets/irrlicht2_bk.jpg")
	);
	_skybox->setVisible(false);
	_musicGame.openFromFile("./assets/music/bomberman-theme.ogg");
	_musicGame.setLoop(true);
	_musicDead.openFromFile("./assets/music/dead.ogg");
}

void Game::load(void)
{
	irr::gui::IGUIEnvironment *gui = _device->getGUIEnvironment();
	irr::gui::IGUIButton *button;

	button = gui->addButton(
		irr::core::rect<irr::s32>(
			0,
			0,
			100,
			50
		),
		nullptr,
		GAME_MENU_BUTTON,
		L"MENU",
		0
	);

	this->_pause = gui->addButton(
		irr::core::rect<irr::s32>(
			1280 / 2 - 100,
			720 / 2 - 50,
			1280 / 2 + 100,
			720 / 2 + 50
		),
		nullptr,
		GAME_PAUSE_BUTTON,
		L"PAUSE",
		0
	);
	_pause->setVisible(false);

	_musicGame.stop();
	if (SoundMenu::isSoundEnabled())
		_musicGame.play();

	_skybox->setVisible(true);

	this->_increment = 0;
}

bool Game::update(float fElapsedTime)
{
	if (_eventListener.isKeyPressed(irr::KEY_KEY_P) && _increment > 30) {
		_pause->setVisible(!_pause->isVisible());
		this->_increment = 0;
	}

	this->_increment += 1;

	if (_pause->isVisible())
		return (true);

	const irr::f32 MOVEMENT_SPEED = 200.0f;
	std::vector<Player *> collisionPlayerList;
	std::vector<irr::scene::IMeshSceneNode *> collisionWoodList;
	std::vector<irr::scene::IMeshSceneNode *> cubeList = _map->getCubeVector("wood");

	int playerCounter = 0;
	for (Player *player: _playerList)
		if (player->isPlayerAlive())
			playerCounter += 1;
	if (playerCounter <= 1) {
		_skybox->setVisible(false);
		if (SoundMenu::isSoundEnabled())
			_musicGame.pause();
		changeScene(BombermanScenes::GAMEOVER_TRANSITION_SCENE);
	}

	if (_playerList.at(0)->isPlayerAlive()) {
		irr::core::vector3df nodePosition = _playerList.at(0)->getNode()->getPosition();
		if(_eventListener.isKeyPressed(irr::KEY_KEY_Z)) {
			nodePosition.X += MOVEMENT_SPEED * fElapsedTime;
			_playerList.at(0)->getNode()->setRotation(irr::core::vector3df(0.0f, 270.0f, 0.0f));
			_playerList.at(0)->getNode()->setAnimationSpeed(40.0f);
		}
		if(_eventListener.isKeyPressed(irr::KEY_KEY_S)) {
			nodePosition.X -= MOVEMENT_SPEED * fElapsedTime;
			_playerList.at(0)->getNode()->setRotation(irr::core::vector3df(0.0f, 90.0f, 0.0f));
			_playerList.at(0)->getNode()->setAnimationSpeed(40.0f);
		}
		if(_eventListener.isKeyPressed(irr::KEY_KEY_D)) {
			nodePosition.Z -= MOVEMENT_SPEED * fElapsedTime;
			_playerList.at(0)->getNode()->setRotation(irr::core::vector3df(0.0f, 360.0f, 0.0f));
			_playerList.at(0)->getNode()->setAnimationSpeed(40.0f);
		}
		if(_eventListener.isKeyPressed(irr::KEY_KEY_Q)) {
			nodePosition.Z += MOVEMENT_SPEED * fElapsedTime;
			_playerList.at(0)->getNode()->setRotation(irr::core::vector3df(0.0f, 180.0f, 0.0f));
			_playerList.at(0)->getNode()->setAnimationSpeed(40.0f);
		}
		if (!_eventListener.isKeyPressed(irr::KEY_KEY_Z)
		&& !_eventListener.isKeyPressed(irr::KEY_KEY_S)
		&& !_eventListener.isKeyPressed(irr::KEY_KEY_D)
		&& !_eventListener.isKeyPressed(irr::KEY_KEY_Q))
			_playerList.at(0)->getNode()->setAnimationSpeed(0.0f);
		_playerList.at(0)->getNode()->setPosition(nodePosition);
		if (_eventListener.isKeyPressed(irr::KEY_KEY_E)) {
			_playerList.at(0)->getBomb()->place(_playerList.at(0)->getNode()->getPosition());
		}
	}
	_playerList.at(0)->getBomb()->update(fElapsedTime);
	if (_playerList.at(1)->isPlayerAlive()) {
		irr::core::vector3df nodePosition = _playerList.at(1)->getNode()->getPosition();
		if(_eventListener.isKeyPressed(irr::KEY_UP)) {
			nodePosition.X += MOVEMENT_SPEED * fElapsedTime;
			_playerList.at(1)->getNode()->setRotation(irr::core::vector3df(0.0f, 270.0f, 0.0f));
			_playerList.at(1)->getNode()->setAnimationSpeed(40.0f);
		}
		if(_eventListener.isKeyPressed(irr::KEY_DOWN)) {
			nodePosition.X -= MOVEMENT_SPEED * fElapsedTime;
			_playerList.at(1)->getNode()->setRotation(irr::core::vector3df(0.0f, 90.0f, 0.0f));
			_playerList.at(1)->getNode()->setAnimationSpeed(40.0f);
		}
		if(_eventListener.isKeyPressed(irr::KEY_RIGHT)) {
			nodePosition.Z -= MOVEMENT_SPEED * fElapsedTime;
			_playerList.at(1)->getNode()->setRotation(irr::core::vector3df(0.0f, 360.0f, 0.0f));
			_playerList.at(1)->getNode()->setAnimationSpeed(40.0f);
		}
		if(_eventListener.isKeyPressed(irr::KEY_LEFT)) {
			nodePosition.Z += MOVEMENT_SPEED * fElapsedTime;
			_playerList.at(1)->getNode()->setRotation(irr::core::vector3df(0.0f, 180.0f, 0.0f));
			_playerList.at(1)->getNode()->setAnimationSpeed(40.0f);
		}
		if (!_eventListener.isKeyPressed(irr::KEY_UP)
		&& !_eventListener.isKeyPressed(irr::KEY_DOWN)
		&& !_eventListener.isKeyPressed(irr::KEY_RIGHT)
		&& !_eventListener.isKeyPressed(irr::KEY_LEFT))
			_playerList.at(1)->getNode()->setAnimationSpeed(0.0f);
		_playerList.at(1)->getNode()->setPosition(nodePosition);
		if (_eventListener.isKeyPressed(irr::KEY_RSHIFT)) {
			_playerList.at(1)->getBomb()->place(_playerList.at(1)->getNode()->getPosition());
		}
	}
	_playerList.at(1)->getBomb()->update(fElapsedTime);
	for (Player *player: _playerList) {
		if (player->getBomb()->getState() == 2) {
			player->getBomb()->checkPlayerCollision(collisionPlayerList, _playerList);
			player->getBomb()->checkWoodCollision(collisionWoodList, cubeList);
		}
	}
	for (Player *player: collisionPlayerList) {
		if (SoundMenu::isSoundEnabled())
			_musicDead.play();
		player->setDead();
		player->getNode()->remove();
	}
	for (irr::scene::IMeshSceneNode *cube: collisionWoodList) {
		_device->getSceneManager()->getSceneNodeFromId(cube->getID())->setPosition(CEMETERY);
	}
	return (true);
}

bool Game::render(void)
{
	_device->getSceneManager()->drawAll();
	_device->getGUIEnvironment()->drawAll();
	return (true);
}

void Game::onEvent(const irr::SEvent &event)
{
	if (event.EventType == irr::EET_GUI_EVENT) {
		if (event.GUIEvent.EventType == irr::gui::EGET_BUTTON_CLICKED) {
			switch (event.GUIEvent.Caller->getID()) {
			case GAME_MENU_BUTTON:
				if (SoundMenu::isSoundEnabled())
					_musicGame.pause();
				_skybox->setVisible(false);
				changeScene(BombermanScenes::MAIN_MENU_SCENE);
				break;
			case GAME_PAUSE_BUTTON:
				_pause->setVisible(false);
				break;
			}
		}
	}
}

void Game::reset(void)
{
	_map->clear();
	delete _map;

	_map = new Map(
		_device->getSceneManager(),
		13,
		50,
		10,
		_device->getVideoDriver()->getTexture("./assets/ground.png"),
		_device->getVideoDriver()->getTexture("./assets/wall.png"),
		_device->getVideoDriver()->getTexture("./assets/wood.png")
	);

	for (Player *player: _playerList) {
		player->getBomb()->clear();
		if (player->isPlayerAlive())
			player->getNode()->remove();
	}
	_playerList.clear();

	_playerList.push_back(new Player(1001, _device->getVideoDriver(), _device->getSceneManager(), POS_START_PLAYER_ONE, ""));
	_playerList.push_back(new Player(1002, _device->getVideoDriver(), _device->getSceneManager(), POS_START_PLAYER_FOUR, "red"));
	for (Player *player: _playerList) {
		_map->setPlayerCollision(_device->getSceneManager(), player->getNode(), "wall");
		_map->setPlayerCollision(_device->getSceneManager(), player->getNode(), "wood");
	}
}
