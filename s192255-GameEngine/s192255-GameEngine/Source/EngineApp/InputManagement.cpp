#include "InputManagement.h"
#include <vector>



InputManagement::InputManagement()
{
	//eventHandler = new EventManager
}

InputManagement::~InputManagement()
{
}

void InputManagement::Listen()
{
	if(eventHandler->events.size() > 0)
	{
		currentEvent = eventHandler->events.front();
		eventHandler->events.erase(eventHandler->events.begin());

		if (&currentEvent != NULL)
		{
			if (currentEvent.type == sf::Event::KeyPressed && currentEvent.key.code == sf::Keyboard::D)
			{
				currentAction = moveRight;
			}
			if (currentEvent.type == sf::Event::KeyPressed && currentEvent.key.code == sf::Keyboard::A)
			{
				currentAction = moveLeft;
			}
			if (currentEvent.type == sf::Event::KeyPressed && currentEvent.key.code == sf::Keyboard::Space)
			{
				currentAction = jump;
			}
			if (currentEvent.type == sf::Event::KeyReleased)
			{
				currentAction = stop;
			}
		}
		else
		{
			currentAction = no;
		}
	}	
}