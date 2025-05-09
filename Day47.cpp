#include <iostream>
using namespace std;
/*
student-->test[Done]
student-->sports
test-->result
sports-->result

*/
class student
{
protected:
    int roll_number;

public:
    void set_roll_number(int r)
    {
        roll_number = r;
    }
    void get_roll_number()
    {
        cout << "Roll number is: " << roll_number << endl;
    }
};
class test : virtual public student
{
protected:
    float physics;
    float maths;

public:
    void set_marks(float m1, float m2)
    {
        physics = m1;
        maths = m2;
    }
    void get_marks()
    {
        cout << "Physics marks: " << physics << endl;
        cout << "Maths marks: " << maths << endl;
    }
};
class sports : virtual public student
{
protected:
    float score;

public:
    void set_score(float s)
    {
        score = s;
    }
    void get_score()
    {
        cout << "Score in sports: " << score << endl;
    }
};
class result : public test, public sports
{
protected:
    float total;

public:
    void display_result()
    {
        get_roll_number();
        get_marks();
        get_score();
        cout << "Your total is: " << (physics + maths + score) << endl;
    }
};
int main()
{
    result yashraj;
    yashraj.set_roll_number(101);
    yashraj.set_marks(95.0, 90.0);
    yashraj.set_score(9.0);
    yashraj.display_result();
    return 0;
}