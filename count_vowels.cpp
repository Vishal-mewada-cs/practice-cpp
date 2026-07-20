#include <iostream>
using namespace std;

int main()
{
    char s[100];

    cout << "enter the string:";
    cin >> s;

    cout << s<<endl;

    int lenght = 0;
    while (s[lenght] != '\0')
    {
        lenght++;
    }

    
    int vowel=0;

    for (int i = 0; i < lenght; i++)
    {
        char ch=s[i];

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o'|| ch == 'u'
            ||ch == 'A' || ch == 'E'
             || ch == 'I' || ch == 'O'|| ch == 'U')
        {
            vowel++;
        }
        
    }
    cout << "vowel:" << vowel << endl;
    cout << "consonants:" <<lenght-vowel;

    return 0;
}