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
};

