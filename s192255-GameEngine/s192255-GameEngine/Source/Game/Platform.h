#pragma once
#include "GameObject.h"
class Platform :
	public GameObject
{
public:
	Platform(int posX, int posY, float rot);
	~Platform();

	void GameObject::Load(b2World *World);
	void GameObject::Update();
};

