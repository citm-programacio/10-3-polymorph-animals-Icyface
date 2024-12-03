#include <iostream>
using namespace std;

// Clase base abstracta Animal
class Animal {
public:
    // Método virtual puro (abstracto)
    virtual void speak() const = 0;

    // Destructor virtual para manejo adecuado de memoria
    virtual ~Animal() {}
};

// Clase derivada Dog
class Dog : public Animal {
public:
    // Sobrescribir el método speak()
    void speak() const override {
        cout << "Woof! Woof!" << endl;
    }
};

// Clase derivada Cat
class Cat : public Animal {
public:
    // Sobrescribir el método speak()
    void speak() const override {
        cout << "Meow! Meow!" << endl;
    }
};

int main() {
    // Crear objetos de las clases derivadas
    Dog dog;
    Cat cat;

    // Llamar al método speak() desde los objetos
    cout << "Dog says: ";
    dog.speak();

    cout << "Cat says: ";
    cat.speak();

    return 0;
}
