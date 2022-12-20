#include <iostream>
#include <string>
using namespace std;

int main() {
    int x = 53;

    if (x >= 52) {
        if (x == 52) {
            cout << "this number is 52";
        }
        else if (x == 53) {
            cout << "this number is 53";
        }
        else {
            cout << "this number is greater than 53";
        }
    }

    return 0;
}
// fairly basic; just like any other language