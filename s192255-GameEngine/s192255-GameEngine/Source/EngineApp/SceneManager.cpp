#include "SceneManager.h"

#define FILE_BUFFER 32768


SceneManager::SceneManager()
{
}


SceneManager::~SceneManager()
{
}

void SceneManager::parseSceneFromFile(std::string levelFileDir)
{
	GameObjects.clear();

	FILE* fileToRead = fopen(levelFileDir.c_str(), "rb");
	char buffer[FILE_BUFFER];
	rapidjson::FileReadStream is(fileToRead, buffer, sizeof(buffer));

	rapidjson::Document doc;
	doc.ParseStream<0, rapidjson::UTF8<>, rapidjson::FileReadStream>(is);

	if(doc.IsObject())
	{		
		int iterator = 0;
		
		while(true)
		{
			char baseName[64] = "Object_";
			char intValue[8];

			iterator++;
			sprintf(intValue, "%d", iterator);

			strcat(baseName, intValue);

			if(doc.HasMember(baseName))
			{
				if(doc[baseName].IsObject())
				{
					GameObjectDef* newGameObject = new GameObjectDef;

					if(doc[baseName].HasMember("Type"))
					{
						newGameObject->type = doc[baseName]["Type"].GetString();
					}
					if (doc[baseName].HasMember("Position"))
					{
						auto &position = doc[baseName]["Position"];

						newGameObject->position = sf::Vector2f(position[0].GetInt(), position[1].GetInt());
					}
					if (doc[baseName].HasMember("Rotation"))
					{
						newGameObject->rotation = doc[baseName]["Rotation"].GetInt();
					}

					GameObjects.push_back(newGameObject);
				}
			}
			else
			{
				break;
			}
			
		}
	}
	
}
