#include "Enemy.h"
#include <SFML/System/Vector2.hpp>
#include "Level.h"


Enemy::Enemy()
{
	window = nullptr;
	
	speed.x = 150.0f;
	speed.y = 150.0f;

	dir.x = 1;
	dir.y = 1;
}



Enemy::~Enemy()
{
	window = nullptr;
}

void Enemy::handleInput(float dt)
{
	
}

void Enemy::update(float dt)
{
	
	checkCollision();

	//Move Enemy
	move(speed.x * dt * dir.x, speed.y * dt * dir.y);

}

void Enemy::checkCollision()
{
	if (getPosition().x + getSize().x >= (window->getSize().x))
	{
		// Move circle so it is not past the edge
		setPosition(window->getSize().x - getSize().x, getPosition().y);

		// Reverse speed //change to velocity? used in other code
		dir.x = -1;
	}
	else if (getPosition().x <= 0)
	{
		// Move circle so it is not past the edge
		setPosition(0, getPosition().y);

		// change direction 
		dir.x = 1;
	}

	if (getPosition().y + getSize().y >= (window->getSize().y))
	{
		// Move circle so it is not past the edge
		setPosition(getPosition().x, window->getSize().y - getSize().y);

		// change direction
		dir.y = -1;
	}
	else if (getPosition().y <= 0)
	{
		// Move circle so it is not past the edge
		setPosition(getPosition().x, 0);

		// change direction
		dir.y = 1;
	}
}