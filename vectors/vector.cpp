#include <iostream>
#include <vector>
#include <string>
using namespace std;

// vectors are wrapped arrays that can change their size
int main() {

    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vec[0] = 0;
    vec.push_back(10); // adds 10 to the end

    cout << "vec.size() = " << vec.size() << endl; // size is how many elements there currently are
    cout << vec.capacity() << endl; // this size whether an element is there or not


    cout << vec.front() << endl; // prints the 0th index
    cout << vec.back() << endl; // prints the last element

    vec.pop_back(); // takes out the last element

    vec.insert(vec.begin() + 2, 82); // adds to the second index

    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
}