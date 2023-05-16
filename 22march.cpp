#include <iostream>
using namespace std;
class customer
{
protected:
    string name, address, DOB,PAN;
    int  pin_code;
    public:
    customer()
    {
        cout << "enter the name";
        cin >> name;
        cout << "enter the address";
        cin >> address;
        cout << "enter the DOB";
        cin >> DOB;
        cout << "enter the PAN";
        cin >> PAN;
        cout << "enter the pin_code";
        cin >> pin_code;
    }
    void get()
    {
        cout << "the name is" << name << endl
             << "the address is" << address << endl
             << "the DOB is" << DOB <<endl<< "the PAN is" << PAN<<endl << "the pin_code" << pin_code;
    }
};
class account{
      protected:
      int account_no;
       string account_name ;
};
int main()
{
 customer c1 ;
c1.get();
    return 0;
}