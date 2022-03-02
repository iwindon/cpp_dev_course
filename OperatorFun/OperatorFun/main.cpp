
/*
	Arithmetic operators in C++
	+	addition operator
	-	substraction operator
	*	multiplication operator
	/	division operator
	%	modulus operator

*/

#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;
	int sum;

	a = 5;
	b = 3;
	sum = a + b;
	int difference = a - b;
	double product = a * b;
	double quotent = a / b;
	int remainder = a % b;
	int result = 10;
	int myInt = 5;

	result += 10;

	cout << a << " + " << b << " = " << sum << endl;
	cout << a << " - " << b << " = " << difference << endl;
	cout << a << " * " << b << " = " << product << endl;
	cout << a << " / " << b << " = " << quotent << endl;
	cout << a << " % " << b << " = " << remainder << endl;
	cout << result << endl;

	cout << myInt << endl;
	myInt++; //++myInt;	myInt += 1;    myInt = myInt + 1;
	cout << myInt << endl;
	myInt--;
	cout << myInt << endl;


	return 0;
}

