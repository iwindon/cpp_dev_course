#include <iostream>
using namespace std;

int multiply(int num1, int num2, int num3);

int main()
{
	int result = multiply(5, 10, 2);
	cout << "The result is: " << result << endl;

	return 0;
}

int multiply(int num1, int num2, int num3)
{
	return num1 * num2 * num3;
}