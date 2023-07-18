#include "Definitions.h"
#include <limits>
constexpr auto V = 5;

void Prim::run() {
	int G[V][V] = {
	  {0, 9, 75, 0, 0},
	  {9, 0, 95, 19, 42},
	  {75, 95, 0, 51, 66},
	  {0, 19, 51, 0, 31},
	  {0, 42, 66, 31, 0}
	};
	int x, y,i,j;
	int selected[V];
	memset(selected, false, sizeof(selected));
	selected[0] = 1;
	int verticesinSpann = 1;
	std::cout << "Edge"
		<< " : "
		<< "Weight";
	std::cout << "\n";
	while (verticesinSpann < V)
	{
		int min = INT_MAX;
		x = y = 0;
		for ( i = 0; i < V; i++)
		{
			if (selected[i]) {
				for ( j = 0; j < V; j++)
				{
					if (selected[j] == 0 && G[i][j]) {
						if (min > G[i][j]) {
							min = G[i][j];
							x = i;
							y = j;
						}
					}
				}
			}
		}
		std::cout << x << " - " << y << " :  " << G[x][y] << "\n";
		selected[y] = 1;
		verticesinSpann++;
	}
}