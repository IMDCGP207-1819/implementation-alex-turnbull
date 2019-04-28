#include "Window.h"

Window::Window()
{
}


Window::~Window()
{
}

void Window::CreateWindow(int width, int height)
{
	GameWindow = new sf::RenderWindow(sf::VideoMode(width, height),"Game Window");
	GameWindow->setPosition(sf::Vector2i((1920 / 2) - (width / 2), (1080 / 2) - (height / 2)));
}

void Window::CreateWindow(int width, int height, int frameRateLimit)
{
	GameWindow = new sf::RenderWindow(sf::VideoMode(width, height), "Game Window");
	GameWindow->setPosition(sf::Vector2i((1920 / 2) - (width / 2), (1080 / 2) - (height / 2)));
	GameWindow->setFramerateLimit(frameRateLimit);
}
