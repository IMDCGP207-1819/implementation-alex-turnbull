#include "Game.h"

Game::Game(sf::RenderWindow *window)
{
	gameWindow = window;
	m_sceneMan = new SceneManager();
	m_resMan = new ResourceManager();
}


Game::~Game()
{
}

void Game::start()
{
	b2World world = b2World(b2Vec2_zero);

	GameObject *p = new Player();	
	m_resMan->LoadTexture("Source\\Assets\\pirateMan.png", "pirateTex");
	p->texture = m_resMan->GetTextureFromMap("pirateTex");
	p->sprite.setTexture(p->texture);
	p->sprite.setOrigin(sf::Vector2f(p->texture.getSize().x / 2, p->texture.getSize().y / 2));
	p->givePhysicsBody(world);
	p->body->SetTransform(b2Vec2(200, 200), p->body->GetAngle());
	gameObjectList.push_back(p);

	GameObject* groundTest = new Platform();
	m_resMan->LoadTexture("Source\\Assets\\floor.png", "floorTex");
	groundTest->texture = m_resMan->GetTextureFromMap("floorTex");
	groundTest->sprite.setOrigin(sf::Vector2f(groundTest->texture.getSize().x / 2, groundTest->texture.getSize().y / 2));
	groundTest->sprite.setTexture(groundTest->texture);
	groundTest->givePhysicsBody(world);
	groundTest->body->SetTransform(b2Vec2(1000, 1000), groundTest->body->GetAngle());
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
