#include <iostream>
using namespace std;
#define SQUARE(num) ((num) * (num))
int main() {
    int x;
    cout<<"enter x"<<endl;
    cin>>x;
    cout << "Square of x is "<<SQUARE(x)<<endl;
    return 0;
}