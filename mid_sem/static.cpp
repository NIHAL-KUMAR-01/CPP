#include<iostream>
using namespace std;

class demo {
    int x;
    int y;
    static int z;

public:
    void getdata();
    void display();
    static int getz();
};

// Initialize the static member variable 'z' outside the class definition
int demo::z ;

void demo::getdata() {
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    z++; // Increment the static member variable 'z' by 1
}

void demo::display() {
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "z: " << z << endl;
}

int demo:: getz(){
    return z;
}

int main() {
    demo d1,d2;
    d1.getdata();
    d1.display();
    d2.getdata();
    d2.display();
    return 0;
}
