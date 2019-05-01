#pragma once
#include <SFML/Graphics.hpp>

class ResourceManager
{
public:
	ResourceManager();
	~ResourceManager();

	sf::Texture LoadTexture(std::string fileDir, std::string nameToStore);
	sf::Texture GetTextureFromMap(std::string textureRef);
	void storeInMap(std::string textureName, sf::Texture texture);

	std::map<std::string, sf::Texture> textureMap;

	static ResourceManager* _instance;

	static ResourceManager* instance()
	{
		if (!_instance)
			_instance = new ResourceManager;
		return _instance;
	}
};

