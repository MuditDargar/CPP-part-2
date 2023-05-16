#include <iostream> 
using namespace std;

// Define the square class 
class square{
public :
int side;

};

int main(){
// Create an object of the square class
  square b1;

// Assign values to the member variables of b1
 b1.side = 5;

// Calculate and output the area of square
cout << " area of the square is : " << b1.side * b1.side ;

return 0;
}
