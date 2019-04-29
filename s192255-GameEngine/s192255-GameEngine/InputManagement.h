#pragma once

#include <SFML/Graphics.hpp>
#include <vector>
#include "Window.h"

class Window;
class InputManagement
{
public:
	InputManagement();
	~InputManagement();		

	void Listen();
	std::vector<sf::Event> events;

	bool getButton(sf::Keyboard::Key key);
	bool getButton(sf::Mouse::Button button);

	bool getButtonDown(sf::Keyboard::Key key);
	bool getButtonDown(sf::Mouse::Button button);

	bool getButtonUp(sf::Keyboard::Key key);
	bool getButtonUp(sf::Mouse::Button button);

};

