#include <iostream>
// constructor overloading
using namespace std;
class complex
{
    int a, b;

public:
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex(int x)
    {
        a = x;
        b = 0;
    }
    complex()
    {
        a = 0;
        b = 0;
    }
    void displayComplex()
    {
        cout << "The complex number is " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    complex c1(4, 6);
    c1.displayComplex();
    complex c2(5);
    c2.displayComplex();
    complex c3;
    c3.displayComplex();

    return 0;
}