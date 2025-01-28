// refercence variable and typecasting

#include <iostream>
using namespace std;

int d = 45;

int main()
{
    //************ Build in data types***********
    int a, b, c, d;
    cout << "enter the value of a:";
    cin >> a;

    cout << "enter the value of b:";
    cin >> b;

    cout << "enter the value of c:";
    cin >> c;

    d = a + b + c;
    cout << " the sum is" << d << endl;
    cout << "the global d is " << ::d;
    cout << endl;

    cout << endl;
    //**********  float, double and long double literals **********
    float j = 34.4f;
    long double e = 34.4l;
    cout << "the value of j is :" << j << endl
         << "the value of e is : " << e << endl;
    cout << "the size of 34.4 is" << sizeof(34.4) << endl;
    cout << "the size of 34.4f is" << sizeof(34.4f) << endl;
    cout << "the size of 34.4F is" << sizeof(34.4F) << endl;
    cout << "the size of 34.4l is" << sizeof(34.4l) << endl;
    cout << "the size of 34.4L is" << sizeof(34.4L) << endl;
    cout << endl;

    cout << endl;
    // rohan das---> Monty ----> rohu ----> Dangerous coder
    float x = 455;
    float &y = x;
    cout << x << endl;
    cout << y << endl;
    cout << endl;

    cout << endl;
    //************ Typecasting **************
    int k = 45;
    float n = 45.46;
    cout << "the value of k is " << (float)k << endl;
    cout << "the value of k is " << float(k) << endl;

    cout << "the value of n is " << (int)n << endl;
    cout << "the value of n is " << int(n) << endl;

    int s = int(b);
    cout << "the expression is" << k + n << endl;
    cout << "the expression is" << k + int(n) << endl;
    cout << "the expression is" << k + (int)n;
    return 0;
}
