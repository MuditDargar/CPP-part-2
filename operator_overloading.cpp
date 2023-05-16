#include <iostream> 
using namespace std;

class dist1 {
 private:
float m, cm;

public:
// Constructor to get user input for distance in meters and centimeters
 dist1() {
cout << "Enter the distance in m : "; cin >> m;
cout << "Enter the distance in cm : "; cin >> cm;
}

// Overloading ++ operator
void operator++() {
m = m + 2; cm = cm + 2;
}

// Member
 void getdist() {
cout << "Value after overloading : " << m << " m " << cm << " cm " << endl;
}

// Overloading + operator as a member function to add two distances and display the sum
 void operator+(dist1 obj) {
obj.m = m + obj.m; obj.cm = cm + obj.cm;
cout << "The sum of distance is : " << obj.m << "m" << endl << obj.cm << "cm";
}
};

int main() {
// Creating two objects of dist1 class object di1
 dist1 di1, di2; 
// Overloading ++ operator on 

++di1;
// Displaying the value after operator overloading
 di1.getdist();

// Overloading + operator on object di1 with parameter di2 and displaying the sum of distances di1 + di2;
 
return 0;
}
