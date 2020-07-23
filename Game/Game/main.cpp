#include"GameLoop.h"

GameLoop* g = new GameLoop();

int main(int argc, char** argv)
{
	g->Intialize();
	while (g->getGameState())
	{
		g->Render();
		g->Event();
	}
	g->Clear();
	return 0;
}
