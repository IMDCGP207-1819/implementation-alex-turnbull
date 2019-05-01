#include "Platform.h"



Platform::Platform()
{
	
}


Platform::~Platform()
{
}

void Platform::Load(b2World& world)
{
	initalPos = b2Vec2(500, 500);
	givePhysicsBody(world);
	body->SetTransform(initalPos, body->GetAngle());
}

void Platform::Update()
{
}