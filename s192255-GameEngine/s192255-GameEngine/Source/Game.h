#pragma once
#include "ResourceManager.h"
#include "Player.h"
#include "GameObject.h"

class ResourceManager;
class Game
{
public:
	Game(sf::RenderWindow *window);
	~Game();

	void start();
	void update();
	void loadScene();

	sf::RenderWindow *gameWindow;

	ResourceManager* m_resMan = new ResourceManager();

	std::vector<GameObject*> gameObjectList = std::vector<GameObject*>();
};

