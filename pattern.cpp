#include <iostream>
using namespace std;

int main() {
    int rows;
    
    // Input number of rows
    cout << "Enter number of rows: ";
    cin >> rows;
    
    // Print pyramid pattern
    for(int i = 1; i <= rows; i++) {
        // Print spaces
        for(int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        // Print stars
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}