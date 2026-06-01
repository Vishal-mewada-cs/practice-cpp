
#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "enter your age" << endl;
    cin >> age;

    if (age < 18)
    {
        cout << "not eligible for vote" << endl;
    }
    else 
    {
        cout << "eligible for vote" << endl;
    }
    

    return 0;
}