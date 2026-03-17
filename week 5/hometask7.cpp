#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the length of Fibonacci series: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive number." << endl;
        return 0;
    }

    int a = 0, b = 1, next = 0;
    int count = 1;

    cout << "Fibonacci Series: ";

    while (count <= n) {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
        count++;
    }

    cout << endl;
    return 0;
}