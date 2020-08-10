#pragma once
#include "Object.h"

class Background :public Object
{
public:
	void Render(SDL_Renderer* ren, SDL_Texture* Tex, SDL_Rect src, SDL_Rect dest);
	void Render(SDL_Renderer* ren, SDL_Texture* Tex);
};

