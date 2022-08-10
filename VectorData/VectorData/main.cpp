#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int myNumber;
	vector<int> intVector;

	cout << "Enter a positve number, or a negative number to quit: ";
	cin >> myNumber;

	while (myNumber >= 0)
	{
		intVector.push_back(myNumber);
		cout << "Enter another number, or a negative number to quit: ";
		cin >> myNumber;
	}

	cout << "Here are your results: " << endl;

	for (int num : intVector)
	{
		cout << num * 2 << endl;
	}

	return 0;
}