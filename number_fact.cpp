// A program which tells all the factor of given number
#include<iostream>
using namespace std;

int main()
{    
    int n;
    cout<<"Enter the value\n";
    cin>>n;
    cout<<"number which divide=";
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<" "<<i;
        }
    }

}