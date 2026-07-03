#include <iostream>
using namespace std;

int binary_search(int a[],int n,int target)
{
  int low=0;
  int high=n-1;

  while(low<=high)
  {
   int mid=(low+high)/2;

    if(a[mid]==target)
    {
        return mid;
    }
    else if(a[mid]<target)
    {
        low=mid+1;
    }
    else{
        high=mid-1;
    }
  }
return -1;
}

int main()
{
    int n;
    cout << "enter the size of array=";
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter the value for index a[" << i << "]=";
        cin >> a[i];
    }

    int target;
    cout << "enter target from array=";
    cin >> target;

    int result=binary_search(a,n,target);

    if(result!=-1)
    {
        cout<<"element found at index:"<<result;
    }
    else{
        cout<<"element not found ";
    }

    return 0;
}