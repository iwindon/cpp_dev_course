#include <iostream>

using namespace std;

int main()
{
	//int count = 0;

	//while (count < 10) {
	//	cout << count << endl;
	//	count++;
	//}
	//cout << endl << endl;
	//int count2 = 0;

	// do while loop
	// 
	//do
	//{
	//	cout << count2 << endl;
	//	count2++;
	//} while (count2 < 10);

	// for loop

	//cout << endl << endl;

	//for (int i = 0; i < 10; i++)
	//{
	//	cout << i << endl;
	//}

	// priming read
	int input;
	cout << "Please enter an non-negative integer, and negative if you want to quit: ";
	cin >> input;
	while (input >= 0)
	{
		cout << input << endl;
		cout << "Please enter an non-negative integer, and negative if you want to quit: ";
		cin >> input;

	}

	return 0;
}