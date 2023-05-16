#include <iostream> 
using namespace std;
float area(int x, float base = 0, float hei = 0, float length = 0, float breath = 0, float height = 0, float rad = 0)
{
 
// Check the shape type and calculate area accordingly
 if (x == 1)
{
return length * breath;
}
if (x == 2)
{
return 2 * (length * breath + height * length + height * breath);
}
if (x == 3)
{
return 3.14 * rad * rad;
}
if (x == 4)
{
return 0.5 * (hei * base);
}
}

int main()
{
int x;
float a4, a3, a1, a2;

// Get the shape type from the user
 cin >> x;

// Calculate area based on the shape type 
switch (x)
{
case 1:
{
float l, b;
cout << "Enter the values of lenght and breath : "; cin >> l >> b;
// Call the area function with the necessary parameters a1 = area(x, 0, 0, l, b);
cout << "area = " << a1; break;
}

case 2:
{
float l, b, h;
cout << "Enter the values of lenght and breath and height: "; cin >> l >> b >> h;
// Call the area function with the necessary parameters a2 = area(x, 0, 0, l, b, h);
cout << "area = " << a2; break;
}

case 3:
{
float r;
 
cout << "Enter the values of radius : "; cin >> r;
// Call the area function with the necessary parameters a3 = area(x, 0, 0, 0, 0, 0, r);
cout << "area = " << a3; break;
}

case 4:
{
float b, h;
cout << "Enter the values of base and height: "; cin >> b >> h;
// Call the area function with the necessary parameters a4 = area(x, b, h);
cout << "area = " << a4; break;
}
}

return 0;
}

