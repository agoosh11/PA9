#include "howToPlay.h"

HowToPlay::HowToPlay()
{
	window = new sf::RenderWindow(sf::VideoMode(1000, 1000), "How to Play");
	this->initBackGround();

}


void HowToPlay::initBackGround()
{
	if (!this->backgroundTex.loadFromFile("assets/roadM.jpg"))
	{
		std::cout << "Error loading background." << "\n";
	}
	this->background.setTexture(this->backgroundTex);
}

void HowToPlay::print(float x, float y)
{
	text.setFont(font);
	text.setString("Play");
	text.setFillColor(sf::Color::Green);
	text.setPosition(sf::Vector2f(x / 2, y / (3 + 1) * 1)); //3 is max num items;
}
