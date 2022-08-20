

/*
	Name: Waddhanabot Yi, Brandon Truong, Aayush Shrestha, Micah Moody *
	ID:      011718404      011676262       011756637		11706069   *
	CPTS 122														   *
	Programming Assignment: PA9                                        *
																	   *
	File: Truck.h                                                        *
*/

#pragma once

#include <SFML/Graphics.hpp>
#include "BaseObject.h"
#include <iostream>

using std::cout;
using std::endl;
class Truck : public BaseObject    
{
//  we were originaly going to load a picture of a truck but it didn't work

public:
	
	Truck(sf::Vector2u size, float posX, float posY);
	~Truck();

	void Move(sf::Vector2u size);



private:
	sf::Sprite truck;
	float originalPosX, originalPosY;
	sf::Texture trucktexture;
	sf::Event event;
};
