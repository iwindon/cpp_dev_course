#include <iostream>
using namespace std;

void modifyGlobal();

int counter = 0;

int main()
{
	cout << "Value of counter before loop: " << counter << endl;
	for (int i = 0; i < 100; i++)
	{
		modifyGlobal();
	}
	cout << "value of counter after loop: " << counter << endl;
	return 0;
}

void modifyGlobal()
{
	counter++;
}