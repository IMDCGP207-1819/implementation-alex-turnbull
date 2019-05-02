#include "Player.h"



Player::Player(int posX, int posY, float rot)
{	
	initalPos = b2Vec2(posX, posY);
	inputComponent = new InputManagement();
}


Player::~Player()
{
}

void Player::Load(b2World& world)
{
	//initalPos = b2Vec2(200, 200);
	givePhysicsBody(world);
	body->SetTransform(initalPos, body->GetAngle());
	//m_resMan->instance()->LoadTexture("Source\\Assets\\pirateMan.png", "pirateTex");
}

void Player::Update()
{
	inputComponent->Listen();
	//sprite.setTexture(m_resMan->instance()->GetTextureFromMap("pirateTex"));

	if (inputComponent->currentAction != inputComponent->no)
	{
		if (inputComponent->currentAction == inputComponent->moveRight)
		{
			std::cout << "\nMOVE RIGHT" << std::endl;
		}
		if (inputComponent->currentAction == inputComponent->moveLeft)
		{
			std::cout << "\nMOVE LEFT" << std::endl;
		}
		if (inputComponent->currentAction == inputComponent->jump)
		{
			std::cout << "\nJUMP" << std::endl;
		}
		if (inputComponent->currentAction == inputComponent->stop)
		{
			//std::cout << "STOP" << std::endl;
		}
	}
}

