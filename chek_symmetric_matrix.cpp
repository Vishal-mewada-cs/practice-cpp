#include <iostream>
using namespace std;

int main()
{
    int r, c;

    cout << "enter the number of rows:";
    cin >> r;

    cout << "enter the number of columns:";
    cin >> c;

    if(r!=c)
    {
        cout << "The matrix is not symmetric:";
        return 0;
    }
    int mat[r][c];
    

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
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }


    bool symmetric=true;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
           if(mat[i][j] != mat[j][i])
           {
            symmetric=false;
            break;
           }
        }
        if(symmetric)
        {
            break;
        }
    }

    
    if (symmetric)
    {
        cout << "The matrix is symmetric:";
    }
    else
    {
        cout << "The matrix is not symmetric:";
    }
    return 0;
}