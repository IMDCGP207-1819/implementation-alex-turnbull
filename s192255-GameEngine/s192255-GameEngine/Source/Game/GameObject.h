#pragma once

#include <SFML/Graphics.hpp>
#include <Box2D/Box2D.h>

#include "../EngineApp/ResourceManager.h"

class GameObject: public sf::Transformable
{
public:
	GameObject();
	~GameObject();

	virtual void Load() = 0;
	virtual void Update() = 0;
	void Destroy();

	b2Vec2 initalPos;
	b2Vec2 velocity;
	b2Body* body;
	float scale = 10;

	sf::Texture texture;
	sf::Sprite sprite;

	ResourceManager *m_resMan;

	void SetSprite(std::string fileDir);

	void givePhysicsBody(b2World& World);
	void gravity();
	void ApplyVelocity();
	void UpdatePhysics();
	
};

