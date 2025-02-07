#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count; // static variable

public:
    void setdata(void)
    {
        cout << "enter the id:" << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "the id of this employee is: " << id << "and this is employee number" << count << endl;
    }
    static void getcount(void)
    {
        cout << "the value of count is" << count << endl;
    }
};
// count is the static data member of class employee
int employee ::count; // defauly value 0;
int main()
{
    employee yashraj, piyush, japman;
    // yashraj.id=1;
    // yashraj.count=1;//cannot do this as id and count are private
    yashraj.setdata();
    yashraj.getdata();
    employee::getcount();

    piyush.setdata();
    piyush.getdata();
    employee::getcount();

    japman.setdata();
    japman.getdata();
    employee::getcount();
    return 0;
}