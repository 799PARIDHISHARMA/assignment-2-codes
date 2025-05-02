#include <iostream>
using namespace std;
// Overloaded function to find maximum of two numbers
int max(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}
// Overloaded function to find maximum of three numbers
int max(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    }
    if (b >= a && b >= c) {
        return b;
    }
    return c;
}
int main() {
    // Test maximum of two numbers
    int x = 10, y = 25;
    cout << "Maximum of " << x << " and " << y << " is: " << max(x, y) << endl;

    // Test maximum of three numbers
    int p = 15, q = 8, r = 20;
    cout << "Maximum of " << p << ", " << q << ", and " << r << " is: " << max(p, q, r) << endl;

    // Test with negative numbers
    int a = -5, b = -10, c = -2;
    cout << "Maximum of " << a << ", " << b << ", and " << c << " is: " << max(a, b, c) << endl;

    // Test with equal numbers
    int e = 7, f = 7, g = 7;
    cout << "Maximum of " << e << ", " << f << ", and " << g << " is: " << max(e, f, g) << endl;

    return 0;
}