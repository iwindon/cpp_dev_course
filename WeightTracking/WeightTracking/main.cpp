#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	const int NUM_PEOPLE = 5;
	string name;
	int weight;
	vector<int> vecWeight;
	vector<string> vecName;

	for (int i = 0; i < NUM_PEOPLE; i++)
	{
		cout << "Enter the persons name: ";
		getline (cin, name);
		vecName.push_back(name);
		cout << "Enter " << name << "'s weight: ";
		cin >> weight;
		vecWeight.push_back(weight);
		cin.get();
	}

	cout << endl << endl;

	for (int i = 0; i < vecName.size(); i++)
	{
		cout << vecName[i] << " weights " << vecWeight[i] << " lbs." << endl;
	}
	
	return 0;
}
