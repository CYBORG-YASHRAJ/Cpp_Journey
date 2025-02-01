#include <iostream>
using namespace std;
int sum(int a, int b)
{
    int c = a + b;
    return c;
}

// this will not run ,because actual value is always same .
void swap(int A, int B) // temp A  B
{
    int temp = A; // 4   4   5
    A = B;        // 4   5   5
    B = temp;     // 4   5   4
}

// call by refernce using poimters
void swappointer(int *A, int *B)
{ // here actual value is stored as address
    int temp = *A;
    *A = *B;
    *B = temp;
}
void swapreferencevar(int &A, int &B)
{
    int temp = A; // 4   4   5
    A = B;        // 4   5   5
    B = temp;     // 4   5   4
}
// int &swapreference(int &A, int &B) //not used much
// {
//     int temp = A;
//     A = B;
//     B = temp;
//     return A;  // it assign the value given
// }
int main()
{
    int x = 4, y = 5;
    cout << "the sum of 4 and 9 is " << sum(4, 9) << endl;
    cout << "the value of x is " << x << "the value of y is" << y << endl;
    // this will not swap a and b
    // swap(a, b);
    // swappointer(&x, &y);
    cout << "the value of x is " << x << "the value of y is" << y << endl;
    swapreferencevar(x, y);
    cout << "the value of x is " << x << "the value of y is" << y << endl;

    // swapreference(x, y) = 999;
    cout << "the value of x is " << x << "the value of y is" << y << endl;
    return 0;
}