#pragma once
#include <iostream>

class SceneManager
{
public:
	SceneManager();
	~SceneManager();

	void parseSceneFromFile(std::string levelFileDir);
};

