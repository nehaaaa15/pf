#include <iostream>
using namespace std;

int main() {
    long long number;
    int digit, count = 0;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Enter the digit to find: ";
    cin >> digit;

    long long temp = number;

    while (temp != 0) {
        int lastDigit = temp % 10;
        if (lastDigit == digit) {
            count++;
        }
        temp /= 10;
    }

    cout << "Frequency of " << digit << " in " << number << " is: " << count << endl;

    return 0;
}