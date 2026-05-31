// Take a float print its int part and decimal part separately.
// typecasting is used.
#include <iostream>
using namespace std;

int main()
{

    float n;
    cout << "give the value=";
    cin >> n;

    int num = (int)n;
    float dnum = n - num;

    cout << "the integer part =" << num << endl;
    cout << "the decimal part =" << dnum << endl;

    return 0;
}