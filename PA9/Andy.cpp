

/*
	Name: Waddhanabot Yi, Brandon Truong, Aayush Shrestha, Micah Moody *
	ID:       011718404      011676262       011756637		11706069   *
	CPTS 122														   *
	Programming Assignment: PA9                                        *
																	   *
	File: Andy.cpp                                                     *
*/

#include "Andy.h"


/*
 Function	:    Andy::Andy(sf::Vector2u size)                 
 Description:	 Constructor for Andy Class. Loads in Andy's image as a Sprite                
 Returns	:	 Initializes Sprite Andy                                                   

*/
Andy::Andy(sf::Vector2u size)
{
	if (!texture.loadFromFile("assets/andy.png"))
	{
		cout << "Cannot Load Andy Image" << endl;
	}
	image.setTexture(texture);
	andy.scale(sf::Vector2f(80, 80));
	sf::Vector2f playerPos(400, 850);
	image.setPosition(playerPos);
	
}


Andy::~Andy()
{
}


/*
 Function	:    Andy::Move(sf::Event event)                 
 Description:	 Moves Andy depending on which key is pressed                
 Returns	:	                                                    

*/
void Andy::Move(sf::Event event)
{
	if (sf::Keyboard::Key::Left == event.key.code)
	{
		image.move(-80, 0);
	}
	else if (sf::Keyboard::Key::Right == event.key.code)
	{
		image.move(80, 0);
	}
	else if (sf::Keyboard::Key::Up == event.key.code)
	{
		image.move(0, -80);
	}
	else if (sf::Keyboard::Key::Down == event.key.code)
	{
		image.move(0, 80);
	}
}


