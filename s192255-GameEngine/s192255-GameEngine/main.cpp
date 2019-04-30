#include <SFML/Graphics.hpp>
#include <iostream>

#include <Box2D/Box2D.h>

#include "Window.h"
#include "InputManagement.h"
#include "TimeHandler.h"
#include "GameObject.h"
#include "Game.h"
#include "SceneManager.h"

std::string name = "window";

int main()
{	
	Window window(name);

	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Red);
	shape.setPosition(sf::Vector2f(window.getWidth()/ 2, window.getHeight()/2));
	shape.setOrigin(shape.getGlobalBounds().width/2, shape.getGlobalBounds().height/2);
	while (window.instance()->GameWindow->isOpen())
	{
		sf::Event event;
		while (window.instance()->GameWindow->pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.instance()->GameWindow->close();
		}

		window.instance()->GameWindow->clear(sf::Color(123,132,123,255));
		window.instance()->GameWindow->draw(shape);
		window.instance()->GameWindow->display();
	}

	return 0;
}