#include <iostream> 
using namespace std;
// inline function that returns the maximum of two integer values inline 
int Max(int x, int y) {
return (x > y)? x : y; // if x is greater than y, return x, otherwise return y
}

// Main function for the program 
int main() {
cout << "Max (20,10): " << Max(20,10) << endl; // calling the Max() function with x = 20 and y = 10 cout << "Max (-10,10): " << Max(-10,10) << endl; // calling the Max() function with x = -10 and y = 10
cout << "Max (1000,1001): " << Max(1000,1001) << endl; // calling the Max() function with x =1000 and y = 1001

return 0;
}
