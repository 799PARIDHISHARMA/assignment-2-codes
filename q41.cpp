#include <iostream>
using namespace std;
#define PI 3.1415
double area(double radius) {
    return PI * radius *radius;
}
double area(double length, double width) {
    return length * width; 
}
double area(float base, float height) {
    return 0.5 * base * height; 
}  
int main() {
    double radius = 5.0;
    cout << "Area of circle with radius " << radius<< " is: " << area(radius) << endl;
    double length = 4.0, width = 6.0;
    cout << "Area of rectangle with length " << length << " and width " << width << " is: " << area(length, width) << endl;
    double base = 3.0, height = 8.0;
    cout << "Area of triangle with base " << base << " and height " << height << " is: " << area(base, height) << endl;
    return 0;
}