#pragma once

#include <SFML/Graphics.hpp>
#include <Box2D/Box2D.h>
#include "../EngineApp/Input/InputManagement.h"
#include "../EngineApp/Input/EventManager.h"

class GameObject: public sf::Transformable
{
public:
	GameObject();
	~GameObject();

	virtual void Load(b2World *World) = 0;
	virtual void Update() = 0;
	void Destroy();

	b2Vec2 initalPos;
	float initalRot;
	b2Vec2 velocity;
	b2Body* body;
	float scale = 10;

	sf::Texture texture;
	sf::Sprite sprite;

	void SetSprite();

	void givePhysicsBody(b2World *World, b2BodyType physType);
	void gravity();
	void ApplyVelocity();
	void UpdatePhysics();
	
};

