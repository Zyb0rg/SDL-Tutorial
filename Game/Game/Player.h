#pragma once
#include "Object.h"

class Player :public Object
{
private:
    double gravity = 1;
public:
    void Update();
    void Render(SDL_Renderer* ren);
};

