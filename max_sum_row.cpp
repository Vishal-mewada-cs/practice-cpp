#include <iostream>
using namespace std;

int main()
{
    int r, c;
    cout << "enter number of rows:";
    cin >> r;
    cout << "enter number of column:";
    cin >> c;

    int a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "enter value of element a[" << i << "][" << j << "]=";
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    int max = 0;
    int max_row = 0;

    for (int i = 0; i < r; i++)
    {
        int sum = 0;
        for (int j = 0; j < c; j++)
        {
            sum += a[i][j];
        }
        if (sum > max)
        {
            max = sum;
            max_row = i;
        }
    }
    cout << "Row with maximum sum:";
    cout << max_row + 1; // cause i starts from 0,1,2... so if max sum row is 2 it will give 1

    return 0;
}