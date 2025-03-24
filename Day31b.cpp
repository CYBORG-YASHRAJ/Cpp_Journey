#include <iostream>
using namespace std;
class c2; // Forward declaration
class c1
{
    int val;

public:
    void indata(int a)
    {
        val = a;
    }
    void display()
    {
        cout << val << endl;
    }
    friend void exchange(c1 &, c2 &);
};
class c2
{
    int val2;

public:
    void indata(int a)
    {
        val2 = a;
    }
    void display()
    {
        cout << val2 << endl;
    }
    friend void exchange(c1 &, c2 &);
};
void exchange(c1 &x, c2 &y)
{
    int temp = x.val;
    x.val = y.val2;
    y.val2 = temp;
}
int main()
{
    c1 a;
    a.indata(34);
    cout << "Value of a before exchange: ";
    a.display();
    c2 b;
    b.indata(67);
    cout << "Value of b before exchange: ";
    b.display();
    exchange(a, b);
    cout << "Value of a after exchange: ";
    a.display();
    cout << "Value of b after exchange: ";
    b.display();
    return 0;
}