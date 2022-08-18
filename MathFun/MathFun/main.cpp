#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int powResults = pow(2, 3);
	int sqrtResults = sqrt(25);
	int ceilReults = ceil(4.2);
	int floorResult = floor(4.2);
	int logResult = log2(512);

	cout << "2^3 is " << powResults << endl;
	cout << "The square root of 25 is: " << sqrtResults << endl;
	cout << "4.2 rounded up is " << ceilReults << endl;
	cout << "4.2 rounded down is " << floorResult << endl;
	cout << "Log2 of 512 is " << logResult << endl;

	return 0;

}