#include "Game.h"

Game::Game(sf::RenderWindow *window)
{
	gameWindow = window;
	m_sceneMan = new SceneManager();
}


Game::~Game()
{
}

void Game::start()
{
	b2World world = b2World(b2Vec2_zero);

	GameObject *p = new Player();	
	m_resMan->LoadTexture("Source\\Assets\\pirateMan.png", "pirateTex");
	auto d = m_resMan->GetTextureFromMap("pirateTex");
	p->sprite.setTexture(d);
	p->givePhysicsBody(world);
	p->body->SetTransform(b2Vec2(200, 200), p->body->GetAngle());
	gameObjectList.push_back(p);

	GameObject* groundTest = new Platform();
	groundTest->SetSprite("Source\\Assets\\floor.png");
	groundTest->givePhysicsBody(world);
	groundTest->body->SetTransform(b2Vec2(500, 500), groundTest->body->GetAngle());
	gameObjectList.push_back(groundTest);
}

void Game::update()
{
	for(GameObject* gameO : gameObjectList)
	{
		gameO->Update();
		gameO->UpdatePhysics();
		gameWindow->draw(gameO->sprite);
	}

	
}

void Game::loadScene(std::string levelFileDir)
{
}
