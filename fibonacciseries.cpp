#include <iostream>
using namespace std;
int main() {
    int terms;
    cout << "Enter the number of terms: ";
    cin >> terms;

    int first = 0, second = 1, next;

    if (terms <= 0) {
        cout << "Please enter a positive number of terms." << endl;
    } else if (terms == 1) {
        cout << first << endl;
    } else {
        cout << first << " " << second;
        for (int i = 3; i <= terms; i++) {
            next = first + second;
            cout << " " << next;
            first = second;
            second = next;
        }
        cout << endl;
    }

    return 0;
}
