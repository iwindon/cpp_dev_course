#include <iostream>
#include <cmath>
using namespace std;

int factorial(int num);

int main()
{
	int results = factorial(5);
	cout << "The answer is: " << results << endl;
	return 0;
}

int factorial(int num)
{
	if (num > 1)
	{
		return num * factorial(num - 1);
	}
	return 1;
}