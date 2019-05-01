#include "TimeHandler.h"



TimeHandler::TimeHandler()
{
}


TimeHandler::~TimeHandler()
{
}

void TimeHandler::Update()
{
	sf::Time elapsedTime = clock.getElapsedTime();

	deltaTime = elapsedTime.asSeconds();

	clock.restart();
}
