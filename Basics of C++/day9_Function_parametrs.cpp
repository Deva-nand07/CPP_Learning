#include <iostream>
using namespace std;

void decrement(int &i)
{ // it will not create a copy of i, it will modify the original variable
    i--;
    cout << "Value during function call: " << i << endl;
}
void printValues(int i)
{ // it will create a copy of i
    i++;
    cout << "Value during function call: " << i << endl;
}
inline int square(int n)
{
    return n * n; // inline function to calculate square of a number
}
int main()
{
    int i;
    cout << "Enter a number: ";
    cin >> i;
    printValues(i);                                     // pass by value
    cout << "Value after function call: " << i << endl; // This will still print the original value of i
    decrement(i);                                       // pass by reference
    cout << "Value after function call: " << i << endl; // This will print the modified value of i
    int n;
    cout << "Enter a number to find its square: ";
    cin >> n;
    cout << "Square of " << n << " is " << square(n) << endl; // calling inline function
    return 0;
}