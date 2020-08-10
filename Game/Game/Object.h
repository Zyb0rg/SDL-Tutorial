#pragma once
//#include"GameLoop.h"
#include"TextureManager.h"

class Object
{
private:
	SDL_Rect src, dest;
	SDL_Texture* Tex;
public:
	void setSource(int x, int y, int w, int h);
	void setDest(int x, int y, int w, int h);
	SDL_Texture* getTexture();
	SDL_Rect getSrc();
	SDL_Rect getDest();
	void CreateTexture(const char* address, SDL_Renderer* ren);
	void virtual Render(SDL_Renderer* ren, SDL_Texture* Tex, SDL_Rect src, SDL_Rect dest)=0;
};