
/*
	Name: Waddhanabot Yi, Brandon Truong, Aayush Shrestha, Micah Moody *
	ID:       011718404      011676262       011756637		11706069   *
	CPTS 122														   *
	Programming Assignment: PA9                                        *
																	   *
	File: baseObject.h                                                 *
*/


#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

class BaseObject
{
public:
	BaseObject();
	~BaseObject();

	void Draw(sf::RenderWindow& window);

	sf::Sprite GetSprite();



protected:
	sf::RenderWindow* window;
	sf::Sprite image;
	sf::Texture texture;



};
