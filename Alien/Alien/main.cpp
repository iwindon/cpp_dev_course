#include <iostream>
#include <string>
using namespace std;

int main()
{
    string choice1;
    string choice2;
    int choice3;

 
    cout << "Welcome to Alien Escape\n";
    cout << "Your mission is to escape the space station.\n";
    cout << "You wake up to find yourself on a dark space station that has been boarded by a hostile alien.\n";
    cout << "The alarm klaxons are ringing through the ship, with an automated message repeating...\n";
    cout << "ALERT, ALERT: Abandon ship, intruder alert!\n";
    cout << "You need to find your way to the escape pod as fast as possible!\n";
    cout << "\n\n";
    cout << "You head down the hallway and come to a junction, do you turn left or right. (left / right): ";
    cin >> choice1;
    if (choice1 == "left")
    {
        cout << "You walk down the cold dark hallway until you reach the elevator bay. \nDo you take the stairs or wait for the elevator? (stairs / wait):";
        cin >> choice2;
        if (choice2 == "stairs")
        {
            cout << "You run up 30 flights of stairs, the adrenealine pumping in your system, knowing you are getting closer to escaping.\n";
            cout << "You arive at the escape pod deck and are confronted with 3 escape doors, which pod do you want(1 / 2 / 3) : ";
            cin >> choice3;
            if (choice3 == 1)
            {
                cout << "You jump into POD 1, press the emergency launch button.\n";
                cout << "The POD bay doors close, and you are launched safely into space.\n";
                cout << "Congratulations on making it off the space station alive.\n";
            }
            else if(choice3 == 2)
            {
                cout << "You jump into POD 2, press the emergency launch button, yet nothing happens!\n";
                cout << "You frantically press the button over and over when you hear the alien come up behind you.\n";
                cout << "Game Over.\n";

            }
            else
            {
                cout << "You jump into POD 3, press the emergency launch button.\n";
                cout << "The launch system has a catastrophic malfunction and your POD is destroyed in a ball of plasma.\n";
                cout << "Game Over.\n";
            }
        }
        else
        {
            cout << "While waiting for the slow elevator, the alien catches up to youand kills you.\n";
            cout << "Game Over.\n";
        }
    }
        
    else
    {
        cout << "You walk a short way down the hall when the Alien jumps out and kills you.";
        cout << "Game Over";
    }
    
	return 0;
}

