#include <iostream>
using namespace std;

int main()
{

    string bookName[50] = {"MathBook", "Physics", "Chemistry", "English","history"};
    string author[50] = {"Ali", "Ahmed", "Sara", "Zain","samad"};
    int quantity[50] = {5, 3, 4, 6, 9};

    int total = 4;
    int mainChoice;

    while (true)
    {
        system("cls");
        cout << "=====================================" << endl;
        cout << "===== LIBRARY MANAGEMENT SYSTEM =====" << endl;
        cout << "=====================================" << endl;
        cout << "1. User" << endl;
        cout << "2. Admin" << endl;
        cout << "3. Exit" << endl;
        cout << "Choice: " << endl;
        cin >> mainChoice;

        // USER PANEL
        if (mainChoice == 1)
        {
            int userChoice;

            while (true)
            {
        
                cout << "========================"<<endl;
                cout << "====== USER PANEL ======" << endl;
                cout << "========================"<<endl;
                cout << "1. View All Books" << endl;
                cout << "2. Search Book" << endl;
                cout << "3. Back" << endl;
                cout << "Choice: ";
                cin >> userChoice;

                // VIEW BOOKS
               system("cls");
                if (userChoice == 1)
                {
                    
                    cout << "====================="<<endl;
                    cout << "===== Book List ====="<<endl;
                    cout << "====================="<<endl;
                    for (int i = 0; i < total; i++)
                    {
                        cout << i + 1 << ". " << bookName[i]
                             << " | Author: " << author[i]
                             << " | Quantity: " << quantity[i] << endl;
                    }
                }

                // SEARCH BOOK
                else if (userChoice == 2)
                {
                    string search;
                    cout << "Enter Book Name: ";
                    cin >> search;

                    bool found = false;

                    for (int i = 0; i < total; i++)
                    {
                        system("clr");
                        if (bookName[i] == search)
                        {
                            cout << "Found: " << bookName[i] << " | Author: " << author[i]
                                 << " | Quantity: " << quantity[i] << endl;
                            found = true;
                        }
                    }

                    if (!found)
                    {
                        cout << "Book Not Found!" << endl;
                    }
                }

                else if (userChoice == 3)
                {
                    break;
                }
            }
        }

        // ADMIN PANEL
        else if (mainChoice == 2)
        {
            int adminChoice;
            int countattemp = 0;
            for (int i = 0; i < 3; i++)
            {
                system("cls");
                cout << "admin menu : login attempt" << i + 1 << endl;
                cout << "enter username :";
                string username;
                cin >> username;
                cout << "enter password :";
                string password;
                cin >> password;
                if (username == "admin" && password == "123")
                {
                    cout << "login success"<<endl;

                    while (true)
                    {
                        cout << "======================="<<endl;
                        cout << "===== ADMIN PANEL ====="<<endl;
                        cout << "======================="<<endl;
                        cout << "1. Add Book" << endl;
                        cout << "2. Update Book" << endl;
                        cout << "3. Delete Book" << endl;
                        cout << "4. Search Book" << endl;
                        cout << "5. View All Books" << endl;
                        cout << "6. Back" << endl;
                        cout << "Choice: " << endl;
                        cin >> adminChoice;

                        // ADD BOOK
                        if (adminChoice == 1)
                        {
                            cout << "Enter Book Name: ";
                            cin >> bookName[total];
                            cout << "Enter Author Name: ";
                            cin >> author[total];
                            cout << "Enter Quantity: ";
                            cin >> quantity[total];
                            total++;
                            cout << "Book Added Successfully!" << endl;
                        }

                        // UPDATE BOOK
                        else if (adminChoice == 2)
                        {
                            int index;
                            cout << "Enter Book Number to Update: ";
                            cin >> index;
                            index--;

                            if (index >= 0 && index < total)
                            {
                                cout << "Enter New Book Name: ";
                                cin >> bookName[index];
                                cout << "Enter New Author: ";
                                cin >> author[index];
                                cout << "Enter New Quantity: ";
                                cin >> quantity[index];
                                cout << "Updated Successfully!" << endl;
                            }
                            else
                            {
                                cout << "Invalid Index!" << endl;
                            }
                        }

                        // DELETE BOOK
                        else if (adminChoice == 3)
                        {
                            int index;
                            cout << "Enter Book Number to Delete: "<<endl;
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
                                cout << "Deleted Successfully!" << endl;
                            }
                            else
                            {
                                cout << "Invalid Index!" << endl;
                            }
                        }

                        // SEARCH BOOK
                        else if (adminChoice == 4)
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
                            {
                                cout << "Book Not Found!"<<endl;
                            }
                        }

                        // VIEW ALL
                        else if (adminChoice == 5)
                        {
                            for (int i = 0; i < total; i++)
                            {
                                cout << i + 1 << ". " << bookName[i]
                                     << " | Author: " << author[i]
                                     << " | Quantity: " << quantity[i] << endl;
                            }
                        }

                        else if (adminChoice == 6)
                        {
                            break;
                        }
                    }
                }

                else if (mainChoice == 3)
                {
                    break;
                }
            }

            return 0;
        }
    }
}