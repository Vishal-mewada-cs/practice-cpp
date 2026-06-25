// A program which count all prime factors of given number
#include <iostream>
using namespace std;

int main()
{
    int n,count,temp=0,i;
    cout << "Enter the value=";
    cin >> n;
        cout<<"Prime factors of "<<n<<" are ";

    for ( i = 1; i <= n; i++)
    {   
         
        if (n % i == 0)
        {      count=0;
           for (int j = 1; j <= i; j++)
            {
                 if(i%j==0)
                 {
                    count++;
                 }
            }
            if(count==2)
            {
                cout<<i<<" ";
                temp++;
            }
         }
    }        
    cout<<"\nTotal prime factors "<<temp;
   
}