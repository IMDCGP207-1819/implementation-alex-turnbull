#pragma once

#include <SFML/Graphics.hpp>
#include <iostream>

class Window
{
public:
	Window(std::string name);
	~Window();

	void CreateWindow();

	sf::RenderWindow* GameWindow;

	int getWidth() { return _width; }
	int getHeight() { return _height; }

	Window* instance(){ return _instance; }

private:
	int _width;
	int _height;
	std::string _name;

	Window* _instance;
};

