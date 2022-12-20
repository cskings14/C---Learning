#include <string>
#include <iostream>
#include <tuple>
using namespace std;

int main() {
    tuple <int, string> me = make_tuple(19, "Christian");
    tuple <int, string>you = make_tuple(86, "Old Man");
    me.swap(you); // switches the values of the variables
    cout << get<0>(me) << endl;
    cout << get<1>(me) << endl;


    int x;
    string y;
    tie(x, y) = you; // assigns x with the 0th index of you and y with the 1st index of you
    cout << x << " " << y << endl;

    auto us = tuple_cat(me, you); // makes a tuple called us that has four variables. Auto automatically finds the type of the variable
    
    cout << get<0>(us) << endl;
    cout << get<1>(us) << endl;
    cout << get<2>(us) << endl;
    cout << get<3>(us) << endl;


    
}