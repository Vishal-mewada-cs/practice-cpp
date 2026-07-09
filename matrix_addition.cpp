#include <iostream>
using namespace std;

int main()
{
    int r;
    cout << "enter the number of rows of matrix :";
    cin >> r;

    int c;
    cout << "enter the number of coulums of matrix :";
    cin >> c;

    int mat1[r][c], mat2[r][c], sum[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "enter value of element mat1[" << i << "][" << j << "]=";
            cin >> mat1[i][j];
        }
    }

    cout << "Matrix A:" << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << mat1[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "enter value of element mat2[" << i << "][" << j << "]=";
            cin >> mat2[i][j];
        }
    }
    cout << "Matrix B: " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << mat2[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Matrix C: " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}