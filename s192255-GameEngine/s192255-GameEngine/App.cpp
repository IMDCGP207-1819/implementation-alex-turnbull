#include "App.h"

App::App()
{
	m_windowPtr = new Window(m_windowName);
	m_eventMangerPtr = new EventManager();
	m_eventMangerPtr->setWindowPtr(m_windowPtr);

	//timer
	//game
}


App::~App()
{
	delete m_windowPtr;
}
