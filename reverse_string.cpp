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
    cout << "Reversed string:";
    
    for (int i = lenght - 1; i >= 0; i--)
    {
        cout << s[i];
    }

    return 0;
}