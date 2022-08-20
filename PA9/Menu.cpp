

/*
	Name: Waddhanabot Yi, Brandon Truong, Aayush Shrestha, Micah Moody *
	ID:      011718404      011676262       011756637		11706069   *
	CPTS 122														   *
	Programming Assignment: PA9                                        *
																	   *
	File: Menu.cpp                                                     *
*/


#include "Menu.h"

/*
 Function	:    Menu::Menu(float width, float height)              
 Description:	 Prints the Menu. the [] is used in main.cpp (line 61) in a switch case to verify which option was clicked               
 Returns	:	                                                    

*/
Menu::Menu(float width, float height)
{
	if (!font.loadFromFile("assets/arial.ttf"))
	{
		cout << "cannot load font" << '\n';
	}

	menu[0].setFont(font);
	menu[0].setString("Play");
	menu[0].setFillColor(sf::Color::Green);
	menu[0].setPosition(sf::Vector2f(width / 2, height / (MAX_NUMBER_OF_ITEMS + 1) * 1));

	menu[1].setFont(font);
	menu[1].setString("Game Info");
	menu[1].setFillColor(sf::Color::White);
	menu[1].setPosition(sf::Vector2f(width / 2, height / (MAX_NUMBER_OF_ITEMS + 1) * 2));

	menu[2].setFont(font);
	menu[2].setString("Exit");
	menu[2].setFillColor(sf::Color::White);
	menu[2].setPosition(sf::Vector2f(width / 2, height / (MAX_NUMBER_OF_ITEMS + 1) * 3));

	selectedItemIndex = 0;
}


Menu::~Menu()
{
}

void Menu::draw(sf::RenderWindow& window)
{
	for (int i = 0; i < MAX_NUMBER_OF_ITEMS; i++)
	{
		window.draw(menu[i]);
	}
}

void Menu::MoveUp()
{
	if (selectedItemIndex - 1 >= 0)
	{
		menu[selectedItemIndex].setFillColor(sf::Color::White);
		selectedItemIndex--;
		menu[selectedItemIndex].setFillColor(sf::Color::Green);
	}
}

void Menu::MoveDown()
{
	if (selectedItemIndex + 1 < MAX_NUMBER_OF_ITEMS)
	{
		menu[selectedItemIndex].setFillColor(sf::Color::White);
		selectedItemIndex++;
		menu[selectedItemIndex].setFillColor(sf::Color::Green);
	}
}

