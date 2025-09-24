#include <iostream>
#include <vector>
using namespace std;

struct Item {
    int id;
    string name;
};

int main() {
    vector<Item> inventory;
    int choice;

    do {
        cout << "\nInventory Menu:\n";
        cout << "1. Add Item\n2. Display Items\n3. Search Item\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            Item item;
            cout << "Enter item ID: ";
            cin >> item.id;
            cout << "Enter item Name: ";
            cin.ignore();
            getline(cin, item.name);
            inventory.push_back(item);
        } 
        else if (choice == 2) {
            cout << "\nInventory List:\n";
            for (auto &item : inventory)
                cout << "ID: " << item.id << " | Name: " << item.name << endl;
        } 
        else if (choice == 3) {
            int id;
            cout << "Enter ID to search: ";
            cin >> id;
            bool found = false;
            for (auto &item : inventory) {
                if (item.id == id) {
                    cout << "Item found -> ID: " << item.id << ", Name: " << item.name << endl;
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Item not found." << endl;
        }
    } while (choice != 4);

    return 0;
}
