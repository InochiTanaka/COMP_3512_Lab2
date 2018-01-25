#pragma once

#include <iostream>
using namespace std;

void stackTest();
void testing(int inputArray[], int numInput);
void checkState();
void cleanStack();

void push(int inputNum);
void pop();
int top();
bool empty();
bool full();
void print();

constexpr int maxSize = 10;

class stack {
	

};