#include <iostream>
using namespace std;
int main() {
    int N;
    cout << "Enter the number of even numbers to print: ";
    cin >> N;
    if (N <= 0) {
        cout << "Please enter a positive number." << endl;
        return 1;
    }
    cout << "First " << N << " even numbers: ";
    for (int i = 0, count = 0; count < N; i += 2) {
        cout << i << " ";
        count++;
    }
    cout << endl;
    return 0;
}