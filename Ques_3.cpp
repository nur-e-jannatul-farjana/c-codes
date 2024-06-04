/*
3. Explain the difference between Multiple and Multilevel Inheritance. Create
two classes like DoCSE and DoEEE. There are 430 and 210 students have taken
admission in the department respectively. Different courses are offered by the
department. Write a program Write a program that can pass the number of students from the
object of class. Use a friend function to carry out the number of courses are
offered by the department.
*/

#include<iostream>

using namespace std;

class DoCSE
{
    public:
    int stu_num;
    int course_offered = 4;

    void get(int x)
    {
       stu_num = x;
       cout << "Number of students in CSE : " << stu_num << endl;
    }

    friend void cal(DoCSE c);

};

void  cal(DoCSE c)
{
    cout << "Offered Courses in CSE : " << c.course_offered << endl;

}

class DoEEE
{
public:
    int stu_num;
    int course_offered = 5;

    void get(int x)
    {
       stu_num = x;
       cout << "Number of students in EEE : " << stu_num << endl;
    }

    friend void cal(DoEEE e);
};

void cal(DoEEE e)
{
    cout << "Offered Courses in EEE : " << e.course_offered << endl;

}


int main()
{

   DoCSE ob1;

   ob1.get(430);

   cal(ob1);


   DoEEE ob2;

   ob2.get(210);

   cal(ob2);



    return 0;
}

