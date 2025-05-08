#include <iostream>
using namespace std;
int main() {
    int evensum = 0, oddsum = 0;
    for(int i = 2; i <= 100; i= i+2) {
        evensum= evensum + i;
    }
    for(int i = 1; i <= 100; i= i+2) {
        oddsum= oddsum +i;
    }
    cout << "Sum of even numbers: " << evensum << endl;
    cout << "Sum of odd numbers: " << oddsum << endl;
    return 0;
}