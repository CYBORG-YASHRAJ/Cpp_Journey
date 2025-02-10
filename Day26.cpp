#include <iostream>
using namespace std;
class employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 120;
        cout << "enter the id of employee";
        cin >> id;
    }
    void getId(void)
    {
        cout << "The id of this employee is " << id << endl;
    }
};
int main()
{
    employee Ar[5];
    for (int i = 0; i < 4; i++)
    {
        Ar[i].setId();
        Ar[i].getId();
    }

    return 0;
}