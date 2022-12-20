#include <iostream>
#include <string>
using namespace std;

int main() {
    int input;
    while (input < 1 || input > 10) {
        cout << "Type a number from 1 to 10\n";
        cin >> input;
    }
}