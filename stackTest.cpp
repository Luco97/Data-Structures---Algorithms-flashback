#include "stackTest.h"

void stackTest() {
	std::stack<int> asd;
	asd.push(4);
	asd.push(2);
	asd.push(3);
	asd.push(11);
	asd.push(2);
	asd.push(5);
	asd.push(6);
	asd.push(9);
	asd.push(1);
	asd.push(8);
	asd.push(4);
	stackSortWhitoutVector(asd);
	while (!asd.empty())
	{
		std::cout << asd.top() << ", ";
		asd.pop();
	}
}
