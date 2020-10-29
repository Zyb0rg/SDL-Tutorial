#pragma once
#include "Object.h"

class Player :public Object
{
private:
    double gravity = 0.2;
    int Ypos = 256;
    double accelerator1 = 0;
    double accelerator2 = 0;
    bool inJump = false;
    double jumpHeight = -6;
    double jumpTimer;
    double lastJump = 0;
    SDL_Texture* Tex1;
    SDL_Texture* Tex2;
    int animationTimer;
public:
    void Gravity();
    void GetJumpTime();
    void Jump();
    bool JumpState();
    void CreateTexture1(const char* address, SDL_Renderer* ren);
    void CreateTexture2(const char* address, SDL_Renderer* ren);
    void Render(SDL_Renderer* ren);
};

