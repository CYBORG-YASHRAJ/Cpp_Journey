#include <iostream>
#include <cmath>
using namespace std;
class simplecalculator
{
protected:
    int a, b;

public:
    void getdatasimple()
    {
        cout << "Enter first number: " << endl;
        cin >> a;
        cout << "Enter second number: " << endl;
        cin >> b;
    }
    void performAllOperations()
    {
        cout << "Sum is: " << a + b << endl;
        cout << "Subtraction is: " << a - b << endl;
        cout << "Multiplication is: " << a * b << endl;
        if (b != 0)
        {
            cout << "Division is: " << a / b << endl;
        }
        else
        {
            cout << "Division is not possible (division by zero)." << endl;
        }
    }
};
class scientificcalculator
{
protected:
    int a, b;

public:
    void getdatascientific()
    {
        cout << "Enter first number: " << endl;
        cin >> a;
        cout << "Enter second number: " << endl;
        cin >> b;
    }
    void performScientificOperations()
    {
        cout << "Sin is: " << sin(a) << endl;
        cout << "Cos is: " << cos(a) << endl;
        cout << "Tan is: " << tan(a) << endl;
        if (a > 0)
        {
            cout << "Log is: " << log(a) << endl;
        }
        else
        {
            cout << "Log is not defined for non-positive numbers." << endl;
        }
    }
};
class hybridcalculator : public simplecalculator, public scientificcalculator
{
};
int main()
{
    hybridcalculator yashraj;
    yashraj.getdatasimple();
    yashraj.getdatascientific();
    yashraj.performAllOperations();
    yashraj.performScientificOperations();
    return 0;
}