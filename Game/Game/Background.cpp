#include "Background.h"

void Background::Render(SDL_Renderer* ren, SDL_Texture* Tex)
{
	SDL_RenderCopy(ren, Tex, NULL, NULL);
}

void Background::Render(SDL_Renderer* ren, SDL_Texture* Tex, SDL_Rect src, SDL_Rect dest)
{
	SDL_RenderCopy(ren, Tex, &src, &dest);
}