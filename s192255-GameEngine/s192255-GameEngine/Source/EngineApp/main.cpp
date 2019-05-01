#include <SFML/Graphics.hpp>
#include <iostream>

#include <Box2D/Box2D.h>

#include "Window.h"
#include "ResourceManager.h"
#include "TimeHandler.h"
#include "../Game/GameObject.h"
#include "../Game/Game.h"
#include "../Game/Player.h"
#include "App.h"

//#include "../EngineApp/InputManagement.h"
//#include "SceneManager.h"
int main()
{
	App gameApp = App("Scoop");
	//Player *p = new Player();
	//ResourceManager *rManager = new ResourceManager();

	//p->givePhysicsBody(world);
	//p->SetSprite("Source\\Assets\\pirateMan.png");
	//p->body->SetTransform(b2Vec2(gameApp.getWindow()->getWidth()/2, gameApp.getWindow()->getHeight()/2),p->body->GetAngle());
	//p->sprite.setPosition(gameApp.getWindow()->getWidth()/2, gameApp.getWindow()->getHeight()/2);

	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Red);
	shape.setPosition(sf::Vector2f(gameApp.getWindow()->getWidth()/ 2, gameApp.getWindow()->getHeight()/2));
	shape.setOrigin(shape.getGlobalBounds().width/2, shape.getGlobalBounds().height/2);

	//ResourceManager *rManager = new ResourceManager();
	//rManager->LoadTexture("Source\\Assets\\pirateMan.png","pirateTex");
	//auto d = rManager->GetTextureFromMap("pirateTex");
	//p->sprite.setTexture(d);

	gameApp.getGame()->start();
	while (gameApp.getWindow()->instance()->GameWindow->isOpen())
	{
		std::cout << "Delta Time: " << gameApp.getDeltaTime() << '\r';

		gameApp.getWindow()->instance()->GameWindow->clear(sf::Color(123,132,123,255));
		gameApp.getWindow()->instance()->GameWindow->draw(shape);
		gameApp.Update();
		gameApp.getWindow()->instance()->GameWindow->display();
	}
	return 0;
}