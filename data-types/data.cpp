#include <iostream>
#include <string>
using namespace std;

// yay, there are Strings. Did I mention that C is annoying
int main(){
    int s;
    const string statement = "I like the number "; // must be double quotes to instantiate variable
    cin >> s;
    // cout << cin.fail(); // prints 1 if there is a failure in the input and 0 if it is fine
    cin.clear(); // this removes the error flag
    cin.ignore(1000, '\n'); // ignores the error; this needs to be single quotes for a function argument
    return 0;

    

   /* there are more data types like the following
   int a = 7;
   float b = 1.56;
   bool c = false;
   char d = 'a';
   string e = "hello";
   */

}