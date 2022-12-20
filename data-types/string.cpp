#include <iostream>
#include <string>
using namespace std;

int main() {
    string verse = "But the angel said to her, Do not be afraid, Mary; you have found favor with God.";

    for (int i = 0; i < verse.length(); i++) {
        cout << verse[i] << endl;
    }
}