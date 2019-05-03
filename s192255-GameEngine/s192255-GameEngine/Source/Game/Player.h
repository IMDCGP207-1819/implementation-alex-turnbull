#pragma once
#include <iostream>

#include "GameObject.h"
#include "../EngineApp/Input/InputManagement.h"
#include "../EngineApp/Core/ResourceManager.h"

class GameObject;
///Controllable playable entity GameObject
class Player :
	public GameObject
{
public:
	Player(int posX, int posY, float rot);
	~Player();

	void GameObject::Load(b2World *World);
	void GameObject::Update();

	b2Vec2 speed = b2Vec2(50, 0);

	enum movementDirections
	{
		Left,
		Right,
		Jump,
		Stop
	};

	movementDirections playerMovement;


	void move(movementDirections moveType);

	
	InputManagement* inputComponent;

private:
};

