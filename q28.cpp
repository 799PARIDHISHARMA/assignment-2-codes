#include<iostream>
using namespace std;
long  fact(int n);
int main(){
int n;
 cout<<"enter the number: ";
 cin>>n;
 long output= fact(n);
 cout<<"factorial of number is: "<<output;
 return 0;
}
long fact(int n){
 if(n==1 || n==0)
 return 1;
 else
 return n*fact(n-1);
}