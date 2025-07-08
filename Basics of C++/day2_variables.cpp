// We will study about variables in this program
#include <iostream>
using namespace std;

int pi = 3.14; // this global variable

class cpp
{
public:
    int no1 = 7;    // instance variable
    static int no2; // static variable
    cpp()
    {
        cout << "Enter value of static variable ";
        cin >> no2;
        no2 = no1 + no2;
    }
};
int cpp::no2; // defining refernce of static variables
int main()
{
    // variables are the name given to a memoray location, these are basic unit of storage
    // The value stored in variable can be changed during program execution;
    int age = 18; // this is variable defination  "definition = declaration + initialization"

    // there are mainly three types of variablesin cpp

    // 1. Local variables: a variable declared in block or method
    double pi = 22 / 7; // this is a local variable

    // 2.Instance variable: these are non-static variables declared in class outside any method, consturctor or block
    // we use acess specifier for instance variables, if we dont't specify acess specifier then default acess specifer is used
    // Instance variables can be only acessed by creating objects
    // instance variable is created when object is created and destroyed when object is destroyed

    // 3.Static variables: These variables are also known as class variables, they declared using static keyword inside class outside any method
    // we can have only one copy of static variable per class, which means we can use multiple static variables in a class.
    //  Each static variable will be single instance across all instance of class
    // Initialization is not mandatory, its default value is 0.

    // reference varibles: a reference variable is an alias for another variable

    int a = 489; // this is variable declaration as well as intializaftion
    int &b = a;  // this is a refernce variable(b is refenced to a and a must be initialized)
    int &c = b;  // c is refenced to refence variable b
    int &d = c;
    static int f;

    cout << "the vlaue of a is " << a << endl;
    cout << "the vlaue of b is " << b << endl; 
    cout << "the value of c is " << c << endl;
    cout << "the value of d is " << d << endl;

    cpp obj;
    cout << "value of instance variable is " << obj.no1 << endl;
    cout << "Updated value of static variable is " << cpp::no2 << endl;
    cout << "Default value of a static variable is " << f << endl;

    return 0;
}