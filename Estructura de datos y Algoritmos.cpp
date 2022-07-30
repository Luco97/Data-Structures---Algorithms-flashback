#include <iostream>
#include <vector>

//Headers
#include "merge-sort.h"

int main()
{
	//std::vector<int> test = { 1 , 4 , 2 , 5 , 10 , 2 };
	std::vector<int> test = { 3, 5, 6, 1, 2, 10, 9, 7, 4 };
	for (int i : test)
	{
		std::cout << i << ", ";
	}
	std::cout << "\n";
	MergeSort(test, 0, test.size() - 1);
	for (int i : test)
	{
		std::cout << i << ", ";
	}
	return 1;
}
