#include <iostream>
using namespace std;

int main() {
    int choice;

    while (true) {  
        cout << "\n--- Menu ---\n";
        cout << "1. Say Hello\n";
        cout << "2. Say Goodbye\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Hello! Welcome to the program." << endl;
        } 
        else if (choice == 2) {
            cout << "Goodbye! Have a nice day." << endl;
        } 
        else if (choice == 3) {
            cout << "Exiting the program..." << endl;
            break;  }
        else {
            cout << "Invalid choice! Please enter 1, 2, or 3." << endl;
        }
    }

    return 0;
}