#pragma once

#include <SFML/Graphics.hpp>
#include <vector>
#include "Window.h"

#define MAX_KEYS 1024
#define MAX_BUTTONS 16

class InputManagement
{
public:
	InputManagement();
	~InputManagement();

	bool keys[MAX_KEYS];
	bool mouseButons[MAX_BUTTONS];
	float mouseX, mouseY;

	void Listen();
	std::vector<sf::Event> events;

	bool getButton(sf::Keyboard::Key key);
	bool getButton(sf::Mouse::Button button);

	bool getButtonDown(sf::Keyboard::Key key);
	bool getButtonDown(sf::Mouse::Button button);

	bool getButtonUp(sf::Keyboard::Key key);
	bool getButtonUp(sf::Mouse::Button button);

};

