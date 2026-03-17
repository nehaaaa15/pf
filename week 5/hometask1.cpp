#include <iostream>
using namespace std;

int main() {
    int number;
    int sum = 0;

    while (true) {
        cout << "Enter a number (negative to stop): ";
        cin >> number;

        if (number < 0) {
            break;
        }

        sum += number;
    }

    cout << "Total sum = " << sum << endl;

    return 0;
}