#include <iostream>
#include <string>
using namespace std;

// a pointer is a variable that stores the memory address of a variable
// pointers can point to another pointer
// pointers can also be null
int main() {
    int x = 45;
    int *y = &x;

    cout << *y << endl; // this prints out the value of the variable that it points to
    cout << y << endl; // this prints out the memory address of the variable
}