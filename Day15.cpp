
// structure in c++ (struct)

#include <iostream>
using namespace std;
struct employee
{
    /* data */
    int eId;
    char favChar;
    float salary;
};

int main()
{
    struct employee yashraj;
    struct employee japman;
    struct employee piyush;
    yashraj.eId = 1;
    yashraj.favChar = 'c';
    yashraj.salary = 5000000000;
    japman.eId = 2;
    japman.salary = 9000000000;
    piyush.eId = 3;
    piyush.salary = 9000000000;
    cout << japman.salary << endl;
    cout << piyush.eId << endl;
    cout << "the value is " << yashraj.eId << endl;
    cout << "the value is " << yashraj.favChar << endl;
    cout << "the value is " << yashraj.salary << endl;

    return 0;
}
