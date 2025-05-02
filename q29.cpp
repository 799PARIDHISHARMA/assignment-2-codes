#include<iostream>
using namespace std;
int getMAX(int a,int b,int c);
int main(){
   int a,b,c;
   cout<<"Enter first number: ";
   cin>>a;
   cout<<"Enter second number: ";
   cin>>b;
   cout<<"Enter third number: ";
   cin>>c;
   int output = getMAX(a,b,c);
   cout<<"maximum number is: "<<output;
   return 0;
}
int getMAX(int a, int b,int c){
    int max =a;
    if(b>max)
    max =b;
    if(c>max)
    max =c;
    return max;
}