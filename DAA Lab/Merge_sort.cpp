#include "Definitions.h"
void merge(int arr[],int l,int m,int h) {
	int n1 = (m - l + 1);
	int n2 = (h - m);
	int left[200], right[200];
	int i,j,k;
	i = k = j = 0;
	for ( i = 0; i < n1; i++)
	{
		left[i] = arr[l + i];
	}
	for ( j = 0; j < n2; j++)
	{
		right[j] = arr[m + 1 + j];
	}
	i = j = 0;
	k = l;
	while (i < n1 && j < n2)
	{
		if (left[i] >= right[j]) {
			arr[k] = right[j];
			j++;
		}
		else {
			arr[k] = left[i];
			i++;
		}
		k++;
	}
	for (; i < n1; i++)
	{
		arr[k] = left[i];
		k++;
	}
	for (; j < n2; j++)
	{
		arr[k] = right[j];
		k++;
	}

}
void mergeSort(int arr[],int l,int h) {
	if (l < h) {
		int mid = (l + h) / 2;
		mergeSort(arr,l,mid);
		mergeSort(arr,mid + 1, h);
		merge(arr,l, mid, h);
	}
}
void MergeSort::run() {
	int n,i=0;
	int arr[200];
	std::cin >> n;
	while (i < n) std::cin >> arr[i++];
	print(arr, n);
	mergeSort(arr,0, n - 1);
	print(arr, n);
}