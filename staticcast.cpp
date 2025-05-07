#include <iostream>
using namespace std;
int main() {
    // Converting int to double
    int intValue = 42;
    double doubleResult = static_cast<double>(intValue);
    
    cout << "Int to Double:" << endl;
    cout << "Original int: " << intValue << endl;
    cout << "Converted double: " << doubleResult << endl;

    // Converting double to int
    double doubleValue = 3.14159;
    int intResult = static_cast<int>(doubleValue);
    
    cout << "\nDouble to Int:" << endl;
    cout << "Original double: " << doubleValue << endl;
    cout << "Converted int: " << intResult << endl;

    return 0;
}