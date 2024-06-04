

#include<iostream>
using namespace std;

class C
{
public:
    int r,c,i,j;

    int matrix1[3][3],matrix2[3][3],sum[3][3];

    void input(int x, int y)
    {

        r = x;
        c = y;

        cout << "Enter the elements of your 1st matrix : ";
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                cin >> matrix1[i][j];
            }
        }

        cout << "Enter the elements of your 2nd matrix : ";
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                cin >> matrix2[i][j];
            }
        }

    }
    void input ()
    {

        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                sum[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }

        cout << "\n\nAddition : " << endl;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
               cout << sum[i][j] << " " ;
            }
            cout << endl;
        }




    }
};


int main()
{
    C ob;

    ob.input(3,3);
    ob.input();


    return 0;
}
