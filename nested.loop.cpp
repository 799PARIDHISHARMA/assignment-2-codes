#include <iostream>
using namespace std;

int main() {
    int n;
    
    // Input array size
    cout << "Enter array size: ";
    cin >> n;
    
    // Declare array
    int arr[100];
    
    // Input array elements
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Find and print duplicates
    cout << "Duplicate elements: ";
    bool found = false;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j] && arr[i] != -1) {
                cout << arr[i] << " ";
                found = true;
                // Mark duplicate as processed
                arr[j] = -1;
            }
        }
    }
    
    if(!found) {
        cout << "None";
    }
    cout << endl;
    
    return 0;
}