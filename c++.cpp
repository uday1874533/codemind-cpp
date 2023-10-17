#include <bits/stdc++.h>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

// Derived class inheriting from Animal
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking." << endl;
    }
};

int main() {
    // Create an instance of the Dog class
    Dog myDog;

    // Call methods from both base and derived classes
    myDog.eat();  // Inherited from Animal
    myDog.bark(); // Defined in Dog

    return 0;
}
