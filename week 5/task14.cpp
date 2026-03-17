#include <iostream>
using namespace std;

int main() {
    string username, password;
    bool loginSuccess = false;

    for (int i = 1; i <= 3; i++) {
        cout << "Login Attempt " << i << endl;
        cout << "Enter Username: ";
        cin >> username;
        cout << "Enter Password: ";
        cin >> password;

        if (username == "admin" && password == "1234") {
            cout << "Login Successful\n";
            loginSuccess = true;
            break;
        } else {
            cout << "Invalid credentials\n";
        }
    }

    if (!loginSuccess) {
        cout << "Access Denied\n";
        return 0;
    }
    string studentName = "", courseName = "";
    int studentAge = 0;

    int choice;

    do {
        cout << "\n--- University Management System ---\n";
        cout << "1 → Add Student\n";
        cout << "2 → View Student\n";
        cout << "3 → Add Course\n";
        cout << "4 → Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter Student Name: ";
            cin >> studentName;
            cout << "Enter Student Age: ";
            cin >> studentAge;

        } else if (choice == 2) {
            if (studentName != "" && studentAge != 0) {
                cout << "Student Name: " << studentName << endl;
                cout << "Student Age: " << studentAge << endl;
            } else {
                cout << "No student data available\n";
            }

        } else if (choice == 3) {
            cout << "Enter Course Name: ";
            cin >> courseName;
            cout << "Course Added: " << courseName << endl;

        } else if (choice == 4) {
            cout << "Exiting program...\n";

        } else {
            cout << "Invalid choice\n";
        }

    } while (choice != 4);

    return 0;
}