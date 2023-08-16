// #include <iostream>
// using namespace std;

// class ArrayWrapper {
// private:
//     int* arr;
//     int size;

// public:
//     ArrayWrapper(int sz) : size(sz) {
//         arr = new int[size];
//         for (int i = 0; i < size; i++) {
//             arr[i] = i;
//         }
//     }

//     // Shallow copy constructor
//     ArrayWrapper(const ArrayWrapper& other) {
//         size = other.size;
//         arr = other.arr; // Shallow copy - both objects will point to the same memory
//     }

//     void print() {
//         for (int i = 0; i < size; i++) {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }

//     // Destructor to release dynamically allocated memory
//     ~ArrayWrapper() {
//         delete[] arr;
//     }
// };

// int main() {
//     ArrayWrapper originalArray(5);
//     originalArray.print(); // Output: 0 1 2 3 4

//     // Create a shallow copy using the copy constructor
//     ArrayWrapper shallowCopyArray(originalArray);
//     shallowCopyArray.print(); // Output: 0 1 2 3 4

//     // Modify the original array
//     for (int i = 0; i < 5; i++) {
//         originalArray [i] = 10 + i;
//     }

//     originalArray.print();       // Output: 10 11 12 13 14
//     shallowCopyArray.print();    // Output: 10 11 12 13 14

//     return 0;
// }
