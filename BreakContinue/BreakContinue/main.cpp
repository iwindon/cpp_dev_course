#include <iostream>
using namespace std;

int main()
{
	int count = 0;

	/*while (count < 10)
	{
		if (count == 5) {
			count++;
			continue;
		}
		cout << count << endl;
		count++;
	}*/

	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			//continue;
			break;
		}
		cout << i << endl;
	}

	return 0;
}