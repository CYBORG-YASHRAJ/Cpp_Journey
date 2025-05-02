#include <iostream>
using namespace std;
class bankdeposit
{
    int principal;
    int years;
    float interestRate;
    float returnvalue;

public:
    bankdeposit() {}
    bankdeposit(int p, int y, float r); // r can be a value like 0.04
    bankdeposit(int p, int y, int r);   // r can be a value like 14
    void show();
};
bankdeposit::bankdeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestRate);
    }
}
bankdeposit::bankdeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r) / 100;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestRate);
    }
}
void bankdeposit::show()
{
    cout << "Principal amount was " << principal << endl
         << "return value after" << years << "is" << returnvalue << endl;
}
int main()
{
    bankdeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    cout << "enter the value of p y and r" << endl;
    bd3 = bankdeposit();
    bd3.show();

    cin >> p >> y >> r;
    bd1 = bankdeposit(p, y, r);
    bd1.show();

    cout << "enter the value of p y and R" << endl;
    cin >> p >> y >> R;
    bd2 = bankdeposit(p, y, R);
    bd2.show();

    return 0;
}