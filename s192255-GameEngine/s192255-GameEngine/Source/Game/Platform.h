#pragma once
#include "GameObject.h"
class Platform :
	public GameObject
{
public:
	Platform();
	~Platform();

	void GameObject::Load(b2World& world);
	void GameObject::Update();
};

