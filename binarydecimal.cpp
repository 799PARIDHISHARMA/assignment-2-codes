#include <iostream>
using namespace std;

int main() {
    long long binary; // To handle larger binary numbers
    int decimal = 0, base = 1; // base is power of 2 (1, 2, 4, 8, ...)

    // Input binary number
    cout << "Enter a binary number: ";
    cin >> binary;

    // Convert binary to decimal
    while(binary > 0) {
        int digit = binary % 10; // Get last digit
        if(digit != 0 && digit != 1) {
            cout << "Invalid binary number!" << endl;
            return 1;
        }
        decimal += digit * base; // Add digit * 2^position
        base *= 2; // Move to next power of 2
        binary /= 10; // Remove last digit
    }

    // Output result
    cout << "Decimal equivalent: " << decimal << endl;

    return 0;
}