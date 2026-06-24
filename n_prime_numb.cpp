// A program to write all prime number till given value
#include <iostream>
using namespace std;

int main()
{

    int n, count;
    cout << "enter the value=";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            cout << i << " ";
        }
    }

    return 0;
}