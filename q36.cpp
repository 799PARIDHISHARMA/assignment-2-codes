#include <iostream>
using namespace std;
inline int square(int num)
 { 
return num * num ;
 }
int main()
{int value;
cout<<"enter number"<<endl;
cin>>value;
cout << "The square of number is: " << square(value) << endl;
return 0;
}