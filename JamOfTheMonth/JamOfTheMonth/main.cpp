/* 
	Jam of the month project
	The Complete C++ Developer Course
	Author: Ivan Windon
	Date: 03/04/2022
*/

#include <iostream>

using namespace std;

int main()
{
	char packageLevel;
	int packageA = 8;
	int packageB = 12;
	int packageC = 15;
	int jamA = 2;
	int jamB = 4;
	int jamC = 6;
	int extraA = 5;
	int extraB = 4;
	int extraC = 3;
	int totalJam = 0;
	int sum = 0;



	// Ask user for which package they are subscribed to

	cout << "               Jam of the Month Club\n";
	cout << "____________________________________________________\n\n";
	cout << "* Package A: $8.00 / month - Includes 2 jams per month\n";
	cout << "  Each additinal jam on top of the 2 is $5.00 each\n\n";
	cout << "* Package B: $12.00 / month - Includes 4 jams per month\n";
	cout << "  Each additinal jam on top of the 4 is $4.00 each\n\n";
	cout << "* Package C: $15.00 / month - Includes 6 jams per month\n";
	cout << "  Each additinal jam on top of the 6 is $3.00 each\n\n";

	
	cout << "What is your package level (A, B, C): ";
	cin >> packageLevel;
	packageLevel = toupper(packageLevel);
	cout << "How many jam's did you purchase this month: ";
	cin >> totalJam;

	if (packageLevel == 'A') // 8 dollars a month with 2 jams, 5 dollars extra for additional
	{
		sum = packageA;
		if (totalJam <= jamA)
		{
			cout << "Your cost for this month will be: $" << sum << endl;
		}
		else {
			sum = sum + extraA * (totalJam - jamA);
			cout << "Your cost for this month will be: $" << sum << endl;
		}
		
	}
	else if (packageLevel == 'B')  // 12 dollars a month with 4 jams, 4 dollars extra for additional
	{
		sum = packageB;
		if (totalJam <= jamB)
		{
			cout << "Your cost for this month will be: $" << sum << endl;
		}
		else {
			sum = sum + extraB * (totalJam - jamB);
			cout << "Your cost for this month will be: $" << sum << endl;
		}
	}
	else if (packageLevel == 'C') // 15 dollars a month with 6 jams, 3 dollars extra for additional
	{
		sum = packageC;
		if (totalJam <= jamC)
		{
			cout << "Your cost for this month will be: $" << sum << endl;
		}
		else {
			sum = sum + extraC * (totalJam - jamC);
			cout << "Your cost for this month will be: $" << sum << endl;
		}
	}
	else cout << "Please enter a valid response.";

	return 0;
}