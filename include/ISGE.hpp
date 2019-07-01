/*
** EPITECH PROJECT, 2019
** IndieStudio
** File description:
** include/ISGE.hpp
*/

#ifndef ISGE_HPP
#define ISGE_HPP

#include <atomic>
#include <exception>
#include <string>
#include <thread>
#include <vector>

#include <irrlicht.h>

namespace isge
{
	template<class T>
	struct Vector2d
	{
		T x = 0;
		T y = 0;

		Vector2d(void) : x(0), y(0) {};
		Vector2d(const T &_x, const T &_y) : x(_x), y(_y) {};
		Vector2d(const Vector2d &v) : x(v.x), y(v.y) {};

		inline Vector2d operator+(const Vector2d &v) const {return Vector2d(x + v.x, y + v.y);};
		inline Vector2d operator-(const Vector2d &v) const {return (Vector2d(x - v.x, y - v.y));};
		inline Vector2d operator*(const Vector2d &v) const {return (Vector2d(x * v.x, y * v.y));};
		inline Vector2d operator/(const Vector2d &v) const {return (Vector2d(x / v.x, y / v.y));};
		inline Vector2d operator+(const T &t) const {return (Vector2d(x + t, y + t));};
		inline Vector2d operator-(const T &t) const {return (Vector2d(x - t, y - t));};
		inline Vector2d operator*(const T &t) const {return (Vector2d(x * t, y * t));};
		inline Vector2d operator/(const T &t) const {return (Vector2d(x / t, y / t));};
		inline Vector2d &operator+=(const Vector2d &v) {this->x += v.x; this->y += v.y; return (*this);};
		inline Vector2d &operator-=(const Vector2d &v) {this->x -= v.x; this->y -= v.y; return (*this);};
		inline Vector2d &operator*=(const Vector2d &v) {this->x *= v.x; this->y *= v.y; return (*this);};
		inline Vector2d &operator/=(const Vector2d &v) {this->x /= v.x; this->y /= v.y; return (*this);};
		inline Vector2d &operator+=(const T &t) {this->x += t; this->y += t; return (*this);};
		inline Vector2d &operator-=(const T &t) {this->x -= t; this->y -= t; return (*this);};
		inline Vector2d &operator*=(const T &t) {this->x *= t; this->y *= t; return (*this);};
		inline Vector2d &operator/=(const T &t) {this->x /= t; this->y /= t; return (*this);};
	};
	typedef Vector2d<int> vec2i;
	typedef Vector2d<float> vec2f;
	typedef Vector2d<double> vec2d;

/* -------------------------------------------------------------------------- */

	class ISGException : public std::exception
	{
	public:
		ISGException(const std::string &message);
		virtual const char* what() const throw();

	private:
		std::string _message;
	};

/* -------------------------------------------------------------------------- */

	class EventListener : public irr::IEventReceiver
	{
	public:
		EventListener(void);

		const bool isKeyPressed(irr::EKEY_CODE keyCode) const;
		const bool isControlPressed(void) const;
		const bool isShiftPressed(void) const;

		const bool leftClick(void) const;
		const bool middleClick(void) const;
		const bool rightClick(void) const;
		const irr::core::position2di getMousePosition(void) const;
		const float scrollWheel(void) const;

		bool OnEvent(const irr::SEvent &event);

	protected:
		bool _keys[irr::KEY_KEY_CODES_COUNT];
		bool _control;
		bool _shift;

		bool _leftClick;
		bool _middleClick;
		bool _rightClick;
		irr::core::position2di _mousePosition;
		float _scrollWheel;
	};

/* -------------------------------------------------------------------------- */

	class Scene
	{
	public:
		Scene(irr::IrrlichtDevice *device = 0);

		bool changeScene(const unsigned int &scene);

		virtual void load(void);
		virtual bool update(float fElapsedTime);
		virtual bool render(void);
		virtual void onEvent(const irr::SEvent &event);

		static unsigned int _sceneIndex;
		static std::vector<Scene*> _scenes;
		static EventListener _eventListener;

	protected:
		irr::IrrlichtDevice *_device;
	};

/* -------------------------------------------------------------------------- */

	class GameEngine
	{
	public:
		GameEngine(const std::string &title = "[ISGE] Game", const isge::Vector2d<int> &size = isge::Vector2d<int>(1280, 720), const bool &debug = false);
		~GameEngine(void);

		void start(void);

		virtual bool onCreate(void);
		virtual bool onUpdate(float fElapsedTime);
		virtual bool onDestroy(void);

		const int getHeight(void) const;
		const isge::Vector2d<int> &getSize(void) const;
		const std::string &getTitle(void) const;
		const int getWidth(void) const;
		void hideCursor(void);
		void hideFPS(void);
		const bool isDebugEnabled(void) const;
		void showCursor(void);
		void showFPS(void);
		void setSize(const isge::Vector2d<int> &size);
		void setSize(const int &width, const int &height);
		void setTitle(const std::string &title);

	protected:
		irr::IrrlichtDevice *_device;

		static std::atomic<bool> _isActive;

	private:
		bool _cursorVisible;
		bool _debug;
		bool _showFPS;
		isge::Vector2d<int> _size;
		std::string _title;

		void engineThread(void);
	};
}

#endif /* ISGE_HPP */
