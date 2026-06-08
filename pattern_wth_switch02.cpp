// a program with siwtch cases which print integer value
#include <iostream>
using namespace std;

int main()
{
    int press;
    cout << "press 1 for incresing  number pattern with lines\npress 2 for incresing pattern\n";
    cin >> press;

    int n;
    cout << "enter the value=";
    cin >> n;

    switch (press)
    {
    case 1:

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << i;
            }
            cout << endl;
        }

    case 2:

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << j;
            }
            cout << endl;
        }
    }
        return 0;
    }

