#include <iostream>
#include <map>
#include <string>
using namespace std;


/// maps are similar to dictionaries in python
int main() {


map<string, int> age = {
    {"John", 30},
    {"Mary", 20},
    {"Wayne", 65},
    {"Christian", 19}
};

age["John"] = 60;
pair<string, int> jj("JCole", 34);
age.insert(jj); // inserts the pair made above
age.erase("Mary"); // erases a variable with the string value of mary

for (auto i = age.begin(); i != age.end(); i++) { // instead of auto, we can say map<string, int>::iterator i
// this is basically a for loop to iterate through a map
    cout << (*i).first << " " << i->second << "\n"; // we have to dereference i because it is a pointer to the value. They both mean the same
}

if (age.find("Christian") != age.end()) { // checks if a key value equals Christian.
    cout << "Christian found\n";
}




}