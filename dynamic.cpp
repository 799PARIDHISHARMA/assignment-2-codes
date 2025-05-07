#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() { cout << "Some sound!" << endl; }
    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    void sound() override { cout << "Woof!" << endl; }
    void wag() { cout << "Wag tail!" << endl; }
};

int main() {
    Animal* a = new Dog();
    Dog* d = dynamic_cast<Dog*>(a);
    if (d) d->wag();
    delete a;
    return 0;
}