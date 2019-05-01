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
	return sf::Texture();
}

void ResourceManager::storeInMap(std::string textureName, sf::Texture texture)
{
	
}
