#include <iostream>
using namespace std;
int main() {
    int number;
    cout<<"enter a number"<<endl;
    cin>>number;
    int reversed = 0;
    while (number > 0) {
        int digit = number % 10; 
        reversed = reversed * 10 + digit; 
        number = number / 10; 
    }
    cout << "Reversed number: " << reversed << endl;
    return 0;
}