#include <iostream> 
using namespace std; 
class dist1
{
public:
float m, cm;
// Method to get the distance input in meters and centimeters 
void getdata()
{
cout << "Enter the distance in m : "; cin >> m;
cout << "Enter the distance in cm : "; cin >> cm;
}

// Method to display the distance 
void getdist()
{
cout << "Value after overloading : " << m << " m " << cm << " cm " << endl;
}

friend void operator++(dist1 &);
friend dist1 operator+(dist1 &, dist1 &);
// Declare destructor for dist1 class
~dist1() {}
};

// Definition of operator++ as a friend function of dist1 class 
void operator++(dist1 &t)
{
t.m = t.m + 2; t.cm = t.cm + 2;
}

dist1 operator+(dist1 &d1, dist1 &d2)
 
{
dist1 d3;
d3.m = d1.m + d2.m; d3.cm = d1.cm + d2.cm;

return d3;
}

// Main function 
int main()
{
// Create objects of dist1 class 
dist1 di1, di2, di3;
// Get the input for di1 and di2 objects 
di1.getdata();
di2.getdata(); di3 = di1 + di2;
// Display the sum of distances 
di3.getdist();

// Increment the distance in di1 object by 2 meters and 2 centimeters
++di1;

di1.getdist(); return 0;
}
