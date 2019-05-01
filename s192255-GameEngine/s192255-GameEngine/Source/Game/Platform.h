#pragma once
#include "GameObject.h"
class Platform :
	public GameObject
{
public:
	Platform();
	~Platform();

	void GameObject::Load();
	void GameObject::Update();
};

