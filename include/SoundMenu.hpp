/*
** EPITECH PROJECT, 2019
** IndieStudio
** File description:
** include/SoundMenu.hpp
*/

#ifndef SOUNDMENU_HPP
#define SOUNDMENU_HPP

#include "Alphabet.hpp"
#include "ISGE.hpp"

enum SoundMenuElements
{
	SOUNDMENU_YES_BUTTON = 1000,
	SOUNDMENU_NO_BUTTON = 1001,
};

class SoundMenu : public isge::Scene
{
public:
	SoundMenu(irr::IrrlichtDevice *device);

	void load(void) override;
	bool update(float fElapsedTime) override;
	bool render(void) override;
	void onEvent(const irr::SEvent &event) override;

	static bool isSoundEnabled(void);

private:
	irr::video::ITexture *_background = 0;
	LetterS _soundS;
	LetterO _soundO;
	LetterU _soundU;
	LetterN _soundN;
	LetterD _soundD;
	LetterY _yesY;
	LetterE _yesE;
	LetterS _yesS;
	LetterN _noN;
	LetterO _noO;
	int _selection;
	int _increment;

	static bool _soundEnabled;
};

#endif /* SOUNDMENU_HPP */
