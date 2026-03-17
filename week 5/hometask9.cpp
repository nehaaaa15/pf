#include <iostream>
using namespace std;

int main() {
    long long number;
    int digit, count = 0;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Enter the digit to find frequency: ";
    cin >> digit;

    if (number < 0) {
        number = -number;
    }

    while (number > 0) {
        int lastDigit = number % 10;
        if (lastDigit == digit) {
            count++;
        }
        number /= 10; 
    }

    cout << "Frequency of " << digit << " = " << count << endl;

    return 0;
}