/*4. Define a program to represent a bank account of 3 persons , Include the following
information a)name of depositor b)account number c)type of account d)balance
amount in the account after withdraw the money using array of object.

*/

#include<iostream>

using namespace std;

class bank
{
public:
    string name,acc_type;
    int acc_number,balance,rem_bal,wd;

    void input()
    {
        cout << "Enter name : ";
        cin >> name;
        cout << "Enter Account number : ";
        cin >> acc_number;
        cout << "Enter Account type : ";
        cin >> acc_type;
        cout << "Enter balance : ";
        cin >> balance;

    }
    void output ()
    {
        cout << "How much do you want to withdraw? ";
        cin >> wd;
        if ( wd <= balance)
        {
            rem_bal = balance - wd;
        }
        else
        {
            cout << "you have not sufficient balance !";
            rem_bal = balance;
        }
    }

    void show ()
    {
        cout << "\nName : " << name;
        cout << "\nAccount number : " << acc_number ;
        cout << "\nAccount type : " << acc_type;
        cout << "\nBalance : " << rem_bal << endl;


    }

};

int main()
{
   bank ba[3];

   for (int i =0; i <3; i++)
   {
   ba[i].input();
   ba[i].output();
   ba[i].show();
   }



    return 0;
}

