#include<iostream>
using namespace std;

int main(){

    int n,rem,f=1,temp,sum=0;
    
    cout<<"enter the value=";
    cin>>n;

    temp=n;
    while (n>0)
    {
        rem=n%10;

        int f=1; 
        for (int i=1 ; i<=rem; i++)
        {
            f=f*i;
        }
        sum=sum+f;
        n=n/10;
    }
    
    if(temp==sum)
        cout<<"strong no.";
        else
        cout<<"not strong no.";
    

}  