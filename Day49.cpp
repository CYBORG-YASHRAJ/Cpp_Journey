#include <iostream>
using namespace std;
/*
syntax for initialization list in constructor
constructor (argument list) : initialization-section{
    assignment + other code;
}
    class test{
    int a;
    int b;
    public:
        test(int i,int j):a(i),b(j){
            cout<<"Constructor executed"<<endl;
        }
    };
*/
class test
{
    int a;
    int b;

public:
    // test(int i, int j) : a(i), b(j)
    // test(int i, int j) : a(i), b(i + j)
    // test(int i, int j) : a(i), b(2 * j)
    // test(int i, int j) : a(i), b(a + j)
    test(int i, int j) : b(j), a(b + i) // This will not work because a is not initialized yet

    {
        cout << "Constructor executed" << endl;
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
    }
};
int main()
{
    test t(4, 5); // Constructor will be called here
    return 0;
}