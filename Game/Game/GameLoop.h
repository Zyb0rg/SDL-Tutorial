#pragma once
#include<SDL.h>
#include<SDL_image.h>
#include<iostream>
#include"Player.h"
#include"Object.h"
#include"Background.h"

class GameLoop
{
private:
	Player p;
	Background b;
	const int HEIGHT = 640;
	const int WIDTH = 800;
	bool GameState;
	SDL_Window* window;
	SDL_Event event1;
	SDL_Renderer* renderer;
	SDL_Texture* background;
public:
	GameLoop();
	bool getGameState();
	void Update();
	void Intialize();
	void Event();
	void Render();
	void Clear();
};