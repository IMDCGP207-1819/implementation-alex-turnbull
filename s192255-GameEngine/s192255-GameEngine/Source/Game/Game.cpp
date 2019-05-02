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

	loadScene("Source\\Assets\\Levels\\level1.json");

	//GameObject* groundTest = new Platform();
	m_resMan->LoadTexture("Source\\Assets\\floor.png", "floorTex");
	m_resMan->LoadTexture("Source\\Assets\\pirateMan.png", "pirate");

	for (GameObject* gameO : gameObjectList)
	{
		gameO->Load(world);
		gameO->texture = m_resMan->GetTextureFromMap("pirate");
		gameO->sprite.setTexture(gameO->texture);
		//std::cout << "X: " << gameO->body->GetPosition().x << " Y: " << gameO->body->GetPosition().y << std::endl;

	}
	//groundTest->texture = m_resMan->GetTextureFromMap("floorTex");
	//groundTest->SetSprite();
	//groundTest->Load(world);
	////groundTest->body->SetTransform(b2Vec2(1000, 1000), groundTest->body->GetAngle());
	//gameObjectList.push_back(groundTest);

	//GameObject *p = new Player();	
	//m_resMan->LoadTexture("Source\\Assets\\pirateMan.png", "pirateTex");
	//p->texture = m_resMan->GetTextureFromMap("pirateTex");
	//p->SetSprite();
	//p->Load(world);
	////p->body->SetTransform(b2Vec2(200, 200), p->body->GetAngle());
	//gameObjectList.push_back(p);	

	/*std::cout << "X: " << p->body->GetPosition().x << " Y: " << p->body->GetPosition().y << std::endl;
	std::cout << "X: " << groundTest->body->GetPosition().x << " Y: " << groundTest->body->GetPosition().y << std::endl;*/
}

void Game::update()
{
	for(GameObject* gameO : gameObjectList)
	{
		gameO->Update();
		gameO->UpdatePhysics();		
		gameWindow->draw(gameO->sprite);
		//std::cout << "X: " << gameO->body->GetPosition().x << " Y: " << gameO->body->GetPosition().y << std::endl;
		
	}	
}

void Game::loadScene(std::string levelFileDir)
{
	m_sceneMan->parseSceneFromFile(levelFileDir);
	for (SceneManager::GameObjectDef* GO : m_sceneMan->GameObjects)
	{
		if (GO->type == std::string("Platform"))
		{
			gameObjectList.push_back(new Platform(GO->position.x, GO->position.y, GO->rotation));
		}

		if (GO->type == std::string("Player"))
		{
			gameObjectList.push_back(new Player(GO->position.x, GO->position.y, GO->rotation));
		}

	}
}
