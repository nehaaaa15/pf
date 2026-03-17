#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int n;
    cout << "Enter the number of integers: ";
    cin >> n;

    int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0;
    int number;

    for (int i = 0; i < n; i++) {
        cin >> number;

        if (number < 200)
            count1++;
        else if (number <= 399)
            count2++;
        else if (number <= 599)
            count3++;
        else if (number <= 799)
            count4++;
        else
            count5++;
    }

    double p1 = (count1 * 100.0) / n;
    double p2 = (count2 * 100.0) / n;
    double p3 = (count3 * 100.0) / n;
    double p4 = (count4 * 100.0) / n;
    double p5 = (count5 * 100.0) / n;
    cout << fixed << setprecision(2);
    cout << p1 << "%" << endl;
    cout << p2 << "%" << endl;
    cout << p3 << "%" << endl;
    cout << p4 << "%" << endl;
    cout << p5 << "%" << endl;

    return 0;
}