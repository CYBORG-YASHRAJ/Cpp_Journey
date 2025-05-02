#include <iostream>
using namespace std;
class simple
{
    int data1;
    int data2;
    int data3;

public:
    simple(int a, int b = 9, int c = 8) // this is a default argument
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printdata();
};
void simple::printdata()
{
    cout << "The value of data1 is " << data1 << endl;
    cout << "The value of data2 is " << data2 << endl;
    cout << "The value of data3 is " << data3 << endl;
}
int main()
{
    simple s1(12, 13);
    s1.printdata();
    return 0;
}