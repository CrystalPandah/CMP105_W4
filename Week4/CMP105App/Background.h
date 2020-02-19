#pragma once
#include "Framework/GameObject.h"

class Background : public GameObject
{
public:
	Background();
	~Background();

	void handleInput(float dt);
	void update(float dt);
	void setWindow(sf::RenderWindow* hwnd) { window = hwnd; };

private:
	sf::RenderWindow* window;
	//float velocity;
	//sf::Vector2<float>	speed;
	//sf::Vector2<int>	dir;

};

