#include <SFML/Graphics.hpp>
#include <iostream>

#include <Box2D/Box2D.h>

#include "Window.h"
#include "InputManagement.h"
#include "TimeHandler.h"
#include "GameObject.h"
#include "Game.h"
#include "SceneManager.h"

#include "App.h"

std::string name = "window";



int main()
{	
	//Window window(name);
	App gameApp = App();

	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Red);
	shape.setPosition(sf::Vector2f(gameApp.getWindow()->getWidth()/ 2, gameApp.getWindow()->getHeight()/2));
	shape.setOrigin(shape.getGlobalBounds().width/2, shape.getGlobalBounds().height/2);

	while (gameApp.getWindow()->instance()->GameWindow->isOpen())
	{
		sf::Event event;
		while (gameApp.getWindow()->instance()->GameWindow->pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				gameApp.getWindow()->instance()->GameWindow->close();
		}

		gameApp.getWindow()->instance()->GameWindow->clear(sf::Color(123,132,123,255));
		gameApp.getWindow()->instance()->GameWindow->draw(shape);
		gameApp.getWindow()->instance()->GameWindow->display();
	}

	return 0;
}