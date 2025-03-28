// =====================================================================================
// ArrayDecay.cpp // Array Decay
// =====================================================================================

module modern_cpp:array_decay;

namespace ArrayDecay {

    static void displayValue(int* p) {
        std::cout << "New size of array by passing the value : ";
        std::cout << sizeof(p) << std::endl;
    }

    static void displayPointer(int(*p)[10]) {
        std::cout << "New size of array by passing the pointer : ";
        std::cout << sizeof(p) << std::endl;
    }

    const int n = 10;

    static void displayReference(int(&p)[n]) {
        std::cout << "New size of array by passing reference: ";

        p[5] = 99;

        std::cout << sizeof(p) << std::endl;
    }

    static void test_01 () {

        int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
        std::cout << "Actual size of array is : ";
        std::cout << sizeof(arr) << std::endl;

        displayValue(arr);
        displayPointer(&arr);
        displayReference(arr);

        for (int elem : arr) {
            std::cout << elem << ' ';
        }
    }
}

void main_array_decay()
{
    using namespace ArrayDecay;
    test_01();
}

// =====================================================================================
// End-of-File
// =====================================================================================
