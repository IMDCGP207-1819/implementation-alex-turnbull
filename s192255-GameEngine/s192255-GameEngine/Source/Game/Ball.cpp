#include "Ball.h"



Ball::Ball(int posX, int posY, float rot)
{
	initalPos = b2Vec2(posX, posY);
	initalRot = rot;
}


Ball::~Ball()
{
}

void Ball::Load(b2World *World)
{
	givePhysicsBody(World, b2BodyType::b2_dynamicBody);
	body->SetTransform(initalPos, 180 / 3.14 * initalRot);
}

void Ball::Update()
{
}