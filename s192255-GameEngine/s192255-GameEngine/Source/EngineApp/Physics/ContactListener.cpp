#include "ContactListener.h"



ContactListener::ContactListener()
{
}


ContactListener::~ContactListener()
{
}

void ContactListener::BeginContact(b2Contact* contact)
{
	std::cout << "Begin Contact" << std::endl;
}

void ContactListener::EndContact(b2Contact* contact)
{
	std::cout << "End Contact" << std::endl;
}

void ContactListener::PostSolve(b2Contact* contact, const b2ContactImpulse* impulse)
{
	std::cout << "Post Solve" << std::endl;
}

void ContactListener::PreSolve(b2Contact* contact, const b2Manifold* oldManifold)
{
	std::cout << "Pre Solve" << std::endl;
}
