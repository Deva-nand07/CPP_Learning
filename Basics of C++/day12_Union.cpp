#include<iostream>
using namespace std;

int main(){
    // Union in C++
    // A union is a user-defined data type that allows storing different data types in the same memory location.
    // It is similar to a structure, but only one member can contain a value at any
    union currency
    {
        int dollars;
        float euros;
        double pounds;
    };
    currency money;
    money.dollars = 85; // Assigning value to dollars
    cout << "Dollars: " << money.dollars << endl;
    money.euros = 100.5; // Assigning value to euros (overwrites dollars)
    cout << "Euros: " << money.euros << endl;
    cout<<"Dollars after euros assignment: " << money.dollars << endl; // This will give undefined behavior
    // Note: Accessing euros or pounds after assigning dollars will give undefined behavior
    
    return 0;
}