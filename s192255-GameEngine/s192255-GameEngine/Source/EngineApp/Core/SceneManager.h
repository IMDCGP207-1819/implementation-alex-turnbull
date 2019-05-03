#pragma once
#include "../../Game/GameObject.h"

#include <iostream>
#include <fstream>
#include <document.h>
#include <filereadstream.h>

class SceneManager
{
public:
	SceneManager();
	~SceneManager();

	void parseSceneFromFile(std::string levelFileDir);

	struct GameObjectDef
	{
		std::string type;
		sf::Vector2f position;
		float rotation;
		std::string spriteName;
	};

	std::vector<GameObjectDef*> GameObjects;
};

