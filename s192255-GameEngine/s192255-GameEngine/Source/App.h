#pragma once
#include "Window.h"
#include "EventManager.h"
#include "TimeHandler.h"
#include "Game.h"

class App
{
public:
	App(std::string winName);
	~App();

	void Update();

	Window* getWindow() { return m_windowPtr; }
	float getDeltaTime() { return m_timeHandlerPtr->deltaTime; }

private:

	Window* m_windowPtr;
	std::string m_windowName;

	EventManager* m_eventMangerPtr;

	TimeHandler* m_timeHandlerPtr;

	Game* m_gamePtr;
};

