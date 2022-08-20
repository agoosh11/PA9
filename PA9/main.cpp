
/*
	Name: Waddhanabot Yi, Brandon Truong, Aayush Shrestha, Micah Moody *
	ID:      011718404      011676262       011756637		11706069   *
	CPTS 122														   *
	Programming Assignment: PA9                                        *
																	   *
	File: main.cpp                                                     *
*/

#include "Game.h"
#include <iostream>
#include <time.h>
#include "Menu.h"
#include "howToPlay.h"



/*
 Function	:    int main()                 
 Description:	 Runs everything 
 Returns	:	 0

 IDE Text Editor Used: Visual Studio 2022 Current

 Flow Order:       

					* Opens a window
					* While window is open checks where the user wants to navigate to
					* If the user makes a selection, Checks which option user selected. ( line 18, Menu.cpp )
					
						* If case 0: Runs the game
						* If case 1: Prints the Game info
						* If case 2: Closes the Window
					
					* Returns 0 if eveything compiled correctly

*/


using std::cout;
int main()
{
	sf::RenderWindow window(sf::VideoMode(840, 680), "Crossy O'Fallon");
	
	Menu menu(window.getSize().x, window.getSize().y);

	while (window.isOpen())
	{
		sf::Event event;

		while (window.pollEvent(event))
		{
			
			switch (event.type)
			{
			case sf::Event::KeyReleased:

				switch (event.key.code)
				{

				case sf::Keyboard::Up:
					menu.MoveUp();
					break;

				case sf::Keyboard::Down:
					menu.MoveDown();
					break;

				case sf::Keyboard::Return:
					Game game;
					
					switch (menu.GetPressedItem())
					{
					case 0:
						window.close();
						game.Loop();
						break;

					case 1:		

						cout << "********** How to Play Crossy O'Fallon **********" << endl << endl;;
						cout << "Press the UP Arrow to move Andy UP by 80 pixels" << endl;
						cout << "Press the DOWN Arrow to move Andy DOWN by 80 pixels " << endl;
						cout << "Press the Left Arrow to move Andy LEFT by 80 pixels " << endl;
						cout << "Press the RIGHT Arrow to move Andy RIGHT by 80 pixels " << endl << endl;
						cout << "Cars Spawn randomly from the left moving to the right"<<endl;
						cout << "The Game ends if Andy gets hit by a car and Andy does not like getting hit by cars" << endl;

						//sf::RenderWindow window(sf::VideoMode(840, 680), "Menu");



						break;
					case 2:
						window.close();
						
						break;
					}

					break;
				}

				break;
			case sf::Event::Closed:
				window.close();

				break;

			}
		}


		menu.draw(window);
		window.display();
	}
    return 0;
}


