#include <iostream>
#include <vector> // For using std::vector (STL vector)
using namespace std;
void printVector(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " "; // Printing the elements of the vector
    }
    cout << endl;
}
int main()
{
    // Vectors in C++
    // Vectors are dynamic arrays that can grow and shrink in size
    vector<int> vec;                                                                       // Declare a vector of integers
    cout << "Capacity of vector: " << vec.capacity() << endl;                              // Output the initial capacity (usually 0)
    vec.push_back(10);                                                                     // Add an element to the vector
    cout << "Capacity of vector after adding one element: " << vec.capacity() << endl;     // Output the capacity after adding an element
    vec.push_back(20);                                                                     // Add another element
    cout << "Capacity of vector after adding another element: " << vec.capacity() << endl; // Output
    vec.push_back(30);                                                                     // Add another element
    cout << "Capacity of vector after adding third element: " << vec.capacity() << endl;   // Output
    cout << "\nSize of vector: " << vec.size() << endl;                                    // Output the current size of the vector
    // Vector increases its capacity by double the size when it runs out of space
    cout << "Element at index 2 is " << vec.at(2) << endl;                   // Access element at index 2
    cout << "First element of vector: " << vec.front() << endl;              // Output the first element
    cout << "Last element of vector: " << vec.back() << endl;                // Output the last element
    cout << "Is the vector empty? " << (vec.empty() ? "Yes" : "No") << endl; // Check if the vector is empty
    cout << "\nVector elements: ";
    printVector(vec);
    vec.pop_back(); // Remove the last element
    cout << "\nVector elements after pop_back: ";
    printVector(vec); // Print the vector after removing the last element
    vec.push_back(40);
    vec.push_back(50);
    cout << "\nVector elements after adding two more elements: ";
    printVector(vec); // Print the vector after adding two more elements
    vec.clear();      // Clear the vector
    cout << "\nVector elements after clear: ";
    printVector(vec);                                                     // Print the vector after clearing it
    cout << "Size of vector after clear: " << vec.size() << endl;         // Output the size after clearing
    cout << "Capacity of vector after clear: " << vec.capacity() << endl; // Output the capacity
    vector<int> vec2(5, 1);                                               // Declare a vector of integers with size 5, initialized to 1(by default intialized to 0)
    cout << "\nVector vec2 elements: ";
    printVector(vec2); // Print the elements of vec2
    vector<int> vec3(vec2); // Copy vec2 to vec3
    cout << "\nVector vec3 elements (copied from vec2): ";
    printVector(vec3); // Print the elements of vec3
    return 0;
}