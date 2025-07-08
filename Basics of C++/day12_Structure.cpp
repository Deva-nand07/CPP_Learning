#include <iostream>
using namespace std;

int main()
{
    // Structure in C++
    // A structure is a user-defined data type that allows grouping of variables of different types under a single name.
    // It is used to represent a record.
    // it is similar to a class but with public access by default.
    struct Student
    {
        int rollNumber;
        string name;
        float marks;
    };
    // Creating an instance of the structure
    Student Student;
    Student.rollNumber = 101;
    Student.name = "John Doe";
    Student.marks = 85.5;
    cout << "Roll Number: " << Student.rollNumber << endl;
    cout << "Name: " << Student.name << endl;
    cout << "Marks: " << Student.marks << endl;
    // Typedef in C++
    // Typedef is used to create an alias for a data type, making it easier to use and read.
    typedef struct employee
    {
        int id;
        string name;
        float salary;
    } Emp;
    // Creating an instance of the typedef structure
    Emp emp1;
    emp1.id = 1;
    emp1.name = "Alice Smith";      
    emp1.salary = 50000.0;
    cout << "Employee ID: " << emp1.id << endl;
    cout << "Employee Name: " << emp1.name << endl;
    cout << "Employee Salary: " << emp1.salary << endl;
    return 0;
}