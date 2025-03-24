#include <iostream>
using namespace std;
class complex; // Forward declaration of complex class

class calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int realsumcomplex(complex o1, complex o2);
    int realcompcomplex(complex o1, complex o2);
};
class complex
{
    int a, b;
    friend int calculator::realsumcomplex(complex o1, complex o2);
    friend int calculator::realcompcomplex(complex o1, complex o2);

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    // below line means that non member -sumcomplex is allowed to do anything with my private parts
    void printNumber()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};
int calculator::realsumcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator::realcompcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    complex c1, c2;
    c1.setdata(1, 4);
    c2.setdata(5, 7);
    calculator calc;
    int res = calc.realsumcomplex(c1, c2);
    cout << "The sum of real part of c1 and c2 is " << res << endl;
    int resc = calc.realcompcomplex(c1, c2);
    cout << "The sum of complex part of c1 and c2 is " << resc << endl;
    return 0;
}