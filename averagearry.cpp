#include <iostream>
using namespace std;
int main() {
    int arr[] = {1,2,3,4,5,6,7};
    int size = sizeof(arr) / sizeof(arr[0]);
    double sum = 0; 
    for (int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }
    double average = sum / size;

    cout << "Average of numbers in array: " << average << endl;
    return 0;
}