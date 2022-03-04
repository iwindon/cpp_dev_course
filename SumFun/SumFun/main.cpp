#include <iostream>

using namespace std;

int main()
{
	int input;
	int sum = 0;
	cout << "Please enter a positive integrer, or a negative number to quit: ";
	cin >> input;
	while (input >= 0)
	{
		sum += input;
		cout << "The sum of your inputs is: " << sum << endl;
		cout << "Please enter a positive integrer, or a negative number to quit: ";
		cin >> input;
	}

	cout << "Your final sum came to: " << sum << endl;

	return 0;
}