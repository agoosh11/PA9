#pragma once
#pragma once

#include <SFML/Graphics.hpp>
#include "Andy.h"
#include "Truck.h"
#include <iostream>


class HowToPlay
{
public:
	HowToPlay();
	void initBackGround();
	void print(float x, float y);

private:
	sf::RenderWindow* window;
	sf::Sprite background;
	sf::Texture backgroundTex;
	sf::Font font;
	sf::Text text;
	int i;

};