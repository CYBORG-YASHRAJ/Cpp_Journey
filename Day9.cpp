/**
 * The function takes user input for age and uses if-else ladder to determine party eligibility,
 * followed by a switch case statement to print messages based on the age entered.
 *
 * @return The program will return 0 as the final output.
 */
#include <iostream>
using namespace std;
int main()
{ // if else ladder
    int age;
    cout << "enter your age";
    cin >> age;
    if ((age < 18) && (age > 0))
    {
        cout << "you can not come to my party";
    }
    else if (age == 18)
    {
        cout << "you are a kid ,you will have kid pass";
    }
    else if (age < 1)
    {
        cout << "you are not born yet";
    }
    else
    {
        cout << "you can come to my the party";
    }
    cout << endl;
    // SWITCH CASE STATEMENTS
    switch (age)
    {
    case 18:
        /* code */
        cout << "you are 18";
        break;

    case 22:
        /* code */
        cout << "you are 22" << endl;
        break;

    case 2:
        /* code */
        cout << "you are 2" << endl;
        break;

    default:
        cout << "no special case" << endl;
        break;
    }
    cout << "done with switch case";
    return 0;
}