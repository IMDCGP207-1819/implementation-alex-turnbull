#pragma once
#include "GameObject.h"
#include "../EngineApp/ResourceManager.h"

class GameObject;
class Player :
	public GameObject
{
public:
	Player();
	~Player();

	void GameObject::Load(b2World& world);
	void GameObject::Update();

private:
};

