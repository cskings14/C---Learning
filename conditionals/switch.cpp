#include <iostream>
#include <string>
using namespace std;

int main() {
    int x = 2;

    switch (x + 1) {
        case 1:
            cout << "1" << endl;
            break;
        
        case 2:
            cout << "2" << endl;
            break;
        
        case 3:
            cout << "3" << endl;
            break;

        default:
            cout << "default" << endl;
            break;

    }

}