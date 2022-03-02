#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Madlib variables
	string adj1;
	string adj2;
	string adj3;
	string girlsName;
	string occupation1;
	string placeName;
	string clothing;
	string hobby;
	string occupation2;
	string boysName;
	string mansName;

	// Prompting for Madlib results

	cout << "Enter an adjective: ";
	getline(cin, adj1);
	cout << "Enter a girls name: ";
	getline(cin, girlsName);
	cout << "Enter another adjective: ";
	getline(cin, adj2);
	cout << "Enter an occupation: ";
	getline(cin, occupation1);
	cout << "Enter a place: ";
	getline(cin, placeName);
	cout << "Enter a piece of clothing in plural form: ";
	getline(cin, clothing);
	cout << "Enter a hobby: ";
	getline(cin, hobby);
	cout << "Enter another adjective: ";
	getline(cin, adj3);
	cout << "Enter another occupation: ";
	getline(cin, occupation2);
	cout << "Enter a boys name: ";
	getline(cin, boysName);
	cout << "Enter a man's name: ";
	getline(cin, mansName);



	// Madlib output
	cout << "There once was a " << adj1 << " girl named " << girlsName << " who was a " << adj2 << " " << occupation1 << "\n";
	cout << "in the Kingdom of " << placeName << ".  She loved to wear " << clothing << " and " << hobby << ".\n";
	cout << "She wanted to marry the " << adj3 << " " << occupation2 << " named " << boysName << " but her father, King\n";
	cout << mansName << " forbid her from seeing him.\n";
	return 0;
}