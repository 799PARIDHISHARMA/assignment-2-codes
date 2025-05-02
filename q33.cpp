#include<iostream>
using namespace std;
void swap(int &a, int &b){
   int temp=a;
    a=b;
    b=temp;
}
int main(){
int x,y;
cout<<"enter the first number"<<endl;
cin>>x;
cout<<"enter the second number"<<endl;
cin>>y;
cout<<"before swap:x="<< x <<" y="<<y<<endl;
swap(x,y);
cout<<"after swap:x="<< x <<" y="<<y<<endl;
return 0;
}