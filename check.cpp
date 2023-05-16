#include <iostream> 
using namespace std;
 class check
{
private:
int x;

friend check();

friend ~check();
};

// Constructor definition
 
check::check()
{
cout << "Constructor"<< endl; cin>>x;
cout<<" x : "<<x<< endl;
}

// Destructor definition
 check::~check()
{
cout << " Destructor called" << endl;
}

// Main function 
int main()
{
check c;

return 0;
}

