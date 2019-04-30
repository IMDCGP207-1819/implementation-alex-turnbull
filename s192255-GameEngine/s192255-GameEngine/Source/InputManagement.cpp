#include "InputManagement.h"
#include <vector>



InputManagement::InputManagement()
{
}


InputManagement::~InputManagement()
{
}

void InputManagement::Listen()
{
	sf::Event event;
	while (Window::GameWindow->pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
		{
			Window::GameWindow->close();
		}

		events.push_back(event);
	}	
}

bool InputManagement::getButton(sf::Keyboard::Key key)
{
	if(sf::Keyboard::isKeyPressed(key))
	{
		return true;
	}else
	{
		return false;
	}
}

bool InputManagement::getButton(sf::Mouse::Button button)
{
	if (sf::Mouse::isButtonPressed(button))
	{
		return true;
	}else
	{
		return false;
	}
}

bool InputManagement::getButtonDown(sf::Keyboard::Key key)
{
	return false;
}

bool InputManagement::getButtonDown(sf::Mouse::Button button)
{
	return false;
}

bool InputManagement::getButtonUp(sf::Keyboard::Key key)
{
	return false;
}

bool InputManagement::getButtonUp(sf::Mouse::Button button)
{
	return false;
}
