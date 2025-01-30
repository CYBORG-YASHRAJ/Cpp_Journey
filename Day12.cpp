#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i <= 40; i++)
    {
        /* code */
        if (i == 23)
        {
            break;
        }
        cout << i << endl;
    }

    cout << endl;
    // continue statement
    for (int j = 0; j <= 40; j++)
    {
        /* code */
        if (j == 23)
        {
            continue;
        }
        cout << j << endl;
    }
    return 0;
}