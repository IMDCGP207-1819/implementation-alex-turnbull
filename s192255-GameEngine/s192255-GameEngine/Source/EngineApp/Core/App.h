#pragma once
#include "TimeHandler.h"
#include "../Rendering/Window.h"
#include "../Input/EventManager.h"
#include "../../Game/Game.h"

///App Class is an overarching class to hold different parts of the Engine and Game in tandem
class App
{
public:
	App(std::string winName);
	~App();

	void Update(); //!< Update function for the App that will call the respective Update functions for each component

	Window* getWindow() { return m_windowPtr; } //!< Return a pointer to the SFML Window
	Game* getGame() { return m_gamePtr; } //!< Return a pointer running Game
	EventManager* getEventManager() { return m_eventMangerPtr; } //!< Return a pointer to Event Manager for polling
	float getDeltaTime() { return m_timeHandlerPtr->deltaTime; } //!< Return Delta Time as calculated in the Time Handler

private:

	Window* m_windowPtr;
	std::string m_windowName;

	EventManager* m_eventMangerPtr;

	TimeHandler* m_timeHandlerPtr;

	Game* m_gamePtr;
};

