#pragma once

#include <SFML/Graphics.hpp>

class InputManagement
{
public:
	InputManagement();
	~InputManagement();

	bool IsSpriteClicked(sf::Sprite object, sf::Mouse::Button button, sf::RenderWindow &window);

	sf::Vector2i GetMousePosition(sf::RenderWindow &window);
};

