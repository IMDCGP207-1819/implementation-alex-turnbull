#include "Platform.h"



Platform::Platform(int posX, int posY, float rot)
{
	initalPos = b2Vec2(posX, posY);
}


Platform::~Platform()
{
}

void Platform::Load(b2World& world)
{
	//initalPos = b2Vec2(500, 500);
	givePhysicsBody(world);
	body->SetTransform(initalPos, body->GetAngle());
}

void Platform::Update()
{
}