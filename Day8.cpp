#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    // int a =34;
    // cout<<"the value of a was :"<<a;
    // a=45;  //here value of a is changed
    // cout<<"the value of a is:"<<a;

    // constants in c++

    // const int a=3; // value is constant , apllicable for float,character
    // cout<<"the value of a was:"<<a<<endl;
    // a=67 this will give error because a is constant

    int a = 3, b = 78, c = 1233;
    cout << "the value of a is" << a << endl;
    cout << "the value of b is" << b << endl;
    cout << "the value of c is" << c << endl;

    cout << "the value of a is" << setw(4) << a << endl;
    cout << "the value of b is" << setw(4) << b << endl;
    cout << "the value of c is" << setw(4) << c << endl;

    // operator Precedence
    int x = 3, y = 4;
    int z = ((((a * 5) + b) - 45) + 87);
    cout << z;
    return 0;
}