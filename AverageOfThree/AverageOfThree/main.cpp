#include <iostream>

using namespace std;

int main()
{
	double num1 = 0;
	double num2 = 0;
	double num3 = 0;

	cout << "Enter your first number: ";
	cin >> num1;
	cout << "Enter your second number: ";
	cin >> num2;
	cout << "Enter your final number: ";
	cin >> num3;

	double averageNum = (num1 + num2 + num3) / 3;
	cout << "The average or your three numbers is: " << averageNum;

	return 0;
}