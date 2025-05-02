#include <iostream>
#include <string> 
using namespace std;
void print(int value) {
    cout << "Integer: " << value << endl;
}
void print(float value) {
    cout << "Float: " << value << endl;
}
void print(string value) {
    cout << "String: " << value << endl;
}
int main() {
    int num = 42;
    print(num);
    float pi = 3.14f;
    print(pi);
    string message = "Hello";
    print(message);
    print(100);     
    print(2.71f);       
    print("paridhi"); 
    return 0;
}