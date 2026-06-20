#include<iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cout<<"Enter the value:";
    cin>>n;
    
    cout<<"enter %d elements in (os or 1s):";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        
        if (arr[i] == 1)
        {
            count++;
        }
    }
    if (count > 0)
    {
        cout<<"the total 1s ="<<count;
    }
    else
    {
        cout<<"no 1s";
        
    }
    return 0;
}