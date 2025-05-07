#include <iostream>
using namespace std;
int main() {
    int num ;
    cin>>num;
    long long fact = 1; 
    for (int i = 1; i <= num; i++) {
        fact = fact * i;
    }
    cout << "Factorial of " << num << " is: " << fact << endl;
    return 0;
}