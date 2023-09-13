// C++ program to illustrate concept
// of the constant pointers
#include <iostream>
using namespace std;

// Driver Code
int main()
{

	int a = 100;

	int* const ptr= &a;
	cout << *ptr << "\n";
	cout << ptr << "\n";

	// Address what it points to

	*ptr = 56;

	cout << *ptr << "\n";
	cout << ptr << "\n";

	return 0;
}
