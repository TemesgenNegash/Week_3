// Assignment_9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class Item {
public:
    string name;
    int quantity;

    void display() {
        cout << "Item: " << name << ", Quantity: " << quantity << endl;
    }
};

void searchItem(Item inventory[], int size, string searchName) {
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (inventory[i].name == searchName) {
            cout << "Found: " << inventory[i].name << " - Quantity: " << inventory[i].quantity << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Error, item not found in inventory." << endl;
    }
}

int main() {
    const int SIZE = 5;
    Item inventory[SIZE];

    // Input items
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter name for item " << (i + 1) << ": ";
        cin >> inventory[i].name;
        cout << "Enter quantity for " << inventory[i].name << ": ";
        cin >> inventory[i].quantity;
    }

    // Display items
    cout << "\nInventory List:\n";
    for (int i = 0; i < SIZE; i++) {
        inventory[i].display();
    }

    // Search for an item
    string searchName;
    cout << "\nEnter item name to search: ";
    cin >> searchName;
    searchItem(inventory, SIZE, searchName);

    return 0;
}
/*Enter name for item 1: Coffee
Enter quantity for Coffee: 2
Enter name for item 2: Tea
Enter quantity for Tea: 3
Enter name for item 3: Juice
Enter quantity for Juice: 4
Enter name for item 4: Soda
Enter quantity for Soda: 5
Enter name for item 5: Milk
Enter quantity for Milk: 1

Inventory List:
Item: Coffee, Quantity: 2
Item: Tea, Quantity: 3
Item: Juice, Quantity: 4
Item: Soda, Quantity: 5
Item: Milk, Quantity: 1

Enter item name to search: Milk
Found: Milk - Quantity: 1

C:\CIS-25\Assignment_9\Assignment_9\x64\Debug\Assignment_9.exe (process 6252) exited with code 0 (0x0).
Press any key to close this window . . .*/

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
