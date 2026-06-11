//program to add given noumbers;
#include<iostream>
using namespace std;

int main()
 {
    int n,sum=0,rem;
    cout<<"enter the valu"<<endl;
    cin>>n;

    while (n>0)
    {
      rem=n%10;
      sum=sum+rem;
      n=n/10;
    }
    cout<<"sum="<<sum;
  
    return 0;
  }

    
