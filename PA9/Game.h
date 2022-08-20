
/*
	Name: Waddhanabot Yi, Brandon Truong, Aayush Shrestha, Micah Moody *
	ID:      011718404      011676262       011756637		11706069   *
	CPTS 122														   *
	Programming Assignment: PA9                                        *
																	   *
	File: Game.h                                                       *
*/

#pragma once

#include <SFML/Graphics.hpp>
#include "Andy.h"
#include "Truck.h"
#include <iostream>

class Game
{
public:
	Game();
	~Game();

	void Loop();
	void renderBackground();
	void initBackground();

private:
	sf::RenderWindow* window;
	Andy* andy;
	Truck* truck;
	sf::Sprite background;
	sf::Texture backgroundTex;
};
