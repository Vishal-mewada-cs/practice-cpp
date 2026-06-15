#include<iostream>
using namespace std;

int main(){

  int n,rem,temp,power,sum=0;;
  cout<<"enter the number to chek is it armstrong number or not\n";
  cin>>n;

  temp=n;
  int count=0;
  while(temp>0)
  {
    count++;
    temp=temp/10;
  }

  temp=n;

while(n>0)
{
    rem=n%10;
    power=1;
    for(int i=1;i<=count;i++)
    {
    power=power*rem;
    }
    sum=sum+power;
    n=n/10;

}
if(temp==sum)
  cout<<"Armstrong";
  else
  cout<<"not armstrong";

  return 0;
}