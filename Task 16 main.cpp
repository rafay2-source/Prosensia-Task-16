#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual void draw() {
        cout << "Drawing a shape..." << endl;
    }
    virtual ~Shape() {} // Virtual destructor
};

// Derived class: Circle
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle 🔵" << endl;
    }
};

// Derived class: Rectangle
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Rectangle 🟥" << endl;
    }
};

// Derived class: Triangle
class Triangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Triangle 🔺" << endl;
    }
};

int main() {
    const int size = 3;
    Shape* shapes[size];

    shapes[0] = new Circle();
    shapes[1] = new Rectangle();
    shapes[2] = new Triangle();

    cout << "🎨 Shape Drawing Simulator\n";
    for (int i = 0; i < size; i++) {
        shapes[i]->draw();
    }

    // Freeing memory
    for (int i = 0; i < size; i++) {
        delete shapes[i];
    }

    return 0;
}
