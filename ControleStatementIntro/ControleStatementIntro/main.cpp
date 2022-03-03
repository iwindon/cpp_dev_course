#include <iostream>

/*

Sequential
Selection
Repetition

*/

using namespace std;

int main()
{
	// sequential 
	int age = 15;
	cout << age << endl;

	// conditional
	if (age >= 16)
	{
		cout << "You can drive!" << endl;
	}
	else
	{
		cout << "You can not drive yet!" << endl;
	}

	//for loop

	for(int i = 1; i <= age; i++)
	{
		cout << "You are now " << i << " years old." << endl;
	}
	return 0;
}