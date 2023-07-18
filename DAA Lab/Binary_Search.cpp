#include <iostream>
#include "Definitions.h"
void BinarySearch::run() {
		int arr[100], l, n, h, mid, se;
		std::cin >> n;
		int i = 0;
		h = n - 1;
		while (i < n)
		{
			std::cin >> arr[i];
			i++;
		}
		std::cout << "Ee?";
		std::cin >> se;
		l = 0;
		while (l <= h)
		{
			mid = (l + h) / 2;
			if (arr[mid] == se) {
				std::cout << "Founrf :" << mid;
				return;
			}
			else if (arr[mid] > se) {
				h = mid - 1;
			}
			else {
				l = mid + 1;
			}

		}
		std::cout << -1;
}