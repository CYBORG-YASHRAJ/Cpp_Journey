#include <iostream>
using namespace std;
class student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(int);
};
void student::set_roll_number(int r)
{
    roll_number = r;
}
void student::get_roll_number(int r)
{
    cout << "Roll number is: " << roll_number << endl;
}
class exam : public student
{
protected:
    float physics;
    float maths;

public:
    void set_marks(float, float);
    void get_marks();
};
void exam::set_marks(float m1, float m2)
{
    physics = m1;
    maths = m2;
}
void exam::get_marks()
{
    cout << "Physics marks: " << physics << endl;
    cout << "Maths marks: " << maths << endl;
}
class result : public exam
{
protected:
    float percentage;

public:
    void display_result()
    {
        get_roll_number(roll_number);
        get_marks();
        cout << "Your percentage is: " << (physics + maths) / 2 << endl;
    }
};
int main()
{
    result yashraj;
    yashraj.set_roll_number(101);
    yashraj.set_marks(95.0, 90.0);
    yashraj.display_result();
    return 0;
}
/*
1. if we are inherting B from A and C from B then C will have access to all the members of A and B.
2. Ais the base class for B and B is base class for C.
3.A-->B-->C is called inhertance path
*/