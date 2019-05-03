#pragma once
#include "GameObject.h"

///Derived from a base GameObject, create a static collidable platform Object
class Platform :
	public GameObject
{
public:
	Platform(int posX, int posY, float rot); //!< the constructor definition for the platform
	~Platform();

	void GameObject::Load(b2World *World);
	void GameObject::Update();
};

