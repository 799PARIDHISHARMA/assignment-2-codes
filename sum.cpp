#include <iostream>
using namespace std;

int main() {
    int n;
    double sum = 0.0;

    // Input number of terms
    cout << "Enter number of terms: ";
    cin >> n;
    
    // Calculate sum of harmonic series
    for(int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }
    
    // Output result
    cout << "Sum of harmonic series: " << sum << endl;
    
    return 0;
}