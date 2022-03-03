// prompt user for age AND gender
// age is int, gender is character
// get of f or F and are 60 or over
// You qualify for the discount
// You do not qualify for the discount.

#include <iostream>

using namespace std;

int main()
{
	int age;
	char sex;

	cout << "Please enter your age: ";
	cin >> age;
	cout << "Please enter if you are (M)ale or (F)emale: ";
	cin >> sex;

	//sex = toupper(age); -- saw this odd typo and it caused some odd logic errors, left for laughs
	sex = toupper(sex);

	if (sex == 'F' && age >= 60)
	{
		cout << "You qualify for the store discout!" << endl;
	}
	else
	{
		cout << "Thank you for visiting our store today." << endl;
	}
		

	return 0;
}