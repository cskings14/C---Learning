#include <iostream> // iostream is a c++ library that includes or has stream classes and methods. With this, ou can do thing like cin (to get an input) or cout (to print)
using namespace std; // a namespace is basically a way to differentiate between variables. If two variables have the same name but are in different files, we should be able to distinguish them. 


int main() { // main is the function with the return type of int
  // cout is the print statement unlike print in C. You then need 2 less than signs
  cout << "Hello World!";
  return 0;
}
// after a function is done, we then compile (just like C).
// I can also type g++ -o runProgram helloworld.cpp
// then just type ./runProgram to run the helloworld.cpp file (it is pretty much the same as C)


// *Every time I change the file, I must recompile for the changes to be made*
// Bash is easier to use than windows powershell just like C :(