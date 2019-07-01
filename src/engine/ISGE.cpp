/*
** EPITECH PROJECT, 2019
** IndieStudio
** File description:
** src/engine/ISGE.cpp
*/

#include "ISGE.hpp"

isge::ISGException::ISGException(const std::string &message) :
	_message(message)
{
}

const char *isge::ISGException::what() const throw()
{
	return (_message.data());
}

/* -------------------------------------------------------------------------- */

isge::EventListener::EventListener(void)
{
	for (irr::u32 i = 0; i != irr::KEY_KEY_CODES_COUNT; i += 1)
		_keys[i] = false;
}

const bool isge::EventListener::isKeyPressed(irr::EKEY_CODE keyCode) const
{
	return (_keys[keyCode]);
}

const bool isge::EventListener::isControlPressed(void) const
{
	return (_control);
}

const bool isge::EventListener::isShiftPressed(void) const
{
	return (_shift);
}

const bool isge::EventListener::leftClick(void) const
{
	return (_leftClick);
}

const bool isge::EventListener::middleClick(void) const
{
	return (_middleClick);
}

const bool isge::EventListener::rightClick(void) const
{
	return (_rightClick);
}

const irr::core::position2di isge::EventListener::getMousePosition(void) const
{
	return (_mousePosition);
}

const float isge::EventListener::scrollWheel(void) const
{
	return (_scrollWheel);
}

bool isge::EventListener::OnEvent(const irr::SEvent &event)
{
	if (event.EventType == irr::EET_KEY_INPUT_EVENT) {
		this->_keys[event.KeyInput.Key] = event.KeyInput.PressedDown;
		this->_control = event.KeyInput.Control;
		this->_shift = event.KeyInput.Shift;
	}
	if (event.EventType == irr::EET_MOUSE_INPUT_EVENT) {
		this->_leftClick = event.MouseInput.isLeftPressed();
		this->_middleClick = event.MouseInput.isMiddlePressed();
		this->_rightClick = event.MouseInput.isRightPressed();
		this->_mousePosition.X = event.MouseInput.X;
		this->_mousePosition.Y = event.MouseInput.Y;
		this->_scrollWheel = event.MouseInput.Wheel;
	}
	isge::Scene sceneManager;
	sceneManager._scenes.at(sceneManager._sceneIndex)->onEvent(event);
	return (false);
}

/* -------------------------------------------------------------------------- */

isge::Scene::Scene(irr::IrrlichtDevice *device) :
	_device(device)
{
}

bool isge::Scene::changeScene(const unsigned int &scene)
{
	if (_scenes.size() < scene)
		return (false);
	_device->getGUIEnvironment()->clear();
	this->_sceneIndex = scene;
	_scenes.at(_sceneIndex)->load();
	return (true);
}

void isge::Scene::load(void)
{
}

bool isge::Scene::update(float fElapsedTime)
{
	return (true);
}

bool isge::Scene::render(void)
{
	return (true);
}

void isge::Scene::onEvent(const irr::SEvent &event)
{
}

unsigned int isge::Scene::_sceneIndex;
std::vector<isge::Scene*> isge::Scene::_scenes;
isge::EventListener isge::Scene::_eventListener;

/* -------------------------------------------------------------------------- */

isge::GameEngine::GameEngine(const std::string &title, const isge::Vector2d<int> &size, const bool &debug) :
	_title(title),
	_size(size),
	_debug(debug)
{
	this->_cursorVisible = true;
	this->_showFPS = false;
}

isge::GameEngine::~GameEngine(void)
{
}

void isge::GameEngine::start(void)
{
	if (_debug)
		this->_device = irr::createDevice(
			irr::video::EDT_SOFTWARE,
			irr::core::dimension2d<irr::u32>(_size.x, _size.y),
			16,
			false,
			false,
			false,
			0
		);
	else
		this->_device = irr::createDevice(
			irr::video::EDT_OPENGL,
			irr::core::dimension2d<irr::u32>(_size.x, _size.y),
			16,
			false,
			true,
			true,
			0
		);

	if (!_device)
		throw (isge::ISGException("ISGE device couldn't be created."));

	std::wstring wstr = std::wstring(_title.begin(), _title.end());
	_device->setWindowCaption(wstr.c_str());

	this->_isActive = true;
	if (_debug) {
		std::thread t = std::thread(&isge::GameEngine::engineThread, this);
		t.join();
	} else
		engineThread();
}

const int isge::GameEngine::getHeight(void) const
{
	return (_size.y);
}

const isge::vec2i &isge::GameEngine::getSize(void) const
{
	return (_size);
}

const std::string &isge::GameEngine::getTitle(void) const
{
	return (_title);
}
const int isge::GameEngine::getWidth(void) const
{
	return (_size.x);
}

void isge::GameEngine::hideCursor(void)
{
	this->_cursorVisible = false;
}
void isge::GameEngine::hideFPS(void)
{
	this->_showFPS = false;
}

const bool isge::GameEngine::isDebugEnabled(void) const
{
	return (_debug);
}

void isge::GameEngine::showCursor(void)
{
	this->_cursorVisible = true;
}

void isge::GameEngine::showFPS(void)
{
	this->_showFPS = true;
}

void isge::GameEngine::setSize(const isge::Vector2d<int> &size)
{
	this->_size = size;
}

void isge::GameEngine::setSize(const int &width, const int &height)
{
	this->_size = isge::Vector2d<int>(width, height);
}

void isge::GameEngine::setTitle(const std::string &title)
{
	this->_title = title;
}

bool isge::GameEngine::onCreate()
{
	return (false);
}

bool isge::GameEngine::onUpdate(float fElapsedTime)
{
	return (false);
}

bool isge::GameEngine::onDestroy()
{
	return (true);
}

#include <iostream>

void isge::GameEngine::engineThread(void)
{
	_device->getSceneManager()->addCameraSceneNode(
		0,
		irr::core::vector3df(0, 0, 0),
		irr::core::vector3df(0, 0, 0),
		0,
		true
	);

	if (!onCreate())
		this->_isActive = false;

	isge::Scene sceneManager;

	irr::video::IVideoDriver *driver = _device->getVideoDriver();

	irr::u32 fps = driver->getFPS();
	bool FPSSwitcher = false;

	auto elapsedTimestamp1 = std::chrono::system_clock::now();
	auto elapsedTimestamp2 = std::chrono::system_clock::now();
	float fElapsedTime = 0;

	do {
		elapsedTimestamp2 = std::chrono::system_clock::now();
		std::chrono::duration<float> elapsedTime = elapsedTimestamp2 - elapsedTimestamp1;
		elapsedTimestamp1 = elapsedTimestamp2;
		fElapsedTime = elapsedTime.count();

		sceneManager._scenes.at(sceneManager._sceneIndex)->update(fElapsedTime);

		if (!onUpdate(fElapsedTime))
			this->_isActive = false;

		driver->beginScene(true, true, irr::video::SColor(0xFF4a4a4a));
		sceneManager._scenes.at(sceneManager._sceneIndex)->render();
		driver->endScene();

		if (_showFPS && fps != driver->getFPS()) {
			std::string str = _title;
			str += " [";
			str += std::to_string(driver->getFPS());
			str += " fps]";
			std::wstring wstr = std::wstring(str.begin(), str.end());
			_device->setWindowCaption(wstr.c_str());
			FPSSwitcher = true;
		} else if (FPSSwitcher) {
			std::wstring wstr = std::wstring(_title.begin(), _title.end());
			_device->setWindowCaption(wstr.c_str());
			FPSSwitcher = false;
		}
	} while (_device->run() && _isActive);

	if (onDestroy()) {
		this->_isActive = false;
		_device->drop();
	}
}

std::atomic<bool> isge::GameEngine::_isActive{false};
