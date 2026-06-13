// programm gives total no. of digits given;
#include<iostream>
using namespace std;

int main()
{
 int n,Td=0,rem;
    cout<<"enter the value"<<endl;
    cin>>n;

    while (n>0)
    {
      Td++;
      n=n/10; 
    }
    cout<<"total digits="<<Td;

    return 0;
}