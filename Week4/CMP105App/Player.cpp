#include "Player.h"
#include <SFML/System/Vector2.hpp>
#include "Level.h"


Player::Player()
{
	//playerObject.setInput(input);
	// Init input component
	input = nullptr;

	//speed.x = 150.0f;
	//speed.y = 150.0f;


	//dir.x = 1;
	//dir.y = 1;
	
}

Player::~Player()
{

	
	// Cleanup input
	// delete input;
	input = nullptr;
}

void Player::handleInput(float dt)
{
	//if (input->isKeyDown(sf::Keyboard::Right) && !input->isKeyDown(sf::Keyboard::Left))
	//{
	//	//Update x speed
	//	speed.x = 70;
	//}
	//else if (input->isKeyDown(sf::Keyboard::Left) && !input->isKeyDown(sf::Keyboard::Right))
	//{
	//	//Update x speed
	//	speed.x = -70;
	//}
	//else
	//{
	//	//Update x speed
	//	speed.x = 0;
	//}

	//if (input->isKeyDown(sf::Keyboard::Up) && !input->isKeyDown(sf::Keyboard::Down))
	//{
	//	//Update y speed
	//	speed.y = -70;
	//}
	//else if (!input->isKeyDown(sf::Keyboard::Up) && input->isKeyDown(sf::Keyboard::Down))
	//{
	//	//Update y speed
	//	speed.y = 70;
	//}
	//else
	//{
	//	//Update y speed
	//	speed.y = 0;
	//}


	/*if (input->isKeyDown(sf::Keyboard::Add) && !input->isKeyDown(sf::Keyboard::Subtract))
	{
		speed.x = speed.x + 25;
		speed.y = speed.y + 25;
	}
	else if (input->isKeyDown(sf::Keyboard::Subtract) && !input->isKeyDown(sf::Keyboard::Add))
	{
		speed.x = speed.x - 25;
		speed.y = speed.y - 25;
	}*/
	if (input->isKeyDown(sf::Keyboard::Right) && !input->isKeyDown(sf::Keyboard::Left))
	{
		//Update x speed
		velocity.x = 70;
	}
	else if (input->isKeyDown(sf::Keyboard::Left) && !input->isKeyDown(sf::Keyboard::Right))
	{
		//Update x speed
		velocity.x = -70;
	}
	else
	{
		//Update x speed
		velocity.x = 0;
	}

	if (input->isKeyDown(sf::Keyboard::Up) && !input->isKeyDown(sf::Keyboard::Down))
	{
		//Update y speed
		velocity.y = -70;
	}
	else if (!input->isKeyDown(sf::Keyboard::Up) && input->isKeyDown(sf::Keyboard::Down))
	{
		//Update y speed
		velocity.y = 70;
	}
	else
	{
		//Update y speed
		velocity.y = 0;
	}
	move(velocity * dt);



	//Override so that when the player collides with a tile it cannoy go through it i.e velocity is 0
}





void Player::update(float dt)
{
	//if (circle.getPosition().x + (circle.getRadius() * 2) >= (window->getSize().x))
	//{
	//	// Move circle so it is not past the edge
	//	circle.setPosition(window->getSize().x - (circle.getRadius() * 2), circle.getPosition().y);

	//	// Reverse speed
	//	dir.x = -1;
	//}
	//else if (circle.getPosition().x <= 0)
	//{
	//	// Move circle so it is not past the edge
	//	circle.setPosition(0, circle.getPosition().y);

	//	// change direction 
	//	dir.x = 1;
	//}

	//if (circle.getPosition().y + (circle.getRadius() * 2) >= (window->getSize().y))
	//{
	//	// Move circle so it is not past the edge
	//	circle.setPosition(circle.getPosition().x, window->getSize().y - (circle.getRadius() * 2));

	//	// change direction
	//	dir.y = -1;
	//}
	//else if (circle.getPosition().y <= 0)
	//{
	//	// Move circle so it is not past the edge
	//	circle.setPosition(circle.getPosition().x, 0);

	//	// change direction
	//	dir.y = 1;
	//}


	//move(velocity * dt);


}