#include <iostream>
using namespace std;



int main()
{
    int r, c;

    cout << "enter the number of rows:";
    cin >> r;

    cout << "enter the number of columns:";
    cin >> c;

    int mat[r][c];
    int trans[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "enter value of element a[" << i << "][" << j << "]=";
            cin >> mat[i][j];
        }
    }

     for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << mat[i][j]<<" ";
            
        }
        cout<<endl;
    }

    cout<<"Transpose of Matrix:"<<endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
           trans[i][j]=mat[j][i];
            
        }
        
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << trans[i][j]<<" ";
            
        }
        cout<<endl;
    }


    return 0;
}