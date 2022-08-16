#include <iostream>
using namespace std;

void valueChanged1(int someNum);
void valueChanged2(int& someNum);
void threeTimesN(int num1, int& num2);

int main()
{
	int myNumber = 20;
	int myNumber2;

	cout << "Before valueChanged1 call, myNumber is " << myNumber << endl;
	valueChanged1(myNumber);
	cout << "After valueChanged1 call, myNumber is " << myNumber << endl;
	cout << endl << endl;

	cout << "myNumber is currently: " << myNumber << endl;
	valueChanged2(myNumber);
	cout << "After valueChanged2 call, nyNumber is " << myNumber << endl;

	cout << "Enter a number: ";
	cin >> myNumber;
	threeTimesN(myNumber, myNumber2);
	cout << "The answer of " << myNumber << " * 3 is: " << myNumber2 << endl;


	return 0;
}

void valueChanged1(int someNum)
{
	someNum = 100;
	cout << "Inside valueChagned1 function, someNum is " << someNum << endl;
}

void valueChanged2(int& someNum)
{
	someNum = 100;
	cout << "Inside valueChanged2 function, someNum is " << someNum << endl;
}

void threeTimesN(int num1, int& num2)
{
	num2 = num1 * 3;
}