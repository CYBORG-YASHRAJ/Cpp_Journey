#include <iostream>
using namespace std;
// inline function is a request to compiler
inline int product(int A, int B) // reduce runtime
{
    int c = A * B;
    return c;
}
int sum(int A, int B) // inline is not recommended in case of static variable
{
    static int d = 0;
    d = d + 1;
    return A + B + d;
}
float moneyrecieved(int currentmoney, float factor = 1.04)
{
    return currentmoney * factor;
}
// int strlen(const char*p ){ //keeps string constant

// }
int main()
{
    int a, b;
    cout << "enter the value of a " << endl;
    cin >> a;
    cout << "enter the value of b " << endl;
    cin >> b;
    cout << "the product of a and b is " << product(a, b) << endl;
    cout << "the product of a and b is " << product(a, b) << endl;
    cout << "the product of a and b is " << product(a, b) << endl;
    cout << "the product of a and b is " << product(a, b) << endl;
    cout << "the product of a and b is " << product(a, b) << endl;
    cout << "the product of a and b is " << product(a, b) << endl;
    cout << "the product of a and b is " << product(a, b) << endl;
    cout << endl;
    cout << "the sum of a and b is " << sum(a, b) << endl;
    cout << "the sum of a and b is " << sum(a, b) << endl;
    cout << "the sum of a and b is " << sum(a, b) << endl;
    cout << "the sum of a and b is " << sum(a, b) << endl;
    cout << "the sum of a and b is " << sum(a, b) << endl;
    cout << "the sum of a and b is " << sum(a, b) << endl;
    cout << "the sum of a and b is " << sum(a, b) << endl;
    cout << "the sum of a and b is " << sum(a, b) << endl;
    cout << endl;
    int money = 100000;
    cout << "if you have" << money << "Rs in your bank account ,you will receive " << moneyrecieved(money) << "rs after 1 year" << endl; // this program works with default arguments
    cout << "FOR VIP: if you have" << money << "Rs in your bank account ,you will receive " << moneyrecieved(money, 1.12) << "rs after 1 year";
    cout << endl;
    return 0;
}