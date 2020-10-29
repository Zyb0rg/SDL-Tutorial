#include"GameLoop.h"

GameLoop* g = new GameLoop();

int main(int argc, char** argv)
{
	double first;
	double last = 0;
	g->Intialize();
	while (g->getGameState())
	{
		g->Event();
		g->Update();
		g->Render();
		first = SDL_GetTicks();
		if (first - last < 16.7)
		{
			SDL_Delay(16.7 - (first - last));
		}
		last = first;
	}
	g->Clear();
	return 0;
}
