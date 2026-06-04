//take a number chek is that no. is divisible ny 3 and 5.
#include<iostream>
using namespace std;

int main()
{

    int n;
    cout<<"enter the no.=";
    cin>>n;

    if(n%3==0 && n%5==0)
    {

        cout<<"divisible"<<endl;
    }
    else
    
{
    cout<<"not divisible";
}
    return 0;

}