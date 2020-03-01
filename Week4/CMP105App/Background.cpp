#include "Background.h"
#include <SFML/System/Vector2.hpp>
#include "Level.h"


Background::Background()
{
	window = nullptr;
	//playerObject.setInput(input);
	// Init input component
	//input = nullptr;

	//speed.x = 150.0f;
	//speed.y = 150.0f;


	//dir.x = 1;
	//dir.y = 1;

}

Background::~Background()
{

	window = nullptr;
	// Cleanup input
	// delete input;
	//input = nullptr;
}

void Background::handleInput(float dt)
{
	if (window && input)
	{
		sf::View view = window->getView();
		if (input->isKeyDown(sf::Keyboard::Right) && !input->isKeyDown(sf::Keyboard::Left))
		{
			//sf::View view = window->getView();

			view.move(10.0f * dt, 0.0f * dt);


			//window->setView(view);
		}
		if (input->isKeyDown(sf::Keyboard::Left) && !input->isKeyDown(sf::Keyboard::Right))
		{
			//sf::View view = window->getView();

			view.move(-10.0f * dt, 0.0f * dt);

			//window->setView(view);
		}
		window->setView(view);
		

		// change view position
		//evey 10 frames make view go +1 to left then right
		// view left
	
		// or

		// view right
		//view.

	/*	sf::View view = window->getView();
		
		view.move(-10.0f*dt, 0.0f*dt);

		window->setView(view);*/
	}
}

void Background::update(float dt)
{
	
	if (window)
	{
		window->getView();
		getSize();
		checkCollisionB();
	}
}

void Background::checkCollisionB()
{
	if (getPosition().x + getSize().x >= (window->getSize().x))
	{
		// Move background so it is not past the edge
		setPosition(window->getSize().x - getSize().x, getPosition().y);

		// Reverse speed //change to velocity? used in other code
		dir.x = -1;
	}
	else if (getPosition().x <= 0)
	{
		// Move background so it is not past the edge
		setPosition(0, getPosition().y);

		// change direction 
		dir.x = 1;
	}

	if (getPosition().y + getSize().y >= (window->getSize().y))
	{
		// Move background so it is not past the edge
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