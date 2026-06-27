#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter lenght of array=";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter value of index a["<<i<<"]=";
        cin>>a[i];
    }
    cout<<"Reverse array"<<endl;
    for(int i=n-1;i>=0;i--)
    {
        cout<<" "<<a[i];
    }

}