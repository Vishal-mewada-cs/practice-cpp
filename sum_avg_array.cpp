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
    int sum=0;
    float avg;
    for(int i=0;i<n;i++)
    {
       sum+=a[i];
    }
    avg=sum/n;

    cout<<"sum of array is"<<endl;
    cout<<"average of array is ";


    return 0;
    
}