#include <iostream>
#include <array>
using namespace std;

int sumArray(array<int, 10> myArray);
void refArray(array<int, 10> myArray2, int& input);



int main()
{
	array<int, 10> myArray{ 1,2,3,4,5,6,7,8,9,10 };
	int resultByRef;
	refArray(myArray, resultByRef);
	int total = sumArray(myArray);

	cout << "The sum is: " << total << endl;
	cout << "The sum by ref is: " << resultByRef << endl;
	return 0;
}

int sumArray(array<int, 10> myArray)
{
	int sum = 0;
	for (int item : myArray)
	{
		sum += item;
	}


	return sum;
}

void refArray(array<int, 10> myArray2, int& input)
{
	
	input = sumArray(myArray2);
	//input = 0;
	//for (int item : myArray2)
	//{
	//	input += item;
	//}
}