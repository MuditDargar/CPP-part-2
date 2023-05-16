#include <iostream> 
using namespace std;

class dist1
{
private:
float m, cm;

public:
// Constructor to input the distance in meters and centimeters
 dist1()
{
cout << "Enter the distance in m : "; cin >> m;
cout << "Enter the distance in cm : ";
 
cin >> cm;
}
friend class sum;
};

class dist2
{
private:
float ft, in;

public:
// Constructor to input the distance in feet and inches
 dist2()
{
cout << "Enter the distance in ft : "; cin >> ft;
cout << "Enter the distance in in : "; cin >> in;
}
friend class sum;
};

class sum
{
float a, b; public:
void su(dist1 &d1, dist2 &d2)
{
d2.ft = d2.ft * 0.3048; // converting feet to meters 
d2.in = d2.in * 2.54; // converting inches to centimeters a = d1.m + d2.ft; // adding the distances in meters
b = d1.cm + d2.in; // adding the distances in centimeters
 cout << "The sum of distance is : " << a << "m" << endl
<< b << "cm";
}
};

int main()
{
dist1 di1; dist2 di2; sum s; s.su(di1, di2); return 0;
}

