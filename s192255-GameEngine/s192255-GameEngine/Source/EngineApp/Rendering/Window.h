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

	int getWidth() { return m_width; }
	int getHeight() { return m_height; }

	Window* instance(){ return m_instance; }

private:
	int m_width;
	int m_height;
	std::string m_name;

	Window* m_instance;
};

