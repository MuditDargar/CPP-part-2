#include <iostream> 
using namespace std;

// Global variable that is used to store the area 
int area = 1;

// First version of the overloaded function that takes two integer arguments and calculates their area
void overload(int a, int b){
area = a * b; // area the two integer arguments and storing the result in the global variable
 cout << "area using 1st function is: " << area << "\n"; // displaying the result
}

// Second version of the overloaded function that takes three integer arguments and calculates their area
void overload(int a, int b, int c){
area = a * b * c; // area the three integer arguments and storing the result in the global variable
 cout << "area using 2nd function is: " << area << "\n"; // displaying the result
}

// Main function for the program 
int main(){
overload(6, 4); // calling the first version of the overloaded function with two integer arguments
 
overload(4, 5, 8); // calling the second version of the overloaded function with three integer arguments

return 0;
}
