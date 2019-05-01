#pragma once
#include "GameObject.h"

class GameObject;
class Player :
	public GameObject
{
public:
	Player();
	~Player();

	void GameObject::Load();
	void GameObject::Update();
};

