#include <iostream>
using namespace std;

int main()
{
    char s[100];
    cout << "enter the string:";
    cin >> s;

    int lenght = 0;

    while (s[lenght] != '\0')
    {
        lenght++;
    }

   bool palindrome=true;

    for (int i=0; i < lenght ; i++)
    {
        if(s[i]!=s[lenght-1-i])
        {
            palindrome=false;
            break;
        }
    }

    if (palindrome)
    {
        cout << "string is palindrome";
    }
    else
    {
        cout << "string is not palindrome";
    }
    return 0;
}