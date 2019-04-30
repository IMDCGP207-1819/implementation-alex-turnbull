#include <SFML/Graphics.hpp>
#include <iostream>

#include <Box2D/Box2D.h>

#include "Window.h"
#include "InputManagement.h"
#include "TimeHandler.h"
#include "GameObject.h"
#include "Game.h"
#include "SceneManager.h"


int width = 800;
int height= 800;
std::string name = "window";

int main()
{
	Window window(width, height, name);

	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Red);
	shape.setPosition(sf::Vector2f(width/2, height/2));
	shape.setOrigin(shape.getGlobalBounds().width/2, shape.getGlobalBounds().height/2);

	while (window.GameWindow->isOpen())
	{
		sf::Event event;
		while (window.GameWindow->pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.GameWindow->close();
		}

		window.GameWindow->clear(sf::Color(123,132,123,255));
		window.GameWindow->draw(shape);
		window.GameWindow->display();
	}

	return 0;
}