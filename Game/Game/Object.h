#pragma once
#include"TextureManager.h"

class Object
{
private:
	SDL_Rect src, dest;
	SDL_Texture* Tex;
public:

	SDL_Texture* getTexture();
	SDL_Rect getSrc();
	SDL_Rect getDest();
	void setSrc(int x, int y, int h, int w);
	void setDest(int x, int y, int h, int w);

	void CreateTexture(const char* address, SDL_Renderer* ren);
	void virtual Render(SDL_Renderer* ren)=0;
};