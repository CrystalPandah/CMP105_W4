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
		sf::View view = window->getView();

		// change view position

		// view left

		// or

		// view right
		view.

		window->setView(view);
	}
}

void Background::update(float dt)
{
	
}