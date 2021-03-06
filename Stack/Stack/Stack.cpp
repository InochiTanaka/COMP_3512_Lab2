// Stack.cpp : Defines the entry point for the console application.
//

#include "Stack.hpp"

int arraySize = 10;
int curTop = -1;
int stackArray[10];

void push(int inputNum)
{
	if (!full()) 
	{
		stackArray[curTop + 1] = inputNum;
		curTop += 1;
	}
}

void pop()
{
	if (curTop != -1)
	{
		curTop -= 1;
	}
}

int top()
{
	if (curTop != -1)
	{
		return stackArray[curTop];
	}
}

bool empty()
{
	if (curTop == -1)
		return true;
	return false;
};

bool full()
{
	if (curTop + 1 == maxSize)
		return true;
	return false;
}

void print()
{
	int i = 0;
	while (i <= curTop)
	{
		cout << stackArray[i] << " ";
		i++;
	}
	cout << endl;
}


	int main()
	{

		stackTest();

		return 0;
	}
