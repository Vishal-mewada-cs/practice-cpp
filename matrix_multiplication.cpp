#include<iostream>
using namespace std;

int main() 
{
    int r,c;
    cout<<"enter the number of rows:";
    cin>>r;
    cout<<"enter the number of coloums:";
    cin>>c;

    int mat1[r][c], mat2[r][c],mul[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "enter value of element mat1[" << i << "][" << j << "]=";
            cin >> mat1[i][j];
        }
    }

    cout<<"Matrix A"<<endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << mat1[i][j]<<" ";
            
        }
        cout<<endl;
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "enter value of element mat2[" << i << "][" << j << "]=";
            cin >> mat2[i][j];
        }
    }

    cout<<"Matrix B"<<endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << mat1[i][j]<<" ";
            
        }
        cout<<endl;
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            mul[i][j]=0;
            for(int k=0;k<c;k++)
            {
                mul[i][j]+=mat1[i][k]*mat2[k][j];
            }
            
        }
        
    }
cout<<"Multiplication of Mat1 and Mat2"<<endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << mul[i][j]<<" ";
            
        }
        cout<<endl;
    }


    return 0;
}