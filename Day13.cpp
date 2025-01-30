#include <iostream>
using namespace std;
int main()
{
    // what is a pointer?----->Data types which holds the addres of other data types

    int a = 3;
    int *b = &a;
    // &--->(address of) operator
    cout << "the address of a is " << b << endl;
    cout << "the address of a is " << &a << endl;

    // *--->(value at)Dereference operator
    cout << "the value at address b is" << *b << endl;

    // pointer to pointer
    int **c = &b;
    cout << "the value of b is" << &b << endl;
    cout << "the value of c is" << c << endl;
    cout << "the value of address c is" << *c << endl;
    cout << "the value of address c is" << *c << endl;
    cout << "the value of address value_at(value_at(c))  c is" << **c << endl;

    return 0;
}