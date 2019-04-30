#include "Window.h"

Window::Window(int width, int height, std::string name)
{
	_name = name;
	_width = width;
	_height = height;
	CreateWindow();
}

Window::~Window()
{
}

void Window::CreateWindow()
{
		GameWindow = new sf::RenderWindow(sf::VideoMode(_width, _height), _name);
		GameWindow->setPosition(sf::Vector2i((1920 / 2) - (_width / 2), (1080 / 2) - (_height / 2)));
}
