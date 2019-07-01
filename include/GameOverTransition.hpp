/*
** EPITECH PROJECT, 2019
** IndieStudio
** File description:
** include/GameOverTransition.hpp
*/

#ifndef GAMEOVER_TRANSITION_HPP
#define GAMEOVER_TRANSITION_HPP

#include "Alphabet.hpp"
#include "ISGE.hpp"

class GameOverTransition : public isge::Scene
{
public:
	GameOverTransition(irr::IrrlichtDevice *device);

	void load(void) override;
	bool update(float fElapsedTime) override;
	bool render(void) override;
	void onEvent(const irr::SEvent &event) override;

	int move_smooth(irr::core::vector3df dest_pos, float speed);
	int move_target(irr::core::vector3df dest_pos, float speed);

private:
	bool _move_smooth_check;
	bool _move_target_check;
	bool _animation;
	irr::scene::ISceneNode *_cube;
	irr::scene::ISceneNode *_skybox;
	LetterG _gameG;
	LetterA _gameA;
	LetterM _gameM;
	LetterE _gameE;
	LetterO _overO;
	LetterV _overV;
	LetterE _overE;
	LetterR _overR;
};

#endif /* GAMEOVER_TRANSITION_HPP */
