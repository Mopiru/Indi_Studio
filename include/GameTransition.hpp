/*
** EPITECH PROJECT, 2019
** IndieStudio
** File description:
** include/GameTransition.hpp
*/

#ifndef GAME_TRANSITION_HPP
#define GAME_TRANSITION_HPP

#include "ISGE.hpp"

class GameTransition : public isge::Scene
{
public:
	GameTransition(irr::IrrlichtDevice *device);

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
	int _increment;
	irr::scene::ISceneNode *_skybox;
};

#endif /* GAME_TRANSITION_HPP */
