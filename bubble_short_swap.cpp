#include<iostream>
using namespace std;

void bubble_sort(int a[],int n)
{ int temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1 ; j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    
}

int main() 
{
    int n;
    cout<<"enter the value of array=";
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cout << "enter the value for index a[" << i << "]=";
        cin>>a[i];
    }

    cout<<"sorted array: ";
 
    bubble_sort(a,n);

    return 0;
}