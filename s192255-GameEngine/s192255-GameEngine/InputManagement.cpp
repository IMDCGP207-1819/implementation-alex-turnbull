#include "InputManagement.h"



InputManagement::InputManagement()
{
}


InputManagement::~InputManagement()
{
}

bool InputManagement::IsSpriteClicked(sf::Sprite object, sf::Mouse::Button button, sf::RenderWindow & window)
{
	if(sf::Mouse::isButtonPressed(button))
	{
		
	}
	return false;
}

sf::Vector2i InputManagement::GetMousePosition(sf::RenderWindow & window)
{

	return sf::Vector2i();
}
