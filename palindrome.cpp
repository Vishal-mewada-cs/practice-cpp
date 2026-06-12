//palindrome program 
#include<iostream>
using namespace std;

int main(){
int n,rem,rev=0,temp;
cout<<"enter the value"<<" ";
cin>>n;
              //we have to declare temp=n here cause
temp=n;
while(n>0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;       //here n becomes 0 and we have to stil compare with original n
}
if(temp==rev)
{
    cout<<"pelindrome";
}
else{
    cout<<"not pelindrome";
}
return 0;
}
