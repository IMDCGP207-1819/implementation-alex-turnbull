#include <SFML/Graphics.hpp>
#include <iostream>

#include <Box2D/Box2D.h>

#include "Window.h"
#include "InputManagement.h"
#include "TimeHandler.h"
#include "GameObject.h"
#include "Game.h"
#include "SceneManager.h"
#include "Player.h"

#include "App.h"

int main()
{	
	//Window window(name);
	App gameApp = App();
	Player *p = new Player();
	b2World world = b2World(b2Vec2_zero);

	p->givePhysicsBody(world);
	p->SetSprite("Source\\Assets\\pirateMan.png");
	p->body->SetTransform(b2Vec2(gameApp.getWindow()->getWidth()/2, gameApp.getWindow()->getHeight()/2),p->body->GetAngle());
	//p->sprite.setPosition(gameApp.getWindow()->getWidth()/2, gameApp.getWindow()->getHeight()/2);
	

	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Red);
	shape.setPosition(sf::Vector2f(gameApp.getWindow()->getWidth()/ 2, gameApp.getWindow()->getHeight()/2));
	shape.setOrigin(shape.getGlobalBounds().width/2, shape.getGlobalBounds().height/2);

	while (gameApp.getWindow()->instance()->GameWindow->isOpen())
	{
		gameApp.Update();
		p->UpdatePhysics();

		std::cout << "Delta Time: " << gameApp.getDeltaTime() << '\r';
		//std::cout << "\nPlayer Pos: " << p->getPosition().x;

		gameApp.getWindow()->instance()->GameWindow->clear(sf::Color(123,132,123,255));
		gameApp.getWindow()->instance()->GameWindow->draw(shape);
		gameApp.getWindow()->instance()->GameWindow->draw(p->sprite);		
		gameApp.getWindow()->instance()->GameWindow->display();
	}
	return 0;
}