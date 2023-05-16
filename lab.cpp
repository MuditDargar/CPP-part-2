#include <iostream>
 using namespace std;

int main(int argc, const char * argv[]) {

int var = 20; // declare an integer variable named var, and initialize it to 20

int* ptr;	// declare a pointer variable named ptr, which can point to an integer
 
ptr = &var;	// assign the address of var to ptr

// print the values of var, ptr, and the value pointed to by ptr using cout statements cout << "value at ptr = " << ptr << "\n";
cout << "value at var = " << var << "\n"; cout << "value at *ptr = " << *ptr << "\n";

return 0;
}

