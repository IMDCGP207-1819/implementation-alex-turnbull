#pragma once

#include <SFML/Graphics.hpp>
#include "Window.h"

class Window;
//typedef std::map<sf::Event, std::vector<IEventHandler*>> eventMap;
class EventManager
{
public:
	EventManager();
	~EventManager();

	void pollEvents();
	void storeEvent(sf::Event currentEvent);

	void setWindowPtr(Window* window) { m_windowRef = window;  }
		
	Window* m_windowRef;

	std::vector<sf::Event> events;

	static EventManager* _instance;

	static EventManager* instance()
	{
		if (!_instance)
			_instance = new EventManager;
		return _instance;
	}

	/*bool AddListener(sf::Event type, IEventHandler *listener)
	{
		listeners[type].push_back(listener);
	}

	void FireEvent(sf::Event type, IEvent *event)
	{
		for (IEventHandler *handler : listeners[type])
		{
			handler->OnEvent(event);
		}
	}*/

};

