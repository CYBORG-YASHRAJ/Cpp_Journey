#include <iostream>
using namespace std;
class employee
{ // base class

public:
    int id;
    float salary;
    employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    employee() {} // default constructor
};
// derived class
/*
class {{derived-class-name}}:{{visibility-mode}}{{ base-class-name}}
{
    class members/methods/etc...
}
note:
1. visibility mode is private by default
2. private visibility mode : public memebers of the base class becomes private members of the derived class
3. public visibility mode : public memebers of the base class becomes public members of the derived class
4. private members are never inherited
*/
// creating a programmar class derived from employee base class
// this below class is privately inherited
class programmer : employee
{
public:
    programmer(int inpId)
    {
        id = inpId;
    } // constructor of base class is called first
    int languageCode = 9;
    void getData()
    {
        cout << id << endl;
    } // function of derived class
};
int main()
{
    employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    programmer skillF(1);
    cout << skillF.languageCode << endl;
    skillF.getData();
    // skillF.id;  wont work bcs programmer class is privately inherited
    // cout << skillF.id;
    return 0;
}