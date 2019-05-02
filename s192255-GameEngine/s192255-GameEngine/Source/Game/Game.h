#pragma once
#include "../EngineApp/ResourceManager.h"
#include "GameObject.h"
#include "Player.h"
#include "Platform.h"
#include "../EngineApp/SceneManager.h"
#include "../EngineApp/EventManager.h"

class ResourceManager;
class Game
{
public:
	Game(sf::RenderWindow *window);
	~Game();

	void start();
	void update();
	void loadScene(std::string levelFileDir);
	void givePlayerInput(EventManager* eventManager);

	Player* player;

	sf::RenderWindow *gameWindow;

	ResourceManager* m_resMan;
	SceneManager* m_sceneMan;

	std::vector<GameObject*> gameObjectList = std::vector<GameObject*>();
};

