#pragma once
#include<SDL.h>
#include<SDL_image.h>
#include<iostream>
#include"TextureManager.h"
using namespace std;

class GameLoop
{
private:
	const int HEIGHT = 640;
	const int WIDTH = 800;
	bool GameState;
	SDL_Window* window;
	SDL_Event event1;
	SDL_Renderer* renderer;
	SDL_Texture* player;
	SDL_Rect srcPlayer, destPlayer;
public:
	GameLoop();
	bool getGameState();
	void Update();
	void Intialize();
	void Event();
	void Render();
	void Clear();
};