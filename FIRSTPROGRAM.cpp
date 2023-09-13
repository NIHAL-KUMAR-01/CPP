#include <iostream>
using namespace std;

int awr(int a, int b){ //Argument and return
    return a+b;
}

int war(){ // Without argument and return
    int a,b;

    cout << "\nEnter value of a = ";
    cin >> a;

    cout << "Enter value of b = ";
    cin >> b;

    return a+b;
}

void awnr(int a, int b){ // Argument without return value
    cout << "\nSum = " << a+b;
}

void wanr(){
    int a,b;

    cout << "\nEnter value of a = ";
    cin >> a;

    cout << "Enter value of b = ";
    cin >> b;

    cout << "Sum = " << a+b;
}

int main() {
    // Argument with return
    cout << "Sum = " << awr(15,20) << "\n";

    // No argument with return
    int result = war();
    cout << "\nSum = " << result;

    // Argument with no return
    awnr(15,20);

    // No argument No Return
    wanr();
    return 0;
}