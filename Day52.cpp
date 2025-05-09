#include <iostream>
using namespace std;
class shopitem
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData(void)
    {
        cout << "Code of this item is " << id << endl;
        cout << "Price of this item is " << price << endl;
    }
};
int main()
{
    int size = 2;
    // int *ptr = new int [34]; // single object

    // 1.genral store item
    // 2. veggie item
    // 3. hardware item
    shopitem *ptr = new shopitem[size]; // array of objects
    shopitem *ptrtemp = ptr;            // pointer to the first object
    int p, q;
    for (int i = 0; i < size; i++)
    {
        cout << "enter Id and price of item" << i + 1 << endl;
        cin >> p >> q;
        ptr->setData(p, q); // set data for each object
        ptr++;
    }
    for (int j = 0; j < size; j++)
    {
        cout << "item number" << j + 1 << endl;
        ptr->getData(); // get data for each object
        ptr++;
    }
    return 0;
}