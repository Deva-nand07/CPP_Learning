//                         We will learn about C++ Storage Class
#include <iostream>
using namespace std;

int x;
extern int x;

int main()
{
    // It describes characterstics of variables/function. It determines Lifetime, Visibility(Scope), Default value and Storage Location. storage class is used to specify storage class for a variable.
    // Syntax: storage_class var_datatype var_name;
    // There are six types of storage classes

    auto a = 10;
    auto c = 'd'; // 1. Auto Storage Class or default storage class
    int b = 45;
    cout << "Auto class values " << a << " " << b << " " << c << endl;

    // 2. External Storage Class:- external storage class simplly tells that a variable is defined elsewhere but not within the same block. External variable is nothing but a global variable, intialised with some legal value where it is declared in order to use else where. The main purpose of using external variables is they can be used between two different files which is part of a large program.
    // ==> Note:- It does not create any variable, but it informs compiler of its existence.
    cout << "Value of External storage class is " << x << endl;

    // 3. Static Storage Class:- used to create static variable, they have property to preserve their values even they are out of scope.
    static int no1 = 20;
    cout << "Value of Static Storage Class is " << no1 << endl;

    // 4. Register Storage Classs:- used to declare register variables it have same functionality as auto variables The only differncce is that the compiler tries to store these variables into registers of micro processor if register is availabe. If free register is not available then these variable is stored in memory only.
    register int no2 = 40;
    no2 += 10;
    cout << "Value of Register Storage Class is " << no2 << endl;

    // 5. Mutable Storage class            (Do grom gfg)
    // 6. Thread Local storage class

    return 0;
}