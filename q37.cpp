#include <iostream>
using namespace std;
inline int cube(int num)
 { 
return num * num * num;
 }
int main()
{ int value;
  cout<<"enter number"<<endl;
  cin>>value;
  cout << "The cube of number is: " << cube(value) << "\n";
  return 0;
}