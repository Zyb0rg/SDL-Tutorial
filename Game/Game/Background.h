#pragma once
#include "Object.h"

class Background :public Object
{
private:
	int distance1 = 0;
	int distance2 = 336;
public:
	void GroundUpdate1();
	void GroundUpdate2();
	void Render(SDL_Renderer* ren);
	void GroundRender(SDL_Renderer* ren);
};

