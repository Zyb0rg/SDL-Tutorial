#include "Player.h"
#include<iostream>

void Player::Render(SDL_Renderer* ren)
{
	SDL_RenderCopy(ren, getTexture(), &getSrc(), &getDest());
}

void Player::Update()
{
	gravity = gravity + 0.5;
	setSrc(0, 0, 60, 80);
	setDest(0, gravity, 60, 80);
}