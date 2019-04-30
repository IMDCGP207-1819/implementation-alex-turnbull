#pragma once
#include "Window.h"
#include "EventManager.h"

class App
{
public:
	App();
	~App();

	Window* getWindow() { return m_windowPtr; }

private:

	Window* m_windowPtr;
	std::string m_windowName;

	EventManager* m_eventMangerPtr;
};

