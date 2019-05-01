#include "Player.h"



Player::Player()
{	
}


Player::~Player()
{
}

void Player::Load(b2World& world)
{
	initalPos = b2Vec2(200, 200);
	givePhysicsBody(world);
	body->SetTransform(initalPos, body->GetAngle());
	//m_resMan->instance()->LoadTexture("Source\\Assets\\pirateMan.png", "pirateTex");
}

void Player::Update()
{
	//sprite.setTexture(m_resMan->instance()->GetTextureFromMap("pirateTex"));
}

