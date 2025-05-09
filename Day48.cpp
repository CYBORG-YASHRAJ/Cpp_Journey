#include <iostream>
using namespace std;
/*
case1:
classB: public A{
order of execution
    first A() then B()

case2
class A:public B,public C{
order of execution
    first B() then C() then A()}

case3:
class A:public B,virtual public c{
order of execution
    first C() then B() then a()}
    virtual base class is initialized first and then derived class is initialized
};
*/
class base
{
    int data;

public:
    base(int i)
    {
        data = i;
        cout << "Base class constructor called" << endl;
    }
    void printdata(void)
    {
        cout << "The value of data is " << data << endl;
    }
};
class base2
{
    int data2;

public:
    base2(int j)
    {
        data2 = j;
        cout << "Base2 class constructor called" << endl;
    }
    void printdata2(void)
    {
        cout << "The value of data2 is " << data2 << endl;
    }
};
class derived : public base, public base2
{
    int derived1, derived2;

public:
    derived(int a, int b, int c, int d) : base(a), base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor called" << endl;
    }
    void printData3(void)
    {
        cout << "the value of derived1 is" << derived1 << endl;
        cout << "the value of derived2 is" << derived2 << endl;
    }
};
int main()
{
    derived yashraj(1, 2, 3, 4);
    yashraj.printData3();
    yashraj.printdata();
    yashraj.printdata2();

    return 0;
}