#include <iostream>
#include <string>
using namespace std;

int main() {
    int x = 10; // x will serve as the size of the array
    int arr[x] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    arr[0] = 1000;
    cout << arr[0] << "\n";
    cout << arr[6];
    cout << sizeof(arr); // prints the size of the array
}