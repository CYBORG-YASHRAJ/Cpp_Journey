#include <iostream>
#include <cmath>
using namespace std;
class point
{
    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displayPoint()
    {
        cout << "The point is (" << x << "," << y << ")" << endl;
    }
    void distance();
    friend void distance(point p1, point p2);
};
void distance(point p1, point p2)
{
    cout << "The distance between the points is " << sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2)) << endl;
}

int main()
{
    point p(1, 2);
    p.displayPoint();
    point q(4, 6);
    distance(p, q);
    void distance(point p, point pq);
    return 0;
}
