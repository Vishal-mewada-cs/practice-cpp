#include<iostream>
using namespace std;

int main() 
{
    int r,c;

    cout<<"enter the number the rows of matrix:";
    cin>>r;

    cout<<"enter the number the rows of columns:";
    cin>>c;

    int mat[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<"enter the value of the element in index mat["<<i<<"]["<<j<<"]:";
            cin>>mat[i][j];
        }
    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<mat[i][j]<<" ";
            
        }
        cout<<endl;
    }

    
    cout<<"Spiral Matrix:"<<endl;
    
    int top=0,bottom=r-1,left=0,right=c-1;

    while(top<=bottom && left<=right)
    {
        for(int i=left;i<=right;i++)
        {
            cout<<mat[top][i]<<" ";
        }
        top++;
        for(int i=top;i<=bottom;i++)
        {
            cout<<mat[i][right]<<" ";
        }
       right--;

       for(int i=right;i>=left;i--)
        {
            cout<<mat[bottom][i]<<" ";
        }
       bottom--;

       for(int i=bottom;i>=top;i--)
        {
            cout<<mat[i][left]<<" ";
        }
       left++;
    }



    return 0;
}