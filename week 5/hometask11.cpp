#include <iostream>
using namespace std;

int main() {
    int num1, num2, gcd = 1, lcm;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    int min = (num1 < num2) ? num1 : num2;

    for (int i = min; i >= 1; i--) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
            break;
        }
    }

    lcm = (num1 * num2) / gcd;

    cout << "GCD = " << gcd << endl;
    cout << "LCM = " << lcm << endl;

    return 0;
}