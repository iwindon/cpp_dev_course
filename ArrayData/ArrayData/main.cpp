#include <iostream>
#include <array>
using namespace std;

int main()
{
	const int arraysize = 5;
	int arraynum;
	array <int, arraysize> myArray;
	for (int i = 0; i < arraysize; i++)
	{
		cout << "Enter a number: ";
		cin >> arraynum;
		myArray[i] = arraynum;
	}

	cout << "Your array results multiplied by 2" << endl;
	for (int enumeration : myArray)
	{
		cout << enumeration * 2 << endl;
	}
	return 0;
}