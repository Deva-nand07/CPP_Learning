#include <iostream>
#include <stack> // For using std::stack (STL stack)
using namespace std;
void printStack(stack<string> s)
{
    while(!s.empty())
    {
        cout << s.top() << "     "; // Printing the top element of the stack
        s.pop();                // Pop the top element to access the next one
    }
}

int main()
{
    // Container Adapter: Stack in C++
    // Stack is a data structure that follows the Last In First Out (LIFO) principle.
    // It allows insertion and deletion of elements only from one end, known as the top of the stack.

    stack<string> myStack; // Declare a stack of integers
    myStack.push("Hello"); // Push an element onto the stack
    myStack.push("World");
    myStack.push("C++");
    cout << "Stack after pushing elements: "<<endl;
    printStack(myStack); // Print the stack after pushing elements
    cout << "\nSize of stack: " << myStack.size() << endl; 
    cout<<"Top element of stack: " << myStack.top() << endl; // Output the top element
    myStack.pop(); // Remove the top element
    cout << "Stack after pop operation: " << endl;
    printStack(myStack); // Print the stack after popping the top element
    return 0;
}