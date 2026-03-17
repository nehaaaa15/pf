#include <iostream>
using namespace std;

int main() {
    int pin, correctPin = 1234;
    bool isLogin = false;

    double balance = 1000.0;

    for (int i = 1; i <= 3; i++) {
        cout << "Attempt " << i << " - Enter ATM PIN: ";
        cin >> pin;

        if (pin == correctPin) {
            cout << "Login Successful\n";
            isLogin = true;
            break;
        } else {
            cout << "Wrong PIN\n";
        }
    }

    if (!isLogin) {
        cout << "Card Blocked. Try again later.\n";
        return 0;
    }

    int choice;
    double amount;

    do {
        cout << "\n--- ATM MENU ---\n";
        cout << "1 → Check Balance\n";
        cout << "2 → Deposit Money\n";
        cout << "3 → Withdraw Money\n";
        cout << "4 → Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Current Balance: " << balance << endl;

        } else if (choice == 2) {
            cout << "Enter amount to deposit: ";
            cin >> amount;

            if (amount <= 0 || amount > 100000) {
                cout << "Invalid amount\n";
            } else {
                balance += amount;
                cout << "Deposit Successful\n";
            }

        } else if (choice == 3) {
            cout << "Enter amount to withdraw: ";
            cin >> amount;

            if (amount > 0 && amount <= balance) {
                balance -= amount;
                cout << "Withdrawal Successful\n";
            } else {
                cout << "Insufficient Balance\n";
            }

        } else if (choice == 4) {
            cout << "Thank you for using ATM\n";

        } else {
            cout << "Invalid option\n";
        }

    } while (choice != 4);

    return 0;
}               