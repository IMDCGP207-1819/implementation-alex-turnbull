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
///Overall Game Class, stores and runs all of the gameObjects in the world/scene
class Game
{
public:
	Game(sf::RenderWindow *window, TimeHandler* time);
	~Game();

	void start(); //!< Start of the game, define the world and the assets needed
	void update(); //!< Update all gameObjects within the world
	void loadScene(std::string levelFileDir); //!< calling the scene Manager to load a scene from a given file
	void givePlayerInput(EventManager* eventManager); //!<

	Player* player; //!< Store a reference the player controller GameObject

	b2World *world; //!< Store a refence of the Physics based world

	sf::RenderWindow *gameWindow;

	ResourceManager* m_resMan; 
	SceneManager* m_sceneMan; 
	TimeHandler* m_timeHandler;

	std::vector<GameObject*> gameObjectList = std::vector<GameObject*>(); //!< Stores a list of all the GameObjects within the game world
};

