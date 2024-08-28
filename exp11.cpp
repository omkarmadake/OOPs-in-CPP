#include <iostream>
#include <vector>
template <typename T>
class GenericVector {
private:
    std::vector<T> elements;
public:
    GenericVector(int size) {
        // Constructor to create a vector with the given size
        elements.resize(size, T());
    }
    void modifyElement(int index, T value) {
        // Modify the value of the element at the given index
        if (index >= 0 && index < elements.size()) {
            elements[index] = value;
        } else {
            std::cout << "Index out of range." << std::endl;
        }
    } 

    void multiplyByScalar(T scalar) {
        // Multiply each element of the vector by a scalar value
        for (int i = 0; i < elements.size(); ++i) {
            elements[i] *= scalar;
        }
    }

    void displayVector() {
        // Display the vector
        std::cout << "Vector: [ ";
        for (const T& element : elements) {
            std::cout << element << " ";
        }
        std::cout << "]" << std::endl;
    }
};

int main() {
    // Example Usage:
    // Creating a vector of size 5 with int elements
    GenericVector<int> myVector(5);

    // Displaying the initial vector
    myVector.displayVector();

    // Modifying the value of the element at index 2
    myVector.modifyElement(2, 10);

    // Displaying the vector after modification
    myVector.displayVector();

    // Multiplying the vector by a scalar value (e.g., 2)
    myVector.multiplyByScalar(2);

    // Displaying the vector after multiplication
    myVector.displayVector();

    return 0;
}
