#include <iostream>
using namespace std;

class base
{
public:
    virtual void print()
    {
        cout << "print the base class\n";
    }
    void show()
    {
        cout << "show base class\n";
    }
};
class derived : public base
{
public:
    void print()
    {
        cout << "print derived class\n";
    }
    void show()
    {
        cout << "show derived class\n ";
    }
};
int main()
{
    // base a ;
    // a.print() ;
    // a.show();

    base *ptr;
    derived d;
    ptr = &d;

    ptr->print();
    ptr->show();
    return 0;
}