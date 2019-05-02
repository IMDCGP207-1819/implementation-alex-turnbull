#pragma once

#include <SFML/Graphics.hpp>
#include "Window.h"
#include "EventManager.h"

class EventManager;
class InputManagement
{
public:
	InputManagement();
	~InputManagement();

	void Listen();

	EventManager* eventHandler;
	sf::Event currentEvent;

	enum playerActions
	{
		moveRight,
		moveLeft,
		jump,
		stop,
		no
	};

	playerActions currentAction = no;
};

