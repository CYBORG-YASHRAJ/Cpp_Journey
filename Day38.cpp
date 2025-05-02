#include <iostream>
using namespace std;
// destructor never takes an argument nor does it return any value
int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "this is the time constructor is called for object " << count << endl;
    }
    ~num()
    {
        cout << "this is the time destructor is called for object " << count << endl;
        count--;
    }
};
int main()
{
    cout << "we are inside main function" << endl;
    cout << "creating first object n1" << endl;
    num n1;
    {
        cout << "entering the block" << endl;
        cout << "creating two more objets" << endl;
        num n2, n3;
        cout << "exiting the block" << endl;
    }
    cout << "back to main function" << endl;
    return 0;
}