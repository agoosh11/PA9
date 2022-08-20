


/*
	Name: Waddhanabot Yi, Brandon Truong, Aayush Shrestha, Micah Moody *
	ID:        011718404      011676262       011756637		11706069   *
	CPTS 122														   *
	Programming Assignment: PA9                                        *
																	   *
	File: Game.cpp                                                     *
*/


#include "Game.h"
#include "Menu.h"

/*
 Function	:    Game::Game()                 
 Description:	 Constructor for Game Class                
 Returns	:	 A new window                                                   

*/													

using std::cout;
Game::Game()
{
	window = new sf::RenderWindow (sf::VideoMode(1000, 1000), "Crossy O'Fallon ");
	this->initBackground();
	andy = new Andy(window->getSize());
	truck = new Truck(window->getSize(), 0, window->getSize().y / 2);
}

// destructor 
Game::~Game()
{
}

/*
 Function	:    Game::initBackground()                 
 Description:	 Initializes the background by loading in an image of a road               
 Returns	:	 Initialized Background                                                   

*/
void Game::initBackground()
{
	if(!this->backgroundTex.loadFromFile("assets/roadM.jpg"))
	{
		std::cout << "Error loading background." << "\n";
	}
	this->background.setTexture(this->backgroundTex);
}


void Game::renderBackground()
{
	this->window->draw(this->background);
}


/*
 Function	:    Game::Loop()                 
 Description:	 Loops the game until Andy is hit by a car                
 Returns	:	                                                  

*/
void Game::Loop()
{
	while (window->isOpen())
	{
		// handle events
		sf::Event event;

		while (window->pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::KeyReleased:

				andy->Move(event);

				break;

			default:
				break;
			}
		}

		// update
		truck->Move(window->getSize());

		if (!(andy->GetSprite().getGlobalBounds().intersects(truck->GetSprite().getGlobalBounds())))
		{
			// we were going to do a score increment eveytime andy does not get hit by a car

		}
		else if (andy->GetSprite().getGlobalBounds().intersects(truck->GetSprite().getGlobalBounds()))
		{
			window->close();
		}

		window->clear();

		// draw SFML content
		this->renderBackground();
		andy->Draw(*window);
		truck->Draw(*window);

		window->display();
	}
}


