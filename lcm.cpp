#include <iostream>
using namespace std;

int main() {
    int a, b, lcm;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    lcm = (a > b) ? a : b;  // start from bigger number

    while (true) {
        if (lcm % a == 0 && lcm % b == 0) {
            cout << "LCM is: " << lcm << endl;
            break;
        }
        lcm++;
    }

    return 0;
}