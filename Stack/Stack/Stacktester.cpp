#include "Stack.hpp"

void stackTest()
{

	cout << "Test 1: Store data { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }" << endl;
	int inputArray1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int numInput = sizeof(inputArray1) / sizeof(int);
	testing(inputArray1, numInput);
	
	cout << "Test 2: Store data { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 }" << endl;
	int inputArray2[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 };
	numInput = sizeof(inputArray2) / sizeof(int);
	testing(inputArray2, numInput);

	cout << "Test 3: Store data { 1 }" << endl;
	int inputArray3[] = {1};
	numInput = sizeof(inputArray3) / sizeof(int);
	testing(inputArray3, numInput);
}

void testing(int inputArray[], int numInput)
{
	cout << endl;
	cout << "*********** Start test program ***********" << endl;
	cout << endl;

	cout << "Push content : " << endl;
	int i = 0;
	while (i < numInput && !full())
	{
		push(inputArray[i]);
		cout << i+1 << " : ";
		print();
		i++;
	}

	if (i < numInput && full())
	{
		cout << endl;
		cout << "The Stack had been overflow" << endl;
		cout << endl;
		cout << "**************** Test End ****************" << endl;
		cout << endl;
		cleanStack();
		return;
	}

	if (i < numInput && empty())
	{
		cout << endl;
		cout << "The Stack is nothing" << endl;
		cout << endl;
		cout << "**************** Test End ****************" << endl;
		cout << endl;
		cleanStack();
		return;
	}
	cout << endl;
	cout << endl;

	checkState();

	cout << "Pop 1 content : ";
	pop();
	print();
	cout << endl;
	cout << endl;

	checkState();

	if (!empty())
	{
		cout << "Current Top : ";
		cout << top() << endl;
	}
	else
	{
		cout << "Current Top is not exist "<< endl;
	}
	cout << endl;
	cout <<"**************** Test End ****************"<< endl;
	cout << endl;
	cleanStack();
}

void checkState()
{
	cout << "Current state :";
	if (full())
	{
		cout << "The Stack is Full" << endl;
	}
	else if (empty())
	{
		cout << "The Stack is Empty" << endl;
	}
	else
	{
		cout << "The Stack has space" << endl;
	}
	cout << endl;
	cout << endl;
}

void cleanStack()
{
	for (int i = 0; i < 10; i++)
	{
		pop();
	}
}