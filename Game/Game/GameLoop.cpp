#include"GameLoop.h"

GameLoop::GameLoop()
{
	window = NULL;
	renderer = NULL;
	GameState = false;
	// Source Dimension:
	p.setSource(0, 0, 80, 60);
	// Destination Dimension:
	p.setDest(100, 200, 80, 60);
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
			std::cout << "Succeeded!" << std::endl;
			GameState = true;
			p.CreateTexture("Image/6.png", renderer);
			b.CreateTexture("Image/background.png", renderer);
		}
		else
		{
			std::cout << "Not created!" << std::endl;
		}
	}
	else
	{
		std::cout << "window not created!" << std::endl;
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
			std::cout << "pressed!" << std::endl;
		}
	}
}

void GameLoop::Update()
{

}

void GameLoop::Render()
{
	SDL_RenderClear(renderer);
	b.Render(renderer, b.getTexture());
	p.Render(renderer, p.getTexture(), p.getSrc(), p.getDest());
	SDL_RenderPresent(renderer);
}

void GameLoop::Clear()
{
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
}