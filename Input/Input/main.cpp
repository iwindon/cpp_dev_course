#include <iostream>
#include <string>
using namespace std;

int main()
{

	int age;
	string fullName;
	cout << "What is your name: ";
	getline(cin, fullName);

	cout << "Enter your age: ";
	cin >> age;
	cout << "Your name is: " << fullName << endl;
	cout << "Your age is: " << age << endl;

	cout << fullName << " is " << age << " years old.";
	return 0;
}