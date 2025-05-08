#include <iostream>
using namespace std;
int main() {
    cout << "Prime numbers between 1 and 100: ";
    
    for (int num = 2; num <= 100; num++) {
        int divisors = 0;
        for (int i = 1; i <= num; i++) {
            if (num % i == 0) {
                divisors++;
            }
        }
        if (divisors == 2) {
            cout << num << " ";
        }
    }
    cout << endl;
    return 0;
}