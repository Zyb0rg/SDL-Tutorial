#include "Player.h"

void Player::Render(SDL_Renderer* ren, SDL_Texture* Tex, SDL_Rect src, SDL_Rect dest)
{
	SDL_RenderCopy(ren, Tex, &src, &dest);
}