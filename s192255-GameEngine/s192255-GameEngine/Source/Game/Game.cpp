#include "Game.h"

Game::Game(sf::RenderWindow *window, TimeHandler* time)
{
	gameWindow = window;
	m_timeHandler = time;
	m_sceneMan = new SceneManager();
	m_resMan = new ResourceManager();
}


Game::~Game()
{
}

void Game::start()
{
	world = new b2World(b2Vec2(0.0f,9.8f));

	ContactListener *listener = new ContactListener();
	world->SetContactListener(listener);

	m_resMan->LoadTexture("Source\\Assets\\floor.png", "floorTex");
	m_resMan->LoadTexture("Source\\Assets\\pirateMan.png", "pirate");
	m_resMan->LoadTexture("Source\\Assets\\ball.png", "ball");

	loadScene("Source\\Assets\\Levels\\level1.json");	

	for (GameObject* gameO : gameObjectList)
	{
		gameO->Load(world);
	}
}

void Game::update()
{
	for(GameObject* gameO : gameObjectList)
	{
		gameO->Update();
		gameO->UpdatePhysics();		
		gameWindow->draw(gameO->sprite);
		
	}
	world->Step(m_timeHandler->deltaTime*10,8, 8);
}

void Game::loadScene(std::string levelFileDir)
{
	m_sceneMan->parseSceneFromFile(levelFileDir);
	for (SceneManager::GameObjectDef* GameObj : m_sceneMan->GameObjects)
	{
		if (GameObj->type == std::string("Platform"))
		{
			Platform *platform = new Platform(GameObj->position.x, GameObj->position.y, GameObj->rotation);
			platform->texture = m_resMan->GetTextureFromMap(GameObj->spriteName);
			platform->sprite.setTexture(platform->texture);
			gameObjectList.push_back(platform);
		}

		if (GameObj->type == std::string("Player"))
		{
			player = new Player(GameObj->position.x, GameObj->position.y, GameObj->rotation);
			player->texture = m_resMan->GetTextureFromMap(GameObj->spriteName);
			player->sprite.setTexture(player->texture);
			gameObjectList.push_back(player);
		}

		if (GameObj->type == std::string("Ball"))
		{
			Ball *ball = new Ball(GameObj->position.x, GameObj->position.y, GameObj->rotation);
			ball->texture = m_resMan->GetTextureFromMap(GameObj->spriteName);
			ball->sprite.setTexture(ball->texture);
			gameObjectList.push_back(ball);
		}

	}
}

void Game::givePlayerInput(EventManager* eventManager)
{
	player->inputComponent->eventHandler = eventManager;
}
