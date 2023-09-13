#include <iostream>

class MyClass {
public:
    int dataMember = 42;
};

int main() {
    MyClass obj;
    MyClass* objPtr = &obj;

    // Declare a pointer to a data member of MyClass
    int MyClass::*dataMemberPtr = &MyClass::dataMember;

    // Access the data member using the pointer
    int data = obj.*dataMemberPtr;

    // Print the value of the data member
    std::cout << "Data member value: " << data ;

    return 0;
}