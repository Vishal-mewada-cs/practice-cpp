#include <iostream>
using namespace std;

int target_count(int a[], int n, int target)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (target == a[i])
        {
            count++;
        }
    }
    return count;
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

    int result = target_count(a, n, target);

    cout << "total occurence of target=" << result;

    return 0;
}