#include <iostream>
using namespace std;
int main() {
    int number;
    cin>>number;
    int i = 1;
    do {
        cout << number << " x " << i << " = " << number * i << endl;
        i++;
    } while (i <= 10);
    return 0;
}