#include<iostream>
using namespace std;

int main(){
// pointer is a data type which holds the address of other data types

    int a=4;
    int* b=&a;

    // &--(address of ) operator
        cout<<"address of a="<<b<<endl;
        cout<<"address of a="<<&a<<endl;


    // *-- (value at) dereference operator
    cout<<"the value at address b is="<<*b;

    return 0;
    
}