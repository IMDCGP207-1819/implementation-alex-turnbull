#pragma once
#include <SFML/Graphics.hpp>

///The TimeHandler is part of the App and is responsible for maintaining a global clock
class TimeHandler
{
public:
	TimeHandler();
	~TimeHandler();

	float deltaTime; //!< Store the deltatime value between frames

	sf::Clock clock = sf::Clock(); //!< Define the global clock to run

	void Update(); //!< Update and calculate DeltaTime

	

	static TimeHandler* instance() //!< Return the singleton instance of the Global Clock
	{
		if (!_instance)
			_instance = new TimeHandler;
		return _instance;
	}

private:
	static TimeHandler* _instance;
};

