#include "Player.h"



Player::Player(int posX, int posY, float rot)
{	
	initalPos = b2Vec2(posX, posY);
	initalRot = rot;
	inputComponent = new InputManagement();
}


Player::~Player()
{
}

void Player::move(movementDirections moveType)
{
	b2Vec2 vel = body->GetLinearVelocity();

	if(moveType == Right)
	{
		vel.x = speed.x;
	}else if(moveType == Left)
	{
		vel.x = -speed.x;
	}else if(moveType == Stop)
	{
		vel.x = 0;
	}
	
	body->SetLinearVelocity(vel);
}

void Player::Load(b2World *World)
{
	givePhysicsBody(World, b2BodyType::b2_dynamicBody);
}

void Player::Update()
{
	inputComponent->Listen();

	if (inputComponent->currentAction != inputComponent->no)
	{
		if (inputComponent->currentAction == inputComponent->moveRight)
		{
			std::cout << "\nMOVE RIGHT" << std::endl;	
			move(Right);
		}
		if (inputComponent->currentAction == inputComponent->moveLeft)
		{
			std::cout << "\nMOVE LEFT" << std::endl;
			move(Left);
		}
		if (inputComponent->currentAction == inputComponent->jump)
		{
			std::cout << "\nJUMP" << std::endl;
		}
		if (inputComponent->currentAction == inputComponent->stop)
		{
			move(Stop);
			//std::cout << "STOP" << std::endl;
		}
	}
}

