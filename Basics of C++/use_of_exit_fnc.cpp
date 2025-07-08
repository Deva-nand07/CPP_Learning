#include <iostream>
#include <cstdlib> // for exit() function
#include<bits/stdc++.h> // This contains all libraries of C++
using namespace std;

int main()
{
    // exit() function is used to terminate the program immediately
    // it is used to forcefully end a program from anywhere, especially in case of serious errors
    cout << "Before exit " << endl;
    exit(0);
    cout << "This will not print" << endl;
    return 0;
}