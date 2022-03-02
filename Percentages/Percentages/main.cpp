#include <iostream>
#include <string>

using namespace std;

int main()
{
	string fullName;
	string location;
	int initialScore;

	cout << "Please enter your full name: ";
	getline(cin, fullName);
	cout << "Please enter your City, State/Province, and Country: ";
	getline(cin, location);
	cout << "Enter a integer 0 to 100: ";
	cin >> initialScore;
	cout << "\n\n\nHello, " << fullName << ".  We heard you are from " << location << ".\n";
	cout << "Your original score is " << initialScore << ", but with five points added,\n";
	cout << "your score is " << (initialScore += 5);
	return 0;
}