#include"GameLoop.h"

GameLoop::GameLoop()
{
	window = NULL;
	renderer = NULL;
	GameState = false;
}

bool GameLoop::getGameState()
{
	return GameState;
}

void GameLoop::Intialize()
{
	SDL_Init(SDL_INIT_EVERYTHING);
	window = SDL_CreateWindow("My Game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WIDTH, HEIGHT, SDL_WINDOW_RESIZABLE);
	if (window)
	{
		renderer = SDL_CreateRenderer(window, -1, 0);
		if (renderer)
		{
			cout << "Succeeded!" << endl;
			GameState = true;
			player = TextureManager::Texture("Image/6.png", renderer);
		}
		else
		{
			cout << "Not created!" << endl;
		}
	}
	else
	{
		cout << "window not created!" << endl;
	}
}

void GameLoop::Event()
{
	SDL_PollEvent(&event1);
	if (event1.type == SDL_QUIT)
	{
		GameState = false;
	}
	if (event1.type == SDL_KEYDOWN)
	{
		if (event1.key.keysym.sym == SDLK_UP)
		{
			cout << "pressed!" << endl;
		}
	}
}

void GameLoop::Update()
{
	// Source Dimension:
	srcPlayer.h = 60;
	srcPlayer.w = 80;
	srcPlayer.x = srcPlayer.y = 0;

	// Destination Dimension:
	destPlayer.w = 80;
	destPlayer.h = 60;
	destPlayer.x = 10;
	destPlayer.y++;
}

void GameLoop::Render()
{
	SDL_RenderClear(renderer);
	SDL_RenderCopy(renderer, player, &srcPlayer, &destPlayer);
	SDL_RenderPresent(renderer);
}

void GameLoop::Clear()
{
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
}