#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the lenght of array=";
    cin>>n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"enter the value of array at index a["<<i<<"]=";
        cin>>a[i];
    }
    int even=0,odd=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout<<"Total even number in given array="<<even<<endl;
    cout<<"Total odd number in given array="<<odd;
    


    
    return 0;
    
}