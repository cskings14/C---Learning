#include <iostream>
#include <string>
using namespace std;


// a refererence is just a variable that has the value of another variable
// you can't have a null reference
// a reference can't change their reference
// an alias is just the name of the reference variable

int main() {
    int a = 45;
    int c = a; // this copies the starting value of a. It does not refer to it.
    int &b = a; // if we change b, we change a as well
    a = 24; // I am now changing a which also changes b but not c.

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
}