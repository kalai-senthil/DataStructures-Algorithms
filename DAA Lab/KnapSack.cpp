#include "Definitions.h"
void KnapSack::run() {
	float w[10],p[10],r[10],prof = 0.0;
	int n,i=0,j=0;
	int c;
	std::cin >> n >> c;
	std::cout << "Weight & Profit :";
	while (i < n)
	{
		std::cin >> p[i] >> w[i];
		r[i] = p[i] / w[i];
		i++;
	}
	float t;
	for ( i = 0; i < n; i++)
	{
		for ( j = i+1; j < n; j++)
		{
			if (r[i] < r[j]) {
				t = r[j];
				r[j] = r[i];
				r[i] = t;
				t = w[i];
				w[i] = w[j];
				w[j] = t;
				t = p[i];
				p[i] = p[j];
				p[i] = t;
			}
		}
	}
	for ( i = 0; i < n; i++)
	{
		std::cout << w[i] <<" " <<p[i]<<" " << r[i] << "\n";
	}
	for ( i = 0; i < n; i++)
	{
		if (w[i] <= c) {
			prof += p[i];
		}
		else if (c>=0) {
			p[i] = (float)c / w[i] * p[i];
			prof += p[i];
		}
		else {
			break;
		}
		c -=(int) w[i];
	}
	
	printf("%.3f",prof);


}