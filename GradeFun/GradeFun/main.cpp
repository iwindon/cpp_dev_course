#include <iostream>

using namespace std;

int main()
{
	char grade;

	cout << "Please enter a letter grade: ";
	cin >> grade;
	grade = toupper(grade);

	switch (grade)
	{
	case 'A':
		cout << "Great job!" << endl;
		break;
	case 'B':
		cout << "Good job!" << endl;
		break;
	case 'C':
		cout << "You can do better!" << endl;
		break;
	case 'D':
		cout << "You are getting close to failing" << endl;
		break;
	case 'F':
		cout << "You are failing the course." << endl;
		break;
	default:
		cout << "You have entered a invalid grade.  Try again." << endl;

	} // end switch statement

	return 0;
}