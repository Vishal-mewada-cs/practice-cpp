#include <iostream>
using namespace std;

void rotate_array(int a[], int n, int k)
{
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        temp[i] = a[(i + k) % n];
    }
    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }
}

int main()
{
    int n;
    cout << "enter size of array:";
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter the value of array at index a[" << i << "]=";
        cin >> a[i];
    }

    int k;
    cout << "enter how many position to rotate left:";
    cin >> k;

    k = k % n; // handle k greater than n

    rotate_array(a, n, k);

    return 0;
}