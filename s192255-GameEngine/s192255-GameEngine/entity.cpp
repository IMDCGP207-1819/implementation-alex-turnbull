#include "entity.h"

Entity::Entity(b2World * world)
{
}

void Entity::Load(std::string filename, bool dynamic)
{
}

bool Entity::Update(sf::RenderWindow * window)
{
	return false;
}

bool Entity::CheckCollision(Entity * entity)
{
	return false;
}

void Entity::Collision(Entity * entity)
{
}

int Entity::GroupID()
{
	return 0;
}

int Entity::Active()
{
	return 0;
}

void Entity::Destroy()
{
}

Entity::~Entity()
{
}
