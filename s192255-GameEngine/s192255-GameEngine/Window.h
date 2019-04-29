#pragma once

#include <SFML/Graphics.hpp>
#include <iostream>

class Window
{
public:
	Window();
	~Window();

	void CreateWindow(int width, int height)
	{
		GameWindow = new sf::RenderWindow(sf::VideoMode(width, height), "Game Window");
		GameWindow->setPosition(sf::Vector2i((1920 / 2) - (width / 2), (1080 / 2) - (height / 2)));
	}

	void CreateWindow(int width, int height, int frameRateLimit)
	{
		GameWindow = new sf::RenderWindow(sf::VideoMode(width, height), "Game Window");
		GameWindow->setPosition(sf::Vector2i((1920 / 2) - (width / 2), (1080 / 2) - (height / 2)));
		GameWindow->setFramerateLimit(frameRateLimit);
	}

	static Window* _instance;

	static sf::Window* GameWindow;

	static Window* instance()
	{
		if (!_instance)
			_instance = new Window;
		return _instance;
	}
};

