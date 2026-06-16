//A program which tells that the given number is prime or not

#include<iostream>
using namespace std;

int main()
{
    int n,count=0;
    cout<<"enter the value=";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        cout<<"prime number";
    }
    else
    {
        cout<<"not prime";
    }
}