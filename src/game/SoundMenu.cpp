/*
** EPITECH PROJECT, 2019
** IndieStudio
** File description:
** src/game/SoundMenu.cpp
*/

#include "Bomberman.hpp"
#include "SoundMenu.hpp"

SoundMenu::SoundMenu(irr::IrrlichtDevice *device) :
	Scene(device),
	_soundS(irr::core::vector3df(10000, 85, 160), device->getSceneManager(), 0, 10, device->getVideoDriver()->getTexture("./assets/stone.jpg")),
	_soundO(irr::core::vector3df(10000, 85, 90), device->getSceneManager(), 0, 10, device->getVideoDriver()->getTexture("./assets/stone.jpg")),
	_soundU(irr::core::vector3df(10000, 85, 10), device->getSceneManager(), 0, 10, device->getVideoDriver()->getTexture("./assets/stone.jpg")),
	_soundN(irr::core::vector3df(10000, 85, -60), device->getSceneManager(), 0, 10, device->getVideoDriver()->getTexture("./assets/stone.jpg")),
	_soundD(irr::core::vector3df(10000, 85, -150), device->getSceneManager(), 0, 10, device->getVideoDriver()->getTexture("./assets/stone.jpg")),
	_yesY(irr::core::vector3df(10000, -30, 100), device->getSceneManager(), 0, 10, device->getVideoDriver()->getTexture("./assets/stone.jpg")),
	_yesE(irr::core::vector3df(10000, -30, 0), device->getSceneManager(), 0, 10, device->getVideoDriver()->getTexture("./assets/stone.jpg")),
	_yesS(irr::core::vector3df(10000, -30, -100), device->getSceneManager(), 0, 10, device->getVideoDriver()->getTexture("./assets/stone.jpg")),
	_noN(irr::core::vector3df(10000, -140, 50), device->getSceneManager(), 0, 10, device->getVideoDriver()->getTexture("./assets/stone.jpg")),
	_noO(irr::core::vector3df(10000, -140, -50), device->getSceneManager(), 0, 10, device->getVideoDriver()->getTexture("./assets/stone.jpg"))
{
	irr::video::IImage *image = device->getVideoDriver()->createImageFromFile("./assets/menu_background.png");
	irr::u16 membuf[1000 * 1000 * 4];
	irr::video::IImage *imageS = device->getVideoDriver()->createImageFromData(irr::video::ECF_A8R8G8B8, device->getVideoDriver()->getScreenSize(), membuf);
	image->copyToScaling(imageS);
	this->_background = device->getVideoDriver()->addTexture("background", imageS);
}

void SoundMenu::load(void)
{
	_device->getSceneManager()->setAmbientLight(irr::video::SColorf(1.0f, 1.0f, 1.0f, 0.0f));
	_device->getSceneManager()->getActiveCamera()->setPosition(irr::core::vector3df(-100, 10550, 0));
	_device->getSceneManager()->getActiveCamera()->setTarget(irr::core::vector3df(0, 10000, 0));

	_device->getGUIEnvironment()->addButton(irr::core::rect<irr::s32>(450, 250, 830, 325), 0, -1, L"");
	_device->getGUIEnvironment()->addButton(irr::core::rect<irr::s32>(450, 350, 830, 425), 0, SOUNDMENU_YES_BUTTON, L"");
	_device->getGUIEnvironment()->addButton(irr::core::rect<irr::s32>(450, 450, 830, 525), 0, SOUNDMENU_NO_BUTTON, L"");

	this->_increment = 0;
}

bool SoundMenu::update(float fElapsedTime)
{
	if (_eventListener.isKeyPressed(irr::KEY_RETURN) && _increment > 30) {
		switch (_selection) {
		case 0:
			_soundEnabled = true;
			changeScene(BombermanScenes::MAIN_MENU_SCENE);
			break;
		case 1:
			_soundEnabled = false;
			changeScene(BombermanScenes::MAIN_MENU_SCENE);
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
		_yesY.setScale(1.0f);
		_yesE.setScale(1.0f);
		_yesS.setScale(1.0f);
		_noN.setScale(1.0f);
		_noO.setScale(1.0f);
	}
	if (_eventListener.isKeyPressed(irr::KEY_DOWN) && _increment > 30) {
		this->_selection += 1;
		this->_increment = 0;
		_yesY.setScale(1.0f);
		_yesE.setScale(1.0f);
		_yesS.setScale(1.0f);
		_noN.setScale(1.0f);
		_noO.setScale(1.0f);
	}
	if (_selection < 0)
		this->_selection = 1;
	if (_selection > 1)
		this->_selection = 0;

	switch (_selection) {
	case 0:
		_yesY.animate(1.5f, 0.5f, 0.05f);
		_yesE.animate(1.5f, 0.5f, 0.05f);
		_yesS.animate(1.5f, 0.5f, 0.05f);
		break;
	case 1:
		_noN.animate(1.5f, 0.5f, 0.05f);
		_noO.animate(1.5f, 0.5f, 0.05f);
		break;
	}
	this->_increment += 1;
	return (true);
}

bool SoundMenu::render(void)
{
	_device->getVideoDriver()->draw2DImage(_background, irr::core::vector2di(0));
	_device->getGUIEnvironment()->drawAll();
	_device->getSceneManager()->drawAll();
	return (true);
}

void SoundMenu::onEvent(const irr::SEvent &event)
{
	if (event.EventType == irr::EET_GUI_EVENT) {
		if (event.GUIEvent.EventType == irr::gui::EGET_BUTTON_CLICKED) {
			switch (event.GUIEvent.Caller->getID()) {
			case SOUNDMENU_YES_BUTTON:
				_soundEnabled = true;
				changeScene(BombermanScenes::MAIN_MENU_SCENE);
				break;
			case SOUNDMENU_NO_BUTTON:
				_soundEnabled = false;
				changeScene(BombermanScenes::MAIN_MENU_SCENE);
				break;
			}
		}
	}
}

bool SoundMenu::isSoundEnabled(void)
{
	return (_soundEnabled);
}

bool SoundMenu::_soundEnabled = true;
