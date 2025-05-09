#include <iostream>
using namespace std;
/*
syntax of inheriting in multiple inheritance:
class derived : visibilty mode base1, visibility mode base2, ...{
    class body of class derived
};
*/
class base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};
class base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};
class base3
{
protected:
    int base3int;

public:
    void set_base3int(int a)
    {
        base3int = a;
    }
};
class derived : public base1, public base2, public base3
{
public:
    void show()
    {
        cout << "Base1 int: " << base1int << endl;
        cout << "Base2 int: " << base2int << endl;
        cout << "Base3 int: " << base3int << endl;
        cout << "Sum of base1int and base2int: " << base1int + base2int + base3int << endl;
    }
};
/*
inherited derived class will look something like this:
data members:
    base1int-->protected
    base2int-->protected
member function:
    set_base1int(int a)-->public
    set_base2int(int a)-->public
    set_show()-->public
*/
int main()
{
    derived yashraj;
    yashraj.set_base1int(10);
    yashraj.set_base2int(20);
    yashraj.set_base3int(30);
    yashraj.show();

    return 0;
}