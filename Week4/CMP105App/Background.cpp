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
	if (window)
	{
		

		// change view position
		//evey 10 frames make view go +1 to left then right
		// view left
	
		// or

		// view right
		//view.

		sf::View view = window->getView();
		
		view.move(-10.0f*dt, 0.0f*dt);

		window->setView(view);
	}
}

void Background::update(float dt)
{
	
}