#pragma once
#include "EventManager.h"
#include "../Rendering/Window.h"

#include <SFML/Graphics.hpp>


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

