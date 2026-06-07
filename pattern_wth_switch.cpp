// pattern problem with switch cases for increasing 1. and for decresing 2.

#include <iostream>
using namespace std;

int main()
{

  int press;

  cout << "press 1 for incresing pattern\npress 2 for decresing pattern\n";
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
        cout << "*";
      }
      cout << endl;
    }
    break;

  case 2:

    for (int i = 1; i <= n; i++)
    {
      for (int j = i; j <= n; j++)
      {
        cout << "*";
      }
      cout << endl;
    }
    break;
  }
  return 0;
}
