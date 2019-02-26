#include <SFML/Graphics.hpp>
#include <iostream>

#include <Box2D/Box2D.h>

int main()
{
	sf::RenderWindow window(sf::VideoMode(200, 200), "Working");
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

	sf::CircleShape circ(50.f);
	circ.setFillColor(sf::Color::Red);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		sf::Keyboard keyboard;

		window.clear();
		window.draw(shape);
		window.display();
		
	}

	return 0;
}