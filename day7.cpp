// refernce varaibles and Typecasting

#include <iostream>
using namespace std;

int main()
{
    float d = 34.4f;
    long double e = 34.4l;
    cout << "the value of d is :" << d << endl
         << "the value of e is : " << e << endl;
    cout << "the size of 34.4 is" << sizeof(34.4) << endl;
    cout << "the size of 34.4f is" << sizeof(34.4f) << endl;
    cout << "the size of 34.4F is" << sizeof(34.4F) << endl;
    cout << "the size of 34.4l is" << sizeof(34.4l) << endl;
    cout << "the size of 34.4L is" << sizeof(34.4L) << endl;
    return 0;
}