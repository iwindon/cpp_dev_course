/*
	The Complete C++ Development Course
	Lecture Title: Boolean Fun
	Author: Ivan Windon
*/

#include <iostream>

using namespace std;

int main()
{
	bool isRaining = true;
	if (isRaining == false)
		cout << "It is not raining\n";
	else cout << "It is raining, get your umbrella!\n";

	cout << boolalpha << isRaining << endl;

	return 0;

}