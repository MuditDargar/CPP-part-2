#include <iostream> 
using namespace std;
 int sum(int a, int b)
{
int sum = a + b;
 return sum;
}
int main()
{
int a, b;
cin >> a >> b;
int sume = sum(a,b);
cout <<endl<<a<<endl<<b<<endl<<sume;
 return 0;
}
