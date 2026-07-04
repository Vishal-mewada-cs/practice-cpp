#include <iostream>
using namespace std;

void find_dupl(int a[], int n)
{
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                cout<<a[i]<<" ";
            }
        }
    }
    
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

    find_dupl(a, n);

    

    return 0;
}