#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    // creating a constructor
    // constructor is a special member function with same name as of the class.
    // it is automatically invoked, whener an object is created.
    // it is used to initialize the objects of its class.
    complex(void);
    void printnumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    } // constructor declaration
};
complex::complex(void) // this is a default constructor as it takes no parameters.
{
    a = 10;
    b = 0;
    cout << "Hello world" << endl;
}
int main()
{
    complex c1, c2, c3;
    c1.printnumber();
    c2.printnumber();
    c3.printnumber();
    return 0;
}
// properties of constructor
// 1. it should be declared in the public section of the class.
// 2. they are automatically invoked whenever the object is created.
// 3. they cannot return values and do not have return types.
// 4. it can have default arguments.
// 5. we cannot refer to their address.
