#include <iostream>
using namespace std;

int sumArray(int myArray[], int sizeArray);



int main()
{
	
	int myArray[]{ 5, 15, 25, 50, 30 };
	int sum = sumArray(myArray, 5);
	cout << "The sum is: " << sum << endl;
	return 0;
}

int sumArray(int myArray[], int sizeArray)
{
	int result = 0;
	for (int i = 0; i < sizeArray; i++)
	{
		result = result + myArray[i];

	}
	return result;
}