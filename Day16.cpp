// union program

#include <iostream>
using namespace std;
typedef struct employee
{
    /* data */
    int eId;
    char favChar;
    float salary;
} ep;

union money
{
    /* data */
    int rice;     // 4
    char car;     // 1
    float pounds; // 4
};

int main()
{
    // Enum
    enum Meal
    {
        breakfast,
        lunch,
        dinner
    };
    Meal k = breakfast;
    cout << k << endl;
    cout << (k == 2) << endl;

    // ep yashraj;
    union money m1;
    m1.rice = 34;
    m1.car = 'b';
    cout << m1.car << endl;
    cout << m1.rice << endl;
    // ep japman;
    // ep piyush;
    // yashraj.eId = 1;
    // yashraj.favChar = 'c';
    // yashraj.salary = 5000000000;
    // japman.eId = 2;
    // japman.salary = 9000000000;
    // piyush.eId = 3;
    // piyush.salary = 9000000000;
    // cout << japman.salary << endl;
    // cout << piyush.eId << endl;
    // cout << "the value is " << yashraj.eId << endl;
    // cout << "the value is " << yashraj.favChar << endl;
    // cout << "the value is " << yashraj.salary << endl;

    return 0;
}
