#include "App.h"

App::App()
{
	m_windowPtr = new Window(m_windowName);

	m_eventMangerPtr = new EventManager();
	m_eventMangerPtr->setWindowPtr(m_windowPtr);

	m_timeHandlerPtr = new TimeHandler();

	//game
}


App::~App()
{
	delete m_windowPtr;
	delete m_eventMangerPtr;
	delete m_timeHandlerPtr;
}

void App::Update()
{
	m_timeHandlerPtr->Update();
	m_eventMangerPtr->pollEvents();
}
