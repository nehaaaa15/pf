#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> books; 
    int choice;
    string bookName;

    while (true) {
       
        cout << "\n--- Library Management System ---\n";
        cout << "1. Add Books\n";
        cout << "2. View Books\n";
        cout << "3. Borrow Books\n";
        cout << "4. View Books\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); 

        if (choice == 1) {
            cout << "Enter the name of the book to add: ";
            getline(cin, bookName);
            books.push_back(bookName);
            cout << "Book added successfully.\n";

        } else if (choice == 2 || choice == 4) {
            if (books.empty()) {
                cout << "No books available in the library.\n";
            } else {
                cout << "Books in the library:\n";
                for (size_t i = 0; i < books.size(); i++) {
                    cout << i + 1 << ". " << books[i] << endl;
                }
            }

        } else if (choice == 3) {
            if (books.empty()) {
                cout << "No books available to borrow.\n";
            } else {
                cout << "Enter the number of the book to borrow: ";
                int bookNum;
                cin >> bookNum;

                if (bookNum >= 1 && bookNum <= (int)books.size()) {
                    cout << "You borrowed: " << books[bookNum - 1] << endl;
                    books.erase(books.begin() + bookNum - 1); 
                } else {
                    cout << "Invalid book number.\n";
                }
            }

        } else if (choice == 5) {
            cout << "Exiting Library System. Goodbye!\n";
            break;

        } else {
            cout << "Invalid choice! Please enter a number between 1 and 5.\n";
        }
    }

    return 0;
}