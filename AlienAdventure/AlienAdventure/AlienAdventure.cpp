#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    //Introduction to the game
    cout << "Welcome to Alien Explorer Adventure!" << endl;
    cout << "You and your team of alien explorers have crash landed on a hostile planet." << endl;
    cout << "Your mission is to navigate the dangerous environments and creatures to repair your ship and escape." << endl;

    //Initialize variables for health, inventory, and location
    int health = 100;
    string inventory[3] = { "empty", "empty", "empty" };
    string location = "crash site";

    //Game loop
    while (health > 0 && location != "ship")
    {
        //Display current health and location
        cout << "Health: " << health << endl;
        cout << "Location: " << location << endl;

        //Display inventory
        cout << "Inventory: " << inventory[0] << ", " << inventory[1] << ", " << inventory[2] << endl;

        //Give player options
        cout << "What would you like to do?" << endl;
        cout << "1. Move to a new location" << endl;
        cout << "2. Search for resources" << endl;
        cout << "3. Use an item in inventory" << endl;
        cout << "4. Repair ship" << endl;

        int choice;
        cin >> choice;

        if (choice == 1) //Move to a new location
        {
            cout << "Where would you like to go? (forest, desert, mountain)" << endl;
            cin >> location;

            //Randomly determine if player encounters a creature
            int encounter = rand() % 2;
            if (encounter == 1)
            {
                cout << "You have encountered a creature!" << endl;

                //Randomly determine creature strength
                int creatureStrength = rand() % 50 + 1;
                cout << "Creature strength: " << creatureStrength << endl;

                //Give player option to fight or flee
                cout << "What would you like to do? (fight, flee)" << endl;
                string action;
                cin >> action;

                if (action == "fight") //Player chooses to fight
                {
                    //Randomly determine player strength
                    int playerStrength = rand() % 50 + 1;
                    cout << "Your strength: " << playerStrength << endl;

                    if (playerStrength > creatureStrength) //Player wins
                    {
                        cout << "You have defeated the creature!" << endl;

                        //Randomly determine if player finds an item
                        int findItem = rand() % 2;
                        if (findItem == 1)
                        {
                            cout << "You have found a useful item!" << endl;

                            //Add item to first empty inventory slot
                            for (int i = 0; i < 3; i++)
                            {
                                if (inventory[i] == "empty")
                                {
                                    inventory[i] = "item";
                                    break;
                                }
                            }
                        }
                    }
                    else //Player loses
                    {
                        cout << "You have been defeated by the creature." << endl;
                        health -= health;
                    }
                }
            }
        }
    }
}
