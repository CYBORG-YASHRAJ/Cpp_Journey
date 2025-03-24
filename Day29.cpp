#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    // below line means that non member -sumcomplex is allowed to do anything with my private parts
    friend complex sumcomplex(complex o1, complex o2);
    void printNumber()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};
complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setdata((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    complex c1, c2, sum;
    c1.setdata(1, 4);
    c1.printNumber();
    c2.setdata(5, 8);
    c2.printNumber();
    sum = sumcomplex(c1, c2);
    sum.printNumber();
    return 0;
}

/*properties of friend functions
1. not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumcomplex() == Invalid
3. can be invoked without the help of any object
4. usually contains the objects as arguments
5. can be declared inside public or private section of the class
6. it cannot access the members directly by their names and need object_name.member_name to access any member.


 */