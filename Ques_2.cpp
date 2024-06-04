/*
2. A bookshop maintain the inventory of books that are being sold at the shop.The
list includes details such as author,title,publisher and stock position. whenever a
customer wants a book,the sales person include the title and author and system
searches the list and displays whether it is available or not. if it is not, an appropriate
message is displayed. if it is then the system displays the book detail and request for
the number of copies required. If the requested copies are available, the total cost of
requested copies is displayed.Otherwise the message "Required copies is not in
stock" is displayed.
Design a program using a same name of class and function with suitable member
functions.

*/

#include<iostream>

using namespace std;

class book
{
public:
    string title,author;

    string book_1 = "ansi_C";
    string book_2 = "oop_with_C++";
    string book_3 = "Clean_code";
    int c;


   book()
    {
        cout << "Here is the book list : \n";
        cout << "\nTitle : ansi_C\n Author :  balagurusamy\n Publisher : Mc Graw Hill Education\n Stock Position : 5\n";
        cout << "\nTitle : oop_with_C++ \n Author :  balagurusamy\n Publisher : Mc Graw Hill Education\n Stock Position : 0\n";
        cout << "\nTitle : clean_code \n Author :  martin\n Publisher : Prentice Hall\n Stock Position : 10\n";
    }

    void get()
    {
        cout << "\n\nEnter Book Title : ";
        cin >> title;
        cout << "\nEnter Author name : ";
        cin >> author;
    }
    void check ()
    {
        if (title == "ansi_C")
        {
            cout << "It is available.";
            cout << "\nBook Details : ";
            cout << "Title : Programming in Ansi C\n Author : E. Balagurusamy\n Publisher : Mc Graw Hill Education\n Stock Position : 5\n";

            cout << "\n How many copies do you want ? ";
            cin >> c;
            if ( c <= 5)
            {
                cout << "\nTotal Price : " << c*250 << " Tk";
            }
            else
            {
                cout << "Required copies is not in stock\n";
            }
        }

        else if (title == "oop_with_C++")
        {
            cout << "Sorry. It is not available now.\n";

        }

        else if (title == "Clean_code")
        {
            cout << "It is available.";
            cout << "\nBook Details : ";
           cout << "\nTitle : Clean code\n Author : Robert Martin\n Publisher : Prentice hall\n Stock Position : 10\n";

            cout << "\n How many copies do you want ? ";
            cin >> c;
            if ( c <= 10)
            {
                cout << "\nTotal Price : " << c*650 << " Tk";
            }
            else
            {
                cout << "Required copies is not in stock\n";
            }
        }
        else
        {
            cout << "Enter correctly. ";
        }
    }
};

int main()
{
    book b;

    b.get();
    b.check();


    return 0;
}

