
#include <iostream>
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
     
    int max=a[0];
    int sec_max=a[1];
    for(int i=0;i<5;i++)
    {
        if(a[i]>max)
        {
         sec_max=max;
          max=a[i];
        }
        else if (a[i]>sec_max && a[i]!=max)
        {
            sec_max=a[i];
        }
        
    }
    cout<<"second max="<<sec_max;

    return 0;
}

