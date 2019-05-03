#pragma once
#include "GameObject.h"
class Ball :
	public GameObject
{
public:
	Ball(int posX, int posY, float rot);
	~Ball();

	void GameObject::Load(b2World *World);
	void GameObject::Update();
};

