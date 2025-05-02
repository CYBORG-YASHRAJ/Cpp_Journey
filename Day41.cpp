#include <iostream>
using namespace std;
class base
{
protected:
    int a;

private:
    int b;
};
/*
for a protected member:
                    Public derivation   private derivation  protected derivation
        Private     Not inherited      Not inherited      Not inherited
        Protected   Protected          Not inherited      protected
        Public      public             Private            Protected
*/
class derived : private base
{
};
int main()
{
    base b;
    derived d;
    cout << d.a;
    return 0;
}