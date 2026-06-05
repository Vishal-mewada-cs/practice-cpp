//its a program toknow how many digits from a given number divide itself 
// ex- 124 all 3(1,2,4) so 3, 13 only 1 not 3 so 1
#include<iostream>
using namespace std;

int main(){

      int n,rem,di=0,temp;
      cout<<"enter the value=";
      cin>>n;

      temp=n;
      while (n>0)
      {
        rem=n%10;
        if((temp%rem)==0)
        {
            di++;
        }
       n=n/10;
        
      }
      cout<<di;

    return 0;
}