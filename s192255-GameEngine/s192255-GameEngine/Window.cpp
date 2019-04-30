#include "Window.h"

Window::Window(std::string name)
{
	_name = name;
	_width = sf::VideoMode::getDesktopMode().width;
	_height = sf::VideoMode::getDesktopMode().height;
	CreateWindow();

	_instance = this;
}

Window::~Window()
{
}

void Window::CreateWindow()
{
		GameWindow = new sf::RenderWindow(sf::VideoMode(_width, _height), _name);
		GameWindow->setPosition(sf::Vector2i((1920 / 2) - (_width / 2), (1080 / 2) - (_height / 2)));
}
