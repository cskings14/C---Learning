#include <iostream>
#include <set>
#include <string>
using namespace std;

// a set is an ordered list of unique elements
int main() {
    set<string> sent = {"How", "are", "you", "doing"}; 
    sent.insert("today?"); // adds today?
    sent.erase("you"); // erases you if present in the set

    for (auto i = sent.begin(); i != sent.end(); ++i) {
        cout << *i << " ";
    }

}
