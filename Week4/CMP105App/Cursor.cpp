#include "Cursor.h"
#include <SFML/System/Vector2.hpp>
#include "Level.h"


Cursor::Cursor()
{
	//playerObject.setInput(input);
	// Init input component
	//input = nullptr;

	//speed.x = 150.0f;
	//speed.y = 150.0f;
	//x = 0;
	//y = 0;
	//setMousePosition to position of cursor 
	//dir.x = 1;
	//dir.y = 1;

}

Cursor::~Cursor()
{


	// Cleanup input
	// delete input;
	//input = nullptr;
}

void Cursor::handleInput(float dt)
{
	
}



void Cursor::update(float dt)
{
	setMousPosition(x, y) == cursorPosition(x, y);
	mousePosition (x,y) 
	

}


