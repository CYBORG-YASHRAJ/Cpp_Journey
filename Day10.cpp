#include <iostream>
using namespace std;
int main()
{
    /*loops in C++:
    there are three types of loops in c++:
    1. For loop
    2. While loop
    3. do-While loop
     */

    /*For loop in c++*/
    /*syntax of for loop
    for(initialization;condition;updation)
    {
        loop body(C++ code);
    }*/

    for (int i = 1; i <= 40; i++)
    {
        /* code */
        cout << i << endl;
    }

    // example of infinite loop using for loop
    // for (int i = 0; 20 < 40; i++)
    // {
    //     /* code */
    //     cout << i << endl;
    // }

    cout << endl;

    /*While loop in c++
    Syntax of while statement
    while(condition)
    {
        C++ statement;
    }*/

    int i = 1;
    while (i <= 40)
    {
        cout << i << endl;
        i++;
    }

    // infinite loop in c++
    /*
    int i =1
    while(true){
        cout<<i<<endl;
        i++;
    }
    */

    // do while loop in c++
    /*
    do{
        C++ statement
    }while (condition)*/
    int j = 1;
    do
    {
        cout << j << endl;
        j++;
        /* code */
    } while (j <= 40);

    return 0;
}
