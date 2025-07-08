#include <iostream>
using namespace std;

int no1 = 56, no2 = 67;

// Methods of defining a constant
#define pi 3.14;      // defining constant using #define preprocessor
const float k = 1.19; // defining constant using const keyword
enum Vars
{
    var = 42
}; // defining constant using enum keyword

int main()
{
    // we study about constant and various of declaring a constant
    cout << "Value of pie is :" << pi;
    cout << "\nValue of k is :" << k << endl;
    cout << "Value of var is :" << var << endl;
    cout << endl;

    // we will learn about operators in this program

    // 1. Arithmatic operators : used to perform mathematical calculations on operands
    //(i)Binary operator: works on two operand such as (+,-,*,/,%)
    //(ii)Uranry operator: works single operand such as increment and decrement
    cout << "Adittion " << no1 + no2 << " Substraction " << no1 - no2 << " Multiplication " << no1 * no2 << " Division " << no1 / no2 << " Modulo " << no1 % no2 << endl;
    cout << "Pre increment " << ++no1;
    cout << "\nPost decrement" << no2-- << endl;
    cout << endl;

    // 2.Relational Operator: They are used for comparing two operands
    cout << "==(equal to), >=(greater then or equal), <=(less then or equal) " << endl;
    cout << endl;

    // 3.Logical Operator: They are used to combine to two conditions together
    cout << "logiacal_And(&&), logical_Or(||), logical_NOt(!)" << endl;
    cout << endl;

    // 4.Bitwise operators : They are used to perform bit level calculations or operations on operands
    cout << " AND(&), OR(|), NOT(~), XOR(^), Bitwise left_Shift(<<), Bitwise Right_Shift(>>)" << endl;
    // << gives multiple with 2 for any number ( some times fails for negative number and INT_MAX or edge values)
    // >> gives division with 2 for any number (but -ve number behavior depends upoun compiler)
    cout << "Bitwise Operators " << endl;
    int a = 5, b = 3;
    cout << "The value of a&b : " << (a & b) << endl;
    cout << "The value of a|b : " << (a | b) << endl;
    cout << "The value of a^b : " << (a ^ b) << endl;
    cout << "The value of ~a, ~b: " << (~a) << " " << (~b) << endl;
    cout << "The value of a<<1 : " << (a << 1) << endl;
    cout << "The value of b<<5 : " << (b << 5) << endl;
    cout << "The value of a>>2 : " << (a >> 2) << endl;
    cout << "The value of b>>7 : " << (b >> 7) << endl;
    cout << endl;

    // 5.Assignment Oeprators:They are used to assigning values to variables
    no1 = no2, cout << "Simple Assignment " << no1 << endl;
    no1 += no2, cout << "Addition Assignment " << no1 << endl;
    no1 -= no2, cout << "Substraction Assignment " << no1 << endl;
    cout << endl;

    // 6.Other Operators:-
    /* size_of Operator (sizeof())
    Comma Operator (,)
    Conditional Operator or ternery (?)
    Scope Resolution Operator (::)
    */
    return 0;
}