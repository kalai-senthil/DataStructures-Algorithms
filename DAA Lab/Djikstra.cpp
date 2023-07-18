#include "Definitions.h"
void djikstra(int n, int v, int g[50][50], int dist[]) {
	int flag[10];
	memset(flag, 0, sizeof(flag));
	for (int i = 0; i < n; i++)
	{
		dist[i] = g[v][i];
	}
	int c = 2;
	int u;
	while (c<n)
	{
		int min = INT_MAX;
		for (int w = 0; w < n; w++)
		{
			if (min > dist[w] && flag[w] == 0) {
				u = w;
				min = dist[w];
			}
		}
		c++;
		flag[u] = 1;
		for (int w = 0; w < n; w++)
		{
			if (dist[u] + g[u][w] < dist[w] && flag[w] !=0)
			{
				dist[w] = dist[u] + g[u][w];
			}
		}
		}
}
void Djikstra :: run() {
	int g[50][50],dist[50];
	int v,n,i,j;
	std::cin >> n;
	for ( i = 0; i < n; i++)
	{
		for ( j = 0; j < n; j++)
		{
			std::cin >> g[i][j];
			if (g[i][j] == 0) {
				g[i][j] = INT_MAX;
			}
		}
	}
	std::cout << "Sputse: ";
	std::cin >> v;
	djikstra(n, v, g,dist);
	for (i = 0; i < n; i++)
	{
		if(i != v)
		std::cout << v<<" " << i<<" " << dist[i]
			<< " ";
	}
}