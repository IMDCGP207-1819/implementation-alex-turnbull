#pragma once
#include "../EngineApp/ResourceManager.h"
#include "GameObject.h"
#include "Player.h"
#include "Platform.h"
#include "../EngineApp/SceneManager.h"
#include "../EngineApp/EventManager.h"
#include "../EngineApp/TimeHandler.h"
#include "../EngineApp/ContactListener.h"

#include "Box2D/Collision/b2Collision.h"

class ResourceManager;
class Game
{
public:
	Game(sf::RenderWindow *window, TimeHandler* time);
	~Game();

	void start();
	void update();
	void loadScene(std::string levelFileDir);
	void givePlayerInput(EventManager* eventManager);

	Player* player;

	b2World *world;

	sf::RenderWindow *gameWindow;

	ResourceManager* m_resMan;
	SceneManager* m_sceneMan;
	TimeHandler* m_timeHandler;

	std::vector<GameObject*> gameObjectList = std::vector<GameObject*>();
};

