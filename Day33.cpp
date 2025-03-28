#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(int, int); // constructor declaration
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
complex::complex(int x, int y) // this is a parameterized constructor as it takes two parameters.
{
    a = x;
    b = y;
    cout << "Hello world" << endl;
}
int main()
{
    complex a(4, 6);
    a.printNumber();
    complex b(5, 7);
    b.printNumber();
    return 0;
}