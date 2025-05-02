#include<iostream>
using namespace std;
void incrementbyten(int &num) {
    num = num + 10;
}
int main() {
    int value;
    cout<<"enter the value"<<endl;
    cin>>value;
    cout << "Before increment: value = " << value << endl;
    incrementbyten(value);
    cout << "After increment: value = " << value << endl;
    return 0;
}