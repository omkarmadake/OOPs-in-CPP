#include <iostream>
using namespace std;

class Box {
public:
    double length;
    double breadth;
    double height;

    // Default constructor
    Box() {
        length = 0.0;
        breadth = 0.0;
        height = 0.0;
    }

    // Parameterized constructor
    Box(double l, double b, double h) {
        length=l;
        breadth=b;
        height=h;
    }

    // Copy constructor
    Box(const Box& b) {
        length = b.length;
        breadth = b.breadth;
        height = b.height;
    }

    double volume() {
        return length * breadth * height;
    }
};

int main() {
    Box box1; // Default constructor
    Box box2(2.0, 3.0, 4.0); // Parameterized constructor
    Box box3 = box1; // Copy constructor

    cout << "Volume of box1: " << box1.volume() << endl;
    cout << "Volume of box2: " << box2.volume() << endl;
    cout << "Volume of box3: " << box3.volume() << endl;

    return 0;
}
