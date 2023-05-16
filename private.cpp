#include <iostream> 
using namespace std;

// Define a circle class 
class circle {

private:
int radius;

public:
// methods to set the radius of the circle
 void setradius(int r){
 
radius = r;
}

// Method to calculate the area of the circle 
int area() {
return 3.14*radius*radius;
}
};

int main(){
// Create a circle object
 circle r1;

// Set the height and width of the circle using the setter methods 
 r1.setradius(5);

// Calculate the area of the circle using the area() method and print it 
cout<< "Require area is: " << r1.area() << endl;

return 0;
}
