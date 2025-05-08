#include <iostream>
using namespace std;

int main() {
    int num, original, reversed = 0;
    cout << "Enter a number: ";
    cin >> num; 
    original = num;
    if (num < 0) num = -num;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    if (original == reversed || original == -reversed) {
        cout << original << " is a palindrome" << endl;
    } else {
        cout << original << " is not a palindrome" << endl;
    }
    return 0;
}