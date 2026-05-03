#include <iostream>
using namespace std;

// FUNCTION DECLARATIONS
void showMainMenu();
void userPanel(string bookName[], string author[], int quantity[], int total);
void adminPanel(string bookName[], string author[], int quantity[], int &total);
void viewBooks(string bookName[], string author[], int quantity[], int total);
void searchBook(string bookName[], string author[], int quantity[], int total);
void addBook(string bookName[], string author[], int quantity[], int &total);
void updateBook(string bookName[], string author[], int quantity[], int total);
void deleteBook(string bookName[], string author[], int quantity[], int &total);

// MAIN FUNCTION
int main()
{
    string bookName[50] = {"MathBook", "Physics", "Chemistry", "English", "history"};
    string author[50] = {"Ali", "Ahmed", "Sara", "Zain", "samad"};
    int quantity[50] = {5, 3, 4, 6, 9};

    int total = 5;
    int choice;

    while (true)
    {
        showMainMenu();
        cin >> choice;

        if (choice == 1)
            userPanel(bookName, author, quantity, total);
        else if (choice == 2)
            adminPanel(bookName, author, quantity, total);
        else if (choice == 3)
            break;
    }

    return 0;
}

// FUNCTION DEFINITIONS

void showMainMenu()
{
    system("cls");
    cout << "=====================================" << endl;
    cout << "===== LIBRARY MANAGEMENT SYSTEM =====" << endl;
    cout << "=====================================" << endl;
    cout << "1. User" << endl;
    cout << "2. Admin" << endl;
    cout << "3. Exit" << endl;
    cout << "Choice: " << endl;
}

// USER PANEL
void userPanel(string bookName[], string author[], int quantity[], int total)
{
    int choice;

    while (true)
    {
        cout << "\n===== USER PANEL =====\n";
        cout << "1. View All Books" << endl;
        cout << "2. Search Book" << endl;
        cout << "3. Back" << endl;
        cout << "Choice: ";
        cin >> choice;

        if (choice == 1)
            viewBooks(bookName, author, quantity, total);
        else if (choice == 2)
            searchBook(bookName, author, quantity, total);
        else if (choice == 3)
            break;
    }
}

// ADMIN PANEL
void adminPanel(string bookName[], string author[], int quantity[], int &total)
{
    string username, password;

    for (int i = 0; i < 3; i++)
    {
        cout << "Login Attempt " << i + 1 << endl;
        cout << "Username: ";
        cin >> username;
        cout << "Password: ";
        cin >> password;

        if (username == "admin" && password == "123")
        {
            int choice;

            while (true)
            {
                cout << "\n===== ADMIN PANEL =====\n";
                cout << "1. Add Book" << endl;
                cout << "2. Update Book" << endl;
                cout << "3. Delete Book" << endl;
                cout << "4. Search Book" << endl;
                cout << "5. View All Books" << endl;
                cout << "6. Back" << endl;
                cout << "Choice: ";
                cin >> choice;

                if (choice == 1)
                    addBook(bookName, author, quantity, total);
                else if (choice == 2)
                    updateBook(bookName, author, quantity, total);
                else if (choice == 3)
                    deleteBook(bookName, author, quantity, total);
                else if (choice == 4)
                    searchBook(bookName, author, quantity, total);
                else if (choice == 5)
                    viewBooks(bookName, author, quantity, total);
                else if (choice == 6)
                    break;
            }
            return;
        }
        else
        {
            cout << "Invalid credentials!\n";
        }
    }
}

// VIEW BOOKS
void viewBooks(string bookName[], string author[], int quantity[], int total)
{
    cout << "\n===== Book List =====\n";
    for (int i = 0; i < total; i++)
    {
        cout << i + 1 << ". " << bookName[i]
             << " | Author: " << author[i]
             << " | Quantity: " << quantity[i] << endl;
    }
}

// SEARCH BOOK
void searchBook(string bookName[], string author[], int quantity[], int total)
{
    string search;
    cout << "Enter Book Name: ";
    cin >> search;

    bool found = false;

    for (int i = 0; i < total; i++)
    {
        if (bookName[i] == search)
        {
            cout << "Found: " << bookName[i]
                 << " | Author: " << author[i]
                 << " | Quantity: " << quantity[i] << endl;
            found = true;
        }
    }

    if (!found)
        cout << "Book Not Found!" << endl;
}

// ADD BOOK
void addBook(string bookName[], string author[], int quantity[], int &total)
{
    cout << "Enter Book Name: ";
    cin >> bookName[total];
    cout << "Enter Author: ";
    cin >> author[total];
    cout << "Enter Quantity: ";
    cin >> quantity[total];

    total++;
    cout << "Book Added Successfully" << endl;
}

// UPDATE BOOK
void updateBook(string bookName[], string author[], int quantity[], int total)
{
    int index;
    cout << "Enter Book Number: ";
    cin >> index;
    index--;

    if (index >= 0 && index < total)
    {
        cout << "New Name: ";
        cin >> bookName[index];
        cout << "New Author: ";
        cin >> author[index];
        cout << "New Quantity: ";
        cin >> quantity[index];

        cout << "Updated Successfully" << endl;
    }
    else
    {
        cout << "Invalid Index!" << endl;
    }
}

// DELETE BOOK
void deleteBook(string bookName[], string author[], int quantity[], int &total)
{
    int index;
    cout << "Enter Book Number: ";
    cin >> index;
    index--;

    if (index >= 0 && index < total)
    {
        for (int i = index; i < total - 1; i++)
        {
            bookName[i] = bookName[i + 1];
            author[i] = author[i + 1];
            quantity[i] = quantity[i + 1];
        }
        total--;
        cout << "Deleted Successfully" << endl;
    }
    else
    {
        cout << "Invalid Index" << endl;
    }
}