//factorial program 
#include<iostream>
using namespace std;

int main(){

    int n,k=1;
    cout<<"enter the value"<<" ";
    cin>>n;

    while(n>0)
    {
        k=n*k;
        n--;
    }
    cout<<k<<" ";
    return 0;
}
/* for (int i =1; i <=rem; i++)
{
    k=k*i;
}*/

    