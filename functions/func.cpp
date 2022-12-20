#include <iostream>
using namespace std;

// b has a default value of 0 if there is nothing to multiply
int multiply(int a, int b = 1) 
{
    return a * b;
}

void hi()
{
    cout << "\nhi\n" << endl;
}

void swap(int &x, int &y) { // when primitive types are passed to a function as an argument, they end up being copies. We need to get the reference
    int temp = x;
    x = y;
    y = temp;
}

void pointSwap(int *x, int *y) { // when primitive types are passed to a function as an argument, they end up being copies. We need to get the pointers if the argument is a reference.
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int res = multiply(4, 5);
    cout << res;
    hi();


    int num1 = 3;
    int num2 = 4;
    
    swap(num1, num2);
    cout << "num1 is " << num1 << " and num2 is " << num2 << "\n";
    pointSwap(&num1, &num2);
    cout << "num1 is " << num1 << " and num2 is " << num2 << "\n";
}