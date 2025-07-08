/******************   Tye casting    *****************/
#include <iostream>
#include <typeinfo> //This library is used to know data type of a variable
using namespace std;
int main()
{
    // 1. Implicit type Casting or Automatic type conversion
    // Done by compiler
    int a = 'a';
    char ch = 65;
    float f = 'fhr';
    cout << "value of a is   " << a << endl;
    cout << "value of ch is  " << ch << endl;
    cout << "Value of f is   " << f << endl;
    cout << endl;

    // 2. Explicit type conversion or User defined type casting

    // 2(a). Converying by assignment:- done explicitly defining the required
    // type in front of expression in paranthessis also known as forceful casting.
    // Syntax:- (type)expression
    double d = 489.899690;
    cout << "The value of double after int is " << (int)d << endl;
    // cout<<"The value of double after int is "<<d(int)<<endl; this is wrong
    char c;
    double sum = 0;
    cout << "enter a  charcter ";
    cin >> c;
    sum = float(c) + 5;
    cout << "the after converting character into float " << sum << endl;
    // I am changing charcter into float you can convert it any data type
    // but accordig to rules

    // 2(b). Coversion using operator
    /*
    a. Static cast
    b. Const cast
    c. Dynamic Cast
    d. Reinterpret Cast
    */
    // Static type casting
    int num = 10;
    cout << "Value after static type castig " << static_cast<double>(num) << endl;
    cout << "Type of static cast variable after  " << typeid(static_cast<double>(num)).name() << endl;
    cout << "Type of static cast variable before " << typeid(static_cast<int>(num)).name() << endl;
    cout << endl;

    // dynamic cast
    class Animal
    { // Base class
    public:
        virtual void speak() const
        { // virtual method mean it can override
            cout << "Animal speaks" << endl;
        }
    };
    class Dog : public Animal
    { // Derived class
    public:
        void speak() const override
        { // virtual method can override here
            cout << "Dog barks" << endl;
        }
    };
    class Cat : public Animal
    { // Derived class
    public:
        void speak() const override
        {
            cout << "Cat meows" << endl;
        }
    };
    // Base class pointer to derived class object
    Animal *animalPtr = new Dog(); // creates new object 'Dog'and assign to a pointer of Animal
    Dog *dogPtr = dynamic_cast<Dog *>(animalPtr);
    if (dogPtr)
    { // checking type casting is  sucessful or not
        dogPtr->speak();
    }
    else
    {
        cout << "Failed to cast Dog\n";
    }

    Cat *catPtr = dynamic_cast<Cat *>(animalPtr);
    if (catPtr)
    { // checking type casting is  sucessful or not
        catPtr->speak();
    }
    else
    {
        cout << "Failed to cast Cat\n";
    }
    delete animalPtr; // Memory management
    return 0;
}
