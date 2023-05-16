#include <bits/stdc++.h> 
using namespace std;

// This is the base class that has a protected member variable 
class Number{
protected:
int num;// protected member variable

};

class Child : public Number
{
public:
void giveNum(int id){
num = id;// accessing the protected member variable
}
// public member function that displays the value of the protected member variable 
void displayNum(){
 
cout << "Protected number is: " << num << endl;
}
};
int main() {

Child obj1;
// calling the public member function 
obj1.giveNum(81);
obj1.displayNum(); return 0;
}

