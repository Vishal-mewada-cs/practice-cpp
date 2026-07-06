#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the size of array:";
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter the value for index a[" << i << "]=";
        cin >> a[i];
    }

    bool sorted=true;
    
    for (int i = 0; i < n - 1; i++)
    {
        if(a[i]>a[i+1])
        {
            sorted=false;
            break;
        }
    }

    if (sorted)
    {
        cout << "sorted array";
    }
    else
    {
        cout << "not sorted";
    }
    return 0;
}