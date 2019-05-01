#include "App.h"

App::App(std::string winName)
{
	m_windowName = winName;
	m_windowPtr = new Window(m_windowName);

	m_eventMangerPtr = new EventManager();
	m_eventMangerPtr->setWindowPtr(m_windowPtr);

	m_timeHandlerPtr = new TimeHandler();

	m_gamePtr = new Game(m_windowPtr->GameWindow);
}


App::~App()
{
	delete m_windowPtr;
	delete m_eventMangerPtr;
	delete m_timeHandlerPtr;
	delete m_gamePtr;
}

void App::Update()
{
	m_timeHandlerPtr->Update();
	m_eventMangerPtr->pollEvents();
	m_gamePtr->update();
}
