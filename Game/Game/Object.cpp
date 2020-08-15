#include"Object.h"

SDL_Texture* Object::getTexture()
{
	return Tex;
}

SDL_Rect Object::getSrc()
{
	return src;
}

SDL_Rect Object::getDest()
{
	return dest;
}


void Object::setSrc(int x, int y, int h, int w)
{
	src.x = x;
	src.y = y;
	src.h = h;
	src.w = w;
}

void Object::setDest(int x, int y, int h, int w)
{
	dest.x = x;
	dest.y = y;
	dest.h = h;
	dest.w = w;
}

void Object::CreateTexture(const char* address,SDL_Renderer* ren)
{
	Tex = TextureManager::Texture(address, ren);
}