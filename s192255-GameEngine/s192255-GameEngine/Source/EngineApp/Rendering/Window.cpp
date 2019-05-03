#include "Window.h"

Window::Window(std::string name)
{
	m_name = name;
	m_width = sf::VideoMode::getDesktopMode().width;
	m_height = sf::VideoMode::getDesktopMode().height;
	CreateWindow();

	m_instance = this;
}

Window::~Window()
{
}

void Window::CreateWindow()
{
		GameWindow = new sf::RenderWindow(sf::VideoMode(m_width, m_height), m_name);
}
