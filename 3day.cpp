#include<iostream>
using namespace std;
int glo=9;

void sum(){
    int a;
    cout<<glo<<endl;
}

int main(){
    int glo=12;
    glo=64;
    int a=4,b=6;
    float pi=3.14;
    char c='u';
    bool d=true;
    sum();
    cout<<glo<<d<<endl;
    cout<<"this is lecture 4. \nhere value of a is "<<a<<".\nthis is value of b is "<<b<<endl;
    cout<<"the value of pi is"<<pi;
    cout<<"\nthe value of c is:  "<<c;
    return 0;

}