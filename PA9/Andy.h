
/*
	Name: Waddhanabot Yi, Brandon Truong, Aayush Shrestha, Micah Moody *
	ID:      011718404      011676262       011756637		11706069   *
	CPTS 122														   *
	Programming Assignment: PA9                                        *
																	   *
	File: Andy.h                                                       *
*/

#pragma once

#include <SFML/Graphics.hpp>
#include "BaseObject.h"
#include <iostream>


using std::cout;
using std::endl;
class Andy : public BaseObject
{
public:
	Andy(sf::Vector2u size);
	~Andy();

	void Move(sf::Event event);

	

private:
	sf::Sprite andy;
	sf::Texture texture;

};
