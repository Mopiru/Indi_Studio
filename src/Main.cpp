/*
** EPITECH PROJECT, 2019
** IndieStudio
** File description:
** src/Main.cpp
*/

#include "Bomberman.hpp"
#include "Logger.hpp"
#include "Utils.hpp"

int main(UNUSED int ac, UNUSED char *av[], UNUSED char *env[])
{
	Bomberman game;

	try {
		game.start();
	} catch (const std::exception &e) {
		LOGG_FATAL("Bomberman", e.what());
		return (84);
	}
	return (0);
}
