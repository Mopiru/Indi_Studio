/*
** EPITECH PROJECT, 2019
** IndieStudio
** File description:
** src/game/MainMenu.cpp
*/

#include "Bomberman.hpp"
#include "MainMenu.hpp"
#include "SoundMenu.hpp"

MainMenu::MainMenu(irr::IrrlichtDevice *device) :
	Scene(device),
	_playP(irr::core::vector3df(5000, 85, 150), device->getSceneManager(), 0, 10, device->getVideoDriver()->getTexture("./assets/stone.jpg")),
	_playL(irr::core::vector3df(5000, 85, 50), device->getSceneManager(), 0, 10, device->getVideoDriver()->getTexture("./assets/stone.jpg")),
	_playA(irr::core::vector3df(5000, 85, -50), device->getSceneManager(), 0, 10, device->getVideoDriver()->getTexture("./assets/stone.jpg")),
	_playY(irr::core::vector3df(5000, 85, -150), device->getSceneManager(), 0, 10, device->getVideoDriver()->getTexture("./assets/stone.jpg")),
	_optsO(irr::core::vector3df(5000, -30, 150), device->getSceneManager(), 0, 10, device->getVideoDriver()->getTexture("./assets/stone.jpg")),
	_optsP(irr::core::vector3df(5000, -30, 50), device->getSceneManager(), 0, 10, device->getVideoDriver()->getTexture("./assets/stone.jpg")),
	_optsT(irr::core::vector3df(5000, -30, -50), device->getSceneManager(), 0, 10, device->getVideoDriver()->getTexture("./assets/stone.jpg")),
	_optsS(irr::core::vector3df(5000, -30, -150), device->getSceneManager(), 0, 10, device->getVideoDriver()->getTexture("./assets/stone.jpg")),
	_quitQ(irr::core::vector3df(5000, -140, 150), device->getSceneManager(), 0, 10, device->getVideoDriver()->getTexture("./assets/stone.jpg")),
	_quitU(irr::core::vector3df(5000, -140, 50), device->getSceneManager(), 0, 10, device->getVideoDriver()->getTexture("./assets/stone.jpg")),
	_quitI(irr::core::vector3df(5000, -140, -50), device->getSceneManager(), 0, 10, device->getVideoDriver()->getTexture("./assets/stone.jpg")),
	_quitT(irr::core::vector3df(5000, -140, -150), device->getSceneManager(), 0, 10, device->getVideoDriver()->getTexture("./assets/stone.jpg"))
{
	irr::video::IImage *image = device->getVideoDriver()->createImageFromFile("./assets/menu_background.png");
	irr::u16 membuf[1000 * 1000 * 4];
	irr::video::IImage *imageS = device->getVideoDriver()->createImageFromData(irr::video::ECF_A8R8G8B8, device->getVideoDriver()->getScreenSize(), membuf);
	image->copyToScaling(imageS);
	this->_background = device->getVideoDriver()->addTexture("background", imageS);
	_musicMenu.openFromFile("assets/music/pedobear_song.ogg");
	_musicMenu.setLoop(true);
}

void MainMenu::load(void)
{
	_device->getSceneManager()->setAmbientLight(irr::video::SColorf(1.0f, 1.0f, 1.0f, 0.0f));
	_device->getSceneManager()->getActiveCamera()->setPosition(irr::core::vector3df(-100, 5550, 0));
	_device->getSceneManager()->getActiveCamera()->setTarget(irr::core::vector3df(0, 5000, 0));

	_device->getGUIEnvironment()->addButton(irr::core::rect<irr::s32>(450, 250, 830, 325), 0, MAINMENU_PLAY_BUTTON, L"");
	_device->getGUIEnvironment()->addButton(irr::core::rect<irr::s32>(450, 350, 830, 425), 0, MAINMENU_OPTS_BUTTON, L"");
	_device->getGUIEnvironment()->addButton(irr::core::rect<irr::s32>(450, 450, 830, 525), 0, MAINMENU_QUIT_BUTTON, L"");

	this->_increment = 0;

	_musicMenu.stop();
	if (SoundMenu::isSoundEnabled())
		_musicMenu.play();
}

bool MainMenu::update(float fElapsedTime)
{
	if (_eventListener.isKeyPressed(irr::KEY_RETURN) && _increment > 30) {
		switch (_selection) {
		case 0:
			if (SoundMenu::isSoundEnabled())
				_musicMenu.pause();
			changeScene(BombermanScenes::GAME_TRANSITION_SCENE);
			break;
		case 1:
			changeScene(BombermanScenes::SOUND_MENU_SCENE);
			break;
		case 2:
			_device->closeDevice();
			break;
		}
		return (true);
	}

	if (_eventListener.isKeyPressed(irr::KEY_UP) && _increment > 30) {
		this->_selection -= 1;
		this->_increment = 0;
		_playP.setScale(1.0f);
		_playL.setScale(1.0f);
		_playA.setScale(1.0f);
		_playY.setScale(1.0f);
		_optsO.setScale(1.0f);
		_optsP.setScale(1.0f);
		_optsT.setScale(1.0f);
		_optsS.setScale(1.0f);
		_quitQ.setScale(1.0f);
		_quitU.setScale(1.0f);
		_quitI.setScale(1.0f);
		_quitT.setScale(1.0f);
	}
	if (_eventListener.isKeyPressed(irr::KEY_DOWN) && _increment > 30) {
		this->_selection += 1;
		this->_increment = 0;
		_playP.setScale(1.0f);
		_playL.setScale(1.0f);
		_playA.setScale(1.0f);
		_playY.setScale(1.0f);
		_optsO.setScale(1.0f);
		_optsP.setScale(1.0f);
		_optsT.setScale(1.0f);
		_optsS.setScale(1.0f);
		_quitQ.setScale(1.0f);
		_quitU.setScale(1.0f);
		_quitI.setScale(1.0f);
		_quitT.setScale(1.0f);
	}
	if (_selection < 0)
		this->_selection = 2;
	if (_selection > 2)
		this->_selection = 0;

	switch (_selection) {
	case 0:
		_playP.animate(1.5f, 0.5f, 0.05f);
		_playL.animate(1.5f, 0.5f, 0.05f);
		_playA.animate(1.5f, 0.5f, 0.05f);
		_playY.animate(1.5f, 0.5f, 0.05f);
		break;
	case 1:
		_optsO.animate(1.5f, 0.5f, 0.05f);
		_optsP.animate(1.5f, 0.5f, 0.05f);
		_optsT.animate(1.5f, 0.5f, 0.05f);
		_optsS.animate(1.5f, 0.5f, 0.05f);
		break;
	case 2:
		_quitQ.animate(1.5f, 0.5f, 0.05f);
		_quitU.animate(1.5f, 0.5f, 0.05f);
		_quitI.animate(1.5f, 0.5f, 0.05f);
		_quitT.animate(1.5f, 0.5f, 0.05f);
		break;
	}
	this->_increment += 1;
	return (true);
}

bool MainMenu::render(void)
{
	_device->getVideoDriver()->draw2DImage(_background, irr::core::vector2di(0));
	_device->getGUIEnvironment()->drawAll();
	_device->getSceneManager()->drawAll();
	return (true);
}

void MainMenu::onEvent(const irr::SEvent &event)
{
	if (event.EventType == irr::EET_GUI_EVENT) {
		if (event.GUIEvent.EventType == irr::gui::EGET_BUTTON_CLICKED) {
			switch (event.GUIEvent.Caller->getID()) {
			case MAINMENU_PLAY_BUTTON:
				if (SoundMenu::isSoundEnabled())
					_musicMenu.pause();
				changeScene(BombermanScenes::GAME_TRANSITION_SCENE);
				break;
			case MAINMENU_OPTS_BUTTON:
				changeScene(BombermanScenes::SOUND_MENU_SCENE);
				break;
			case MAINMENU_QUIT_BUTTON:
				_device->closeDevice();
				break;
			}
		}
	}
}
