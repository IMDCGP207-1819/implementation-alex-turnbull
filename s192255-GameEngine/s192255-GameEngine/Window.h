#pragma once

#include <SFML/Graphics.hpp>
#include <iostream>

class Window
{
public:
	Window();
	~Window();

	void CreateWindow(int width, int height);

	void CreateWindow(int width, int height, int frameRateLimit);

	static Window* _instance;

	static sf::Window* GameWindow;

	static Window* instance()
	{
		if (!_instance)
			_instance = new Window;
		return _instance;
	}
};

