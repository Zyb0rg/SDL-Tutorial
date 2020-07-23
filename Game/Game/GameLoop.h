#pragma once
#include<SDL.h>
#include<iostream>
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
public:
	GameLoop();
	bool getGameState();
	void Intialize();
	void Event();
	void Render();
	void Clear();
};