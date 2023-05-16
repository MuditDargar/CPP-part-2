#include <iostream> 
using namespace std; 
int sum(int &a, int &b)
{
int sum = a + b; return sum;
}
int main()
{
int a, b;
cin >> a >> b;
int sumy = sum(a, b);
cout <<a<<endl<<b<<endl<<sumy; return 0;
}
