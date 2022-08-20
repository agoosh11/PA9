
/*
	Name: Waddhanabot Yi, Brandon Truong, Aayush Shrestha, Micah Moody *
	ID:      011718404      011676262       011756637		11706069   *
	CPTS 122														   *
	Programming Assignment: PA9                                        *
																	   *
	File: baseObject.cpp                                               *
*/

#include "BaseObject.h"

// constructor
BaseObject::BaseObject()
{

}
// deconstructor
BaseObject::~BaseObject()
{
}



void BaseObject::Draw(sf::RenderWindow& window)
{
	window.draw(image);
}


sf::Sprite BaseObject::GetSprite()
{
	return image;
}






