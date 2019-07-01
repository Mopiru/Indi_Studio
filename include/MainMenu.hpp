/*
** EPITECH PROJECT, 2019
** IndieStudio
** File description:
** include/MainMenu.hpp
*/

#ifndef MAINMENU_HPP
#define MAINMENU_HPP

#include "Alphabet.hpp"
#include "ISGE.hpp"
#include <SFML/Audio.hpp>

enum MainMenuElements
{
	MAINMENU_PLAY_BUTTON = 1000,
	MAINMENU_OPTS_BUTTON = 1001,
	MAINMENU_QUIT_BUTTON = 1002,
};

class MainMenu : public isge::Scene
{
public:
	MainMenu(irr::IrrlichtDevice *device);

	void load(void) override;
	bool update(float fElapsedTime) override;
	bool render(void) override;
	void onEvent(const irr::SEvent &event) override;

private:
	irr::video::ITexture *_background = 0;
	LetterP _playP;
	LetterL _playL;
	LetterA _playA;
	LetterY _playY;
	LetterO _optsO;
	LetterP _optsP;
	LetterT _optsT;
	LetterS _optsS;
	LetterQ _quitQ;
	LetterU _quitU;
	LetterI _quitI;
	LetterT _quitT;
	int _selection;
	int _increment;
	sf::Music _musicMenu;
};

#endif /* MAINMENU_HPP */
