
// RECURSION -- function runs until it gets satisfied

#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
// step by step
/*  DRY RUN
factorial(4)=4*factorial(3)
factorial(4)=4*3*factorial(2)
factorial(4)=4*3*2*1
factorial(4)=24
*/
int fib(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return fib(n - 2) + fib(n - 1);
}
/*
fib(5)
fib(4)+fib(3)
fib(2)+fib(3)+fib(2)+fib(3)//here iterative statement is the best option
*/
int main()
{
    // factorial of a number:
    // 0!= 1 by default
    // 1!= 1 by default
    // 6=6*5*4*3*2*1=720
    // n!=n*(n-1)!
    int a;
    cout << "enter the number" << endl;
    cin >> a;
    cout << "the factorial of " << a << " is " << factorial(a) << endl;
    cout << "the term in fibonacci sequence at position of " << a << " is " << fib(a);
    return 0;
}