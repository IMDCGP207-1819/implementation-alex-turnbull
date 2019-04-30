#pragma once
#include "Window.h"
#include "EventManager.h"
#include "TimeHandler.h"

class App
{
public:
	App();
	~App();

	void onUpdate();

	Window* getWindow() { return m_windowPtr; }
	float getDeltaTime() { return m_timeHandlerPtr->deltaTime; }

private:

	Window* m_windowPtr;
	std::string m_windowName;

	EventManager* m_eventMangerPtr;

	TimeHandler* m_timeHandlerPtr;
};

