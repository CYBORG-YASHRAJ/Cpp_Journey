#include <iostream>
using namespace std;
int main()
{
    int marks[4] = {23, 45, 56, 89};
    int mathmarks[4];
    mathmarks[0] = 78;
    mathmarks[1] = 34;
    mathmarks[2] = 67;
    mathmarks[3] = 98;

    // you can change the value of an array
    marks[2] = 455;

    cout << "these are marks" << endl;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;

    cout << endl;
    cout << "these are math marks" << endl;
    cout << mathmarks[0] << endl;
    cout << mathmarks[1] << endl;
    cout << mathmarks[2] << endl;
    cout << mathmarks[3] << endl;

    cout << endl;
    cout << "for loop" << endl;
    for (int i = 0; i < 4; i++)
    {
        /* code */
        cout << "the value of marks" << i << "is" << marks[i] << endl;
    }
    cout << "While loop" << endl;
    int j = 0;
    while (j < 4)
    {
        /* code */
        cout << marks[j] << endl;
        j++;
    }
    cout << "do while loop" << endl;
    int k = 0;
    do
    {
        /* code */
        cout << mathmarks[k] << endl;
        k++;
    } while (k < 4);

    // pointers and array
    int *p = marks;
    cout << "the value of marks[0] is" << *p << endl;
    cout << "the value of marks[1] is" << *(p + 1) << endl;
    cout << "the value of marks[2] is" << *(p + 2) << endl;
    cout << "the value of marks[3] is" << *(p + 3) << endl;
    return 0;
}