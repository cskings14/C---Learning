#include <iostream>
#include <string>
using namespace std;

int main() {

    int arr[] =  {0,1,2,3,4,5,6,7};

    for (int i = 0; i < sizeof(arr); i++) { // just like java for loops
        cout << arr[i];
    }

}