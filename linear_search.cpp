#include<iostream>
using namespace std;

int targetsearch(int a[],int n,int target)
{
   for (int i = 0; i < n; i++)
   {
        for(int i=0;i<n;i++)
        {
            if(a[i]==target)
            {
                return i;
            }
        }
   }
   return -1;

}


int main() 
{
    int n;
    cout<<"enter the size of array=";
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter the value for index a["<<i<<"]=";
        cin>>a[i];
    }

    int target;
    cout<<"enter target from array=";
    cin>>target;

    int result=targetsearch(a,n,target);

    if(result !=-1)
    {
        cout<<"index at which target ="<<target<<" is "<<result<<endl;
    }
    else{
        cout<<"element not found";
    }
    return 0;
}