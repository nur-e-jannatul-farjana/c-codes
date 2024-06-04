/*
6. Apply the Encapsulation process to getting the following output:
Enter the amount of You want to pay:
Deposited Amount is:
Current balance is:
Account Holder Name and Number:

*/

#include <iostream>
using namespace std;

class E
{
    public:
    float amnt, DA, Cb;
    string AH_name, AH_num;
    void input()
    {
        cout<<"Enter the amount of You want to pay:"<<endl;
        cin>>amnt;
        cout<<"Deposited Amount is:"<<endl;
        cin>>DA;
        cout<<"Account Holder Name and Number:"<<endl;
        cin>>AH_name>>AH_num;
    }

    void calc()
    {
        Cb=DA+amnt;
    }
    void output()
    {
        cout<<"\nEnter the amount of You want to pay:"<<amnt<<endl;
        cout<<"Deposited Amount is:"<<DA<<endl;
        cout<<"Current balance is:"<<Cb<<endl;
        cout<<"Account Holder Name and Number: "<<AH_name<<"   "<<AH_num<<endl;
    }
};

int main()
{
    E ob;
    ob.input();
    ob.calc();
    ob.output();
    return 0;
}
