#pragma once

#include <SFML/Graphics.hpp>
#include "Window.h"

class InputManagement
{
public:
	InputManagement();
	~InputManagement();

	void Listen();
	std::vector<sf::Event> events;

};

