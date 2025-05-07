#include <iostream>
using namespace std;
int main() {
 int a = 65;
 char *ch = reinterpret_cast<char*>(&a);
 cout << "Value of ch: " << *ch << endl; 
 return 0;
}