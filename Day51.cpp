#include <iostream>
using namespace std;
class complex
{
    int real, imaginary;

public:
    void getData()
    {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }
    void set_Data(int r, int i)
    {
        real = r;
        imaginary = i;
    }
};
int main()
{
    // complex c1;
    // complex *ptr = &c1;
    complex *ptr = new complex;
    //(*ptr).set_Data(1, 54);//is exactly same as
    ptr->set_Data(1, 54);
    //(*ptr).getData(); // is good as
    ptr->getData();

    // array of objects
    complex *ptr = new complex[4];
    ptr->set_Data(1, 54);
    ptr->getData();
    return 0;
}