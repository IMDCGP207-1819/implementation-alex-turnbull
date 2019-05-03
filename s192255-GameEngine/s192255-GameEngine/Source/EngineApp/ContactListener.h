#pragma once
#include <iostream>
#include "Box2D/Box2D.h"
#include "Box2D/Collision/b2Collision.h"

class ContactListener : public b2ContactListener
{
public:

	ContactListener();
	~ContactListener();

	void BeginContact(b2Contact* contact);
	void EndContact(b2Contact* contact);
	void PostSolve(b2Contact* contact, const b2ContactImpulse* impulse);
	void PreSolve(b2Contact* contact, const b2Manifold* oldManifold);
};
