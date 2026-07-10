#include <iostream>
using namespace std;

int main()
{
    int r,c;
    cout << "enter the number of rows:";
    cin>>r;

    
    cout << "enter the number of coulum:";
    cin>>c;

    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j< c; j++)
        {
            cout << "enter value of element a["<<i<<"]["<<j<<"]=";
            cin>>a[i][j];
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}