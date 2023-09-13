#include <iostream>
using namespace std;

class MyClass {
public:
    int value;

    // Function to initialize the value
    void initializeValue(int v) {
        value = v;
    }

    // Function to modify the value using call by reference
    void modifyValue(int &newValue) {
        value = newValue;
    }
};

int main() {
    MyClass obj;
    int originalValue = 10;

    obj.initializeValue(originalValue);

    cout << "Original Value: " << obj.value << endl;

    int newValue = 20;
    obj.modifyValue(newValue);

    cout << "Modified Value: " << obj.value << endl;

    return 0;
}
