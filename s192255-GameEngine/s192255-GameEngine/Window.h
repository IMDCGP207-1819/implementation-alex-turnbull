#pragma once

#include <SFML/Graphics.hpp>
#include <iostream>

class Window
{
public:
	Window(int width, int height, std::string name);
	~Window();

	void CreateWindow();

	sf::RenderWindow* GameWindow;

private:
	int _width;
	int _height;
	std::string _name;
};

