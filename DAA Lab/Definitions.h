#pragma once
#include <iostream>
class Runnable {
public:
	virtual void run() = 0;
	void print(int arr[],int n) {
		int i = 0;
		while (i<20)
		{
			std::cout << "--";
			i++;
		}
		i = 0;
		std::cout << "\n";
		while (i<n)
		{
			std::cout << arr[i++]<<" ";
		}
		i = 0;
		std::cout << "\n";
		while (i < 20)
		{
			std::cout << "--";
			i++;
		}

	}
};
class BinarySearch : public Runnable{
	public:
	void run();
};
class MergeSort:public Runnable {
public:
	void run();
};
class QuickSort :public Runnable {
public:
	void run();
};