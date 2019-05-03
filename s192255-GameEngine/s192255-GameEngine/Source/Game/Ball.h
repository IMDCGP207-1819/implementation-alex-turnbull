#pragma once
#include "GameObject.h"

///Derived from a base GameObject, create a pushable ball object
class Ball :
	public GameObject
{
public:
	Ball(int posX, int posY, float rot); //!< Construct a ball given the position and rotation
	~Ball();

	void GameObject::Load(b2World *World);
	void GameObject::Update();
};

