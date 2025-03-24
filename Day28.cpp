#include <iostream>
using namespace std;
class employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "enter the id of employee" << endl;
        cin >> id;
    }
    void getId(void)
    {
        cout << "The id of this employee is " << id << endl;
    }
};
int main()
{
    int N;
    cout << "Enter the number of employees" << endl;
    cin >> N;
    employee emp[N];
    for (int i = 0; i < N; i++)
    {
        emp[i].setId();
    }
    for (int i = 0; i < N; i++)
    {
        emp[i].getId();
    }

    return 0;
}