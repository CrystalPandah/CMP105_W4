#include "Enemy.h"
#include <SFML/System/Vector2.hpp>
//#include "Level.h"


Enemy::Enemy()
{
	//setWindow(sf::RenderWindow * hwnd, Input * in);
	//playerObject.setInput(input);
	// Init input component
	input = nullptr;
	

	//speed.x = 150.0f;
	//speed.y = 150.0f;
	//enemy.setInput(input);
	//Enemy.setInput(GameObject window);

	
	

	//dir.x = 1;
	//dir.y = 1;

}



Enemy::~Enemy()
{


	// Cleanup input
	// delete input;
	input = nullptr;
}

void Enemy::handleInput(float dt)
{
	
}





void Enemy::update(float dt)
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