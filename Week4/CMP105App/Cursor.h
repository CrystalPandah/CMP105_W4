#pragma once
#include "Framework/GameObject.h"
#include "Framework/Input.h"
class Cursor : public GameObject
{
public:
	Cursor();
	~Cursor();

	void handleInput(float dt);
	void update(float dt, float x, float y);
	//void setMousePosition(int x, int y);
	//float velocity;
	//sf::Vector2<float>	speed;
	//sf::Vector2<int>	dir;

};


