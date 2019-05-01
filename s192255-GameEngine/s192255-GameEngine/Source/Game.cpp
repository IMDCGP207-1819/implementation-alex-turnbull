#include "Game.h"

Game::Game(sf::RenderWindow *window)
{
	GameObject *p = new Player();
	b2World world = b2World(b2Vec2_zero);
	m_resMan->LoadTexture("Source\\Assets\\pirateMan.png", "pirateTex");
	auto d = m_resMan->GetTextureFromMap("pirateTex");
	p->sprite.setTexture(d);
	p->givePhysicsBody(world);
	p->body->SetTransform(b2Vec2(500, 500), p->body->GetAngle());
	gameObjectList.push_back(p);

	gameWindow = window;
}


Game::~Game()
{
}

void Game::update()
{
	for(GameObject* gameO : gameObjectList)
	{
		gameO->Update();
		//gameO->UpdatePhysics();
		gameWindow->draw(gameO->sprite);
	}

	
}
