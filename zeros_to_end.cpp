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
        cout << "enter the value of array on index a[" << i << "]=";
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j] == 0)
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}