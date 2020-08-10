#pragma once
#include "Object.h"

class Player :public Object
{
public:
    void Render(SDL_Renderer* ren, SDL_Texture* Tex, SDL_Rect src, SDL_Rect dest);
};

