#pragma once
#include <SFML/Graphics.hpp>

class TimeHandler
{
public:
	TimeHandler();
	~TimeHandler();

	float deltaTime;

	sf::Clock clock = sf::Clock();

	void Update();

	static TimeHandler* _instance;

	static TimeHandler* instance()
	{
		if (!_instance)
			_instance = new TimeHandler;
		return _instance;
	}
};

