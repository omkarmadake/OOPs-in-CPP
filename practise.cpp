#include <iostream>

template <typename T, size_t N>
void printArray(const T (&arr)[N]) {
    for (size_t i = 0; i < N; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    printArray(intArray);

    double doubleArray[] = {1.1, 2.2, 3.3};
    printArray(doubleArray);

    return 0;
}
