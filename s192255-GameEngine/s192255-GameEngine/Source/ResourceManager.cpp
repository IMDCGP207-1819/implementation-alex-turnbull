#include "ResourceManager.h"



ResourceManager::ResourceManager()
{
}


ResourceManager::~ResourceManager()
{
}

sf::Texture ResourceManager::LoadTexture(std::string fileDir, std::string nameToStore)
{
	sf::Texture texture;
	texture.loadFromFile(fileDir);

	storeInMap(nameToStore,texture);

	return texture;
}

sf::Texture ResourceManager::GetTextureFromMap(std::string textureRef)
{
	sf::Texture returnTex = textureMap[textureRef];

	return returnTex;
}

void ResourceManager::storeInMap(std::string textureName, sf::Texture texture)
{
	textureMap.insert(std::pair<std::string, sf::Texture>(textureName, texture));
}
