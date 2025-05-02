#include<iostream>
using namespace std;
#define PI 3.141592
double Area(double r){
    double area;
    area =PI * r * r; 
    return area;
}
int main()
{
    double r;
    cout<<"enter value of r: ";
    cin>>r;
    double output = Area(r);
    cout<<"area of circle is: "<<output;
    return 0;
}