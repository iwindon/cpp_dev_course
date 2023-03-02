#include <iostream>
#include <string>
using namespace std;

class House {
public:
	void setNumStories(int numStories)
	{
		this->numStories = numStories;
	}

	void setNumWindows(int numWindows)
	{
		this->numWindows = numWindows;
	}

	void setColor(string color)
	{
		this->color = color;
	}

	int getNumStories() const
	{
		return numStories;
	}

	int getWindows() const
	{
		return numWindows;
	}

	string getColor() const
	{
		return color;
	}
private:
	int numStories;
	int numWindows;
	string color;
}; // end of the class House

int main()
{
	House myHouse;
	House yourHouse;

	myHouse.setNumStories(2);
	myHouse.setNumWindows(6);
	myHouse.setColor("red");

	yourHouse.setNumStories(3);
	yourHouse.setNumWindows(10);
	yourHouse.setColor("blue");

	cout << "My house is " << myHouse.getColor() << " and has "
		<< myHouse.getWindows() << " windows.  The house is " << myHouse.getNumStories() << " stories." << endl;

	cout << "Your house is " << yourHouse.getColor() << " and has "
		<< yourHouse.getWindows() << "  windows.  The house is " << yourHouse.getNumStories() << " stories." << endl;

	return 0;
}