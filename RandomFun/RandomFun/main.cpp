#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(nullptr));

	int roll = 1;

	while (roll <= 10)
	{
		int dice = rand() % 6 + 1; //val2 is >=1 and <= 6
		cout << "Role " << roll << ": " << dice << endl;
		roll++;
	}

	return 0;
}