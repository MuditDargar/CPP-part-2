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
    int (*point_fun)(int , int ) = &sum;
    int sumy = (*point_fun)(a,b);
    cout <<endl<<a<<endl<<b<<endl<<sumy;
    return 0;
}
