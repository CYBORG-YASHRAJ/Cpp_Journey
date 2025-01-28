// header files and operations

// there are two types of header files:
// 1. system Header Files
#include <iostream>
// 2. User-defined Header Files
// #include "this.h"
// this will give error if this.h is not present in current directory.

using namespace std;
int main()
{
    cout << "this is hello world program" << endl;
    int a = 4, b = 5;
    cout << "operators in c++" << endl;
    cout << "the value of a + b is =" << a + b << endl;
    cout << "the value of a - b is =" << a - b << endl;
    cout << "the value of a X b is =" << a * b << endl;
    cout << "the value of a / b is =" << a / b << endl;
    cout << "the value of a % b is =" << a % b << endl;
    cout << "the value of a ++  is =" << a++ << endl;
    cout << "the value of a --  is =" << a-- << endl;
    cout << "the value of ++ a  is =" << ++a << endl;
    cout << "the value of -- a  is =" << --a << endl;
    cout << endl;

    // assignment operators

    //-->int a=3,b=6;
    //-->char d ='d';

    // Comparison Operators
    cout << endl;
    cout << "following operators are comparison operators" << endl;
    cout << "the value of a == b is " << (a == b) << endl;
    cout << "the value of a != b is " << (a != b) << endl;
    cout << "the value of a > b is " << (a > b) << endl;
    cout << "the value of a < b is " << (a < b) << endl;
    cout << "the value of a <= b is " << (a <= b) << endl;
    cout << "the value of a >= b is " << (a >= b) << endl;

    // logical operators
    cout << endl;
    cout << "following are the logical operators in c++" << endl;
    cout << "the value of this logical operator is " << ((a == b) && (a < b)) << endl;
    cout << "the value of this logical operator is " << ((a == b) || (a < b)) << endl;
    cout << "the value of this logical operator is " << (!(a == b)) << endl;
    return 0;
}