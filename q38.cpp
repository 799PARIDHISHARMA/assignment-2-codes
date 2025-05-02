#include <iostream>
using namespace std;
inline int add(int a, int b) {
    return a + b;
}
int main() {
int x , y ;
cout<<"enter x"<<endl;
cin>>x;
cout<<"enter y"<<endl;
cin>>y;
cout << "Sum: " << add(x, y) << endl;
return 0;
}