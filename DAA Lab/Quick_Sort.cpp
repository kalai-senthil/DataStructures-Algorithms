#include "Definitions.h"
int arr[200];
int partition(int l, int h) {
	int pi = arr[l];
	int i = l;
	int m = l;
	int j = h;
	do
	{
		do
		{
			i++;
		} while (arr[i]<pi);
		do
		{
			j--;
		} while (arr[j]>pi);
		if(i < j) {
		int t = arr[i];
		arr[i] = arr[j];
		arr[j] = t;
		}
	} while (i <= j);
	arr[m] = arr[j];
	arr[j] = pi;
	return j;
}
void sort(int l, int h) {
	if (l < h) {
		int j = partition(l,h + 1);
		sort(l, j - 1);
		sort(j + 1, h);
	}
}
void QuickSort ::run(){
	int i, n;
	std::cin >> n;
	i = 0;
	while (i < n)
	{
		std::cin >> arr[i++];
	}
	sort(0, n);
	print(arr, n+1);
};