//keep suumming digits until single digit
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number=";
    cin>>n;
        
     while(n>9)
     {
        int sum=0;
        
        while(n>0)
        {
        sum+=n%10;
        n=n/10;
        }

        n=sum;
     }
     
     
cout<<n;
    
    return 0;
}