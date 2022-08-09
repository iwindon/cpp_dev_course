#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	vector<string> namesVec(5);

	namesVec[0] = "Bob";
	namesVec[1] = "Tom";
	namesVec[2] = "Justin";
	namesVec[3] = "Chris";
	namesVec[4] = "Peter";

	namesVec.insert(namesVec.begin() + 2, "John Baugh");
	namesVec.pop_back();

	for (string names : namesVec)
	{
		cout << names << endl;
	}

	return 0;

}