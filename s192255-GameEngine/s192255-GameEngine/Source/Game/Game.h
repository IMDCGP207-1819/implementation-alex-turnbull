#pragma once
#include "GameObject.h"
#include "Player.h"
#include "Platform.h"
#include "Ball.h"

#include "../EngineApp/Core/ResourceManager.h"
#include "../EngineApp/Core/SceneManager.h"
#include "../EngineApp/Core/TimeHandler.h"
#include "../EngineApp/Input/EventManager.h"
#include "../EngineApp/Physics/ContactListener.h"

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

