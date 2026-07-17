#include<iostream>
using namespace std;

int main() 
{
    char s[100];
    cout<<"enter the name:";
    cin>>s;

    int lenght=0;

    while(s[lenght]!='/0')
    {
       
    lenght++;
    }
    cout<<"Lenght="<<lenght;
    
    
 


    return 0;
}