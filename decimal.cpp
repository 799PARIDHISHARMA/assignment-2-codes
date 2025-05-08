#include <iostream>
using namespace std;

int main() {
    int num, binary = 0, place = 1;

    cout << "Enter a decimal number: ";
    cin >> num;

    int temp = num;  // store original number for display

    while (num > 0) {
        int rem = num % 2;          // get remainder
        binary = binary + rem * place; // build binary number
        place = place * 10;         // move to next place
        num = num / 2;              // divide number by 2
    }

    cout << "Binary of " << temp << " is: " << binary << endl;

    return 0;
}