#include <iostream>
using namespace std;

int something(string a) {
    cout << "something " << a << endl;
    return 0; 
}

int main() {
    string arg;
    cout << "Enter the argument a: ";
    getline(cin, arg);
    something(arg);
    return 0;
}