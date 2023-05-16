#include<iostream>
using namespace std ;
class b{
public:
b(){
    cout<<"constructor base "<<endl;
}
virtual ~b(){
    cout<<"destructor base"<<endl;
}
};
class d : public b {
public:
d(){
    cout<<"constructor derived"<<endl;
}
~d(){
    cout<<"destructor derived"<<endl;
}
};
int main(){
d *derived= new d();
b *ptr =derived ;
delete ptr;

return 0;
}