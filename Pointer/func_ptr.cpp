#include <iostream>
#include <vector>

using namespace std;

int getNumber();
int Add(int a, int b);
bool ascendingCompare(int a, int b);
bool descendingCompare(int a, int b);
void sortAscending(vector<int>& numbersVector);
void sortDescending(vector<int>& numbersVector);
void customSort(vector<int>& numbersVector, bool(*compareFunctionPtr)(int, int));
void printNumbers(vector<int>& numbersVector);

int main()
{
    // int(*funcPtr)() = getNumber;
    // cout << funcPtr() << endl;

    /* int(*funcPtr)(int, int) = Add;
    cout << funcPtr(5,6) << endl; */

    vector<int>myNum = {2,1,9,5,6};
    // sortAscending(myNum);
    bool(*funcPtr)(int, int) = ascendingCompare;
    customSort(myNum, funcPtr);
    printNumbers(myNum);
    return 0;
}

int getNumber()
{
    return 5;
}

int Add(int a, int b)
{
    return a+b;
}

bool ascendingCompare(int a, int b) {
	return a < b;
}
bool descendingCompare(int a, int b) {
	return a > b;
}

void sortAscending(vector<int>& numbersVector)
{
	for (int startIndex = 0; startIndex < numbersVector.size(); startIndex++)
	{
		int bestIndex = startIndex;

		for (int currentIndex = startIndex + 1; currentIndex < numbersVector.size(); currentIndex++)
		{
			// We are doing comparison here
			if (ascendingCompare(numbersVector[currentIndex], numbersVector[bestIndex]))
				bestIndex = currentIndex;
		}

		swap(numbersVector[startIndex], numbersVector[bestIndex]);
	}
}

void sortDescending(vector<int>& numbersVector)
{
	for (int startIndex = 0; startIndex < numbersVector.size(); startIndex++)
	{
		int bestIndex = startIndex;

		for (int currentIndex = startIndex + 1; currentIndex < numbersVector.size(); currentIndex++)
		{
			// We are doing comparison here
			if (descendingCompare(numbersVector[currentIndex], numbersVector[bestIndex]))
				bestIndex = currentIndex;
		}

		swap(numbersVector[startIndex], numbersVector[bestIndex]);
	}
}

void customSort(vector<int>& numbersVector, bool(*compareFunctionPtr)(int, int))
{
	for (int startIndex = 0; startIndex < numbersVector.size(); startIndex++)
	{
		int bestIndex = startIndex;

		for (int currentIndex = startIndex + 1; currentIndex < numbersVector.size(); currentIndex++)
		{
			// We are doing comparison here
			if (compareFunctionPtr(numbersVector[currentIndex], numbersVector[bestIndex]))
				bestIndex = currentIndex;
		}

		swap(numbersVector[startIndex], numbersVector[bestIndex]);
	}
}

void printNumbers(vector<int>& numbersVector) 
{
	for (int i = 0; i < numbersVector.size(); ++i)
		cout << numbersVector[i] << ' ';

    cout << endl;
}