
/*
	Name: Waddhanabot Yi, Brandon Truong, Aayush Shrestha, Micah Moody *
	ID:      011718404      011676262       011756637		11706069   *
	CPTS 122														   *
	Programming Assignment: PA9                                        *
																	   *
	File: Truck.cpp                                                    *
*/


#include "Truck.h"
#include <time.h>


/*
 Function	:    Truck::Truck(sf::Vector2u size, float posX, float posY)                 
 Description:	 Constructor for Truck Class. Loads an image of a car as a sprite                
 Returns	:	                                                    

*/
Truck::Truck(sf::Vector2u size, float posX, float posY)
{

	if(!trucktexture.loadFromFile("assets/cars.png"))
	{
		cout << "Cannot Load Car Image" << endl;
	}
	image.setTexture(trucktexture);
	truck.scale(sf::Vector2f(80, 80));
	image.setPosition(sf::Vector2f(posX, posY));
	originalPosX = posX;
	originalPosY = posY;
}


Truck::~Truck()
{

}



/*
 Function	:    Truck::Move(sf::Vector2u size)            
 Description:	 Randomly generates where a truck would spawn from              
 Returns	:	                                                    

*/
void Truck::Move(sf::Vector2u size)
{
	// srand(time(0));

	image.move(0.25, 0);
	if (image.getPosition().x > size.x)
	{
		int y = 0;
		int run = 1;
		originalPosY = rand() % 1000 + 80; // so that the car does not spawn on the bottom lane where andy spawns
		image.setPosition(sf::Vector2f(0 - originalPosX, originalPosY));
	
	}
}


