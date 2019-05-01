#include "EventManager.h"



EventManager::EventManager()
{
}


EventManager::~EventManager()
{
}

void EventManager::pollEvents()
{
	sf::Event event;
	while (m_windowRef->instance()->GameWindow->pollEvent(event))
	{
		switch(event.type)
		{
			case sf::Event::Closed : std::cout << "\nClosing Program" << std::endl;
				//send event to approprite handler
				break;

			case sf::Event::KeyPressed: std::cout << "\nPressed Key: " << event.key.code << std::endl;
				//send event to input for player
				break;

			case sf::Event::KeyReleased :std::cout << "\nKey Released: " << event.key.code << std::endl;
				//send event to input for player
				break;
		}

		if (event.type == sf::Event::Closed)
			m_windowRef->instance()->GameWindow->close();
	}
}
