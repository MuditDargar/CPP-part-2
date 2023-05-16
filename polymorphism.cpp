#include <iostream> 
#include <cmath>
using namespace std; 
class Shape {
public:
virtual double area() = 0; // pure virtual function
};

class Circle : public Shape { private:
double radius; public:
Circle(double r) { radius = r;
}
double area() {
return M_PI * radius * radius;
}
};
 
class Rectangle : public Shape { private:
double width, height; public:
Rectangle(double w, double h) { width = w;
height = h;
}
double area() {
return width * height;
}
};

int main() { Shape *shape; Circle circle(5);
Rectangle rectangle(4, 6);

// using polymorphism to calculate the area shape = &circle;
cout << "Area of circle: " << shape->area() << endl;

shape = &rectangle;
cout << "Area of rectangle: " << shape->area() << endl;

return 0;
