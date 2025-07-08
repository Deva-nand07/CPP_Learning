#include <iostream>
#include <iomanip>
#include <ios>
#include <string>
using namespace std;
int main()
{
    // Manipulators without argument
    char str[20];
    cout << "Using Whitespace manipulators " << endl;
    cout << "Enter the value of string :";
    cin >> ws; // ws manipulator ignores leading whitespace characters
    cin.getline(str, 20);
    cout << "The given string is :" << str << endl;          // endl is a manipulator without argument
    cout << "The given string is :" << str << ends << endl;  // ends manipulator
    cout << "The given string is :" << str << flush << endl; // flush manipulator
    cerr << "This is an error :" << str << endl;             // cerr is used to print error messages
    cout << "\nnew line" << endl;

    // Manipulators with argument

    // Important manipulators in <iomanip>
    float n = 45.759;
    cout << "the value of n : " << n << endl;
    cout << "the value of n : " << setw(10) << n << endl;
    cout << "the value of n : " << setfill('#') << setw(20) << n << endl;
    cout << "the value of n : " << setfill('~') << setw(16) << n << setfill('~') << setw(15) << "~" << endl;
    cout << "the value of n : " << setprecision(2) << n << endl;
    cout << "the value of n with setiing base : " << setbase(16) << int(n) << endl;
    cout << endl;

    // Manipulators in <ios>
    cout << "the value of n : " << n << endl;
    cout << "the value of n with +ve sign: " << showpos << n << endl;
    cout << "the value of n without +ve sign : " << noshowpos << n << endl;
    cout << "the value of base of n : " << hex << showbase << int(n) << endl;
    cout << "the value of n : " << uppercase << 0x1a9 << endl;
    cout << "the value of n : " << nouppercase << 0X1ADEEF8 << endl;
    cout << "the hex value of n : " << hex << int(n) << endl;
    cout << "the oct value of n : " << oct << int(n) << endl;
    return 0;
}