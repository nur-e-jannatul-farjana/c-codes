/*
1. Execute a interactive program that will create a class with private data member
along with multiple object and access the following task:
a) Determine the Employee details(NID,Name, Address).
b) Determine the contact number and email.
c) Update the contact number, whenever there is a change.

*/
#include <iostream>
using namespace std;

class details
{

    string nid[100], name[100], address[100], contact[100], email[100];
    int total = 0;
    int ch = 0;

    public:
    void input();
    void show();
    void update();
};

void details ::input()
{
    cout << "\nHow many you want to enter ? " << endl;
    cin >> ch;
    for (int i = total; i < ch + total; i++)
    {
        cout << "Enter ID          : ";
        cin >> nid[i];

        cout << "Enter name          : ";
        cin >> name[i];

        cout << "Enter Address     : ";
        cin >> address[i];

        cout << "Enter Contact no. : ";
        cin >> contact[i];

        cout << "Enter e-mail         : ";
        cin >> email[i];
    }
    total = ch + total;
}
void details ::show()
{
    for (int i = 0; i < total; i++)
    {
        cout << "NID         : " << nid[i] << endl;
        cout << "Name        : " << name[i] << endl;
        cout << "Address     : " << address[i] << endl;
        cout << "Contact No. : " << contact[i] << endl;
        cout << "E-mail      : " << email[i] << endl;
    }
}

void details ::update()
{
    string nid_no;
    cout << "Enter the ID no. which you want to update : " << endl;
    cin >> nid_no;
   for (int i = 0; i < total; i++)
   {
        if (nid_no == nid[i])
    {
        cout << "\nPrevious data" << endl
             << endl;

        cout << "NID         : " << nid[i] << endl;
        cout << "Name        : " << name[i] << endl;
        cout << "Address     : " << address[i] << endl;
        cout << "Contact No. : " << contact[i] << endl;
        cout << "E-mail      : " << email[i] << endl;

        cout << "\nEnter new data" << endl
             << endl;

        cout << "Enter Contact no. : ";
        cin >> contact[i];


    }
   }

}

int main()
{
    details obj,obj1,obj2,obj3;
    obj.input();
    obj1.show();
    obj2.update();

    return 0;
}
