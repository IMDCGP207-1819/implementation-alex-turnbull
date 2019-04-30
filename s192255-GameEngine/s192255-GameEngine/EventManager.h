#pragma once
#include "singleton.h"

class Window;
class EventManager
{
public:
	EventManager();
	~EventManager();

	void setWindowPtr(Window* window) { m_windowRef = window;  }
		
	Window* m_windowRef;

	static EventManager* _instance;

	static EventManager* instance()
	{
		if (!_instance)
			_instance = new EventManager;
		return _instance;
	}
};

