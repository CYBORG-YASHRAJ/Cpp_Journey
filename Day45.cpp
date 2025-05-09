#include <iostream>
using namespace std;
class base1
{
public:
    void greet()
    {
        cout << "Hello how are you" << endl;
    }
};
class base2
{
public:
    void greet()
    {
        cout << "kaise ho" << endl;
    }
};
class derived : public base1, public base2
{
    int a;

public:
    void greet()
    {
        base1::greet(); // Calls the greet function from base1
        base2::greet(); // Calls the greet function from base2
    }
};
class B
{
public:
    void say()
    {
        cout << "Hello world" << endl;
    }
};
class D : public B
{
    int a;
    // d's new say() method will override base class's say() method
    //  public:
    //      void say()
    //      {
    //          cout << "Hello my beautiful" << endl;
    //      }
};
int main()
{
    // ambiguity 1
    //  base1 base1obj;
    //  base2 base2obj;
    //  base1obj.greet(); // Calls the greet function from base1
    //  base2obj.greet(); // Calls the greet function from base2
    //  derived d;
    //  d.greet(); // Calls the greet function from derived class

    // ambiguity 2
    B b;
    b.say();
    D d;
    d.say();
    return 0;
}