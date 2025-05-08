#include <iostream>
using namespace std;

int main() {
    int arr[] = {23, 45, 12, 67, 89, 34};
    int size = sizeof(arr) / sizeof(arr[0]);
    int largest = arr[0]; 
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout << "Largest number in array: " << largest << endl;
    return 0;
}