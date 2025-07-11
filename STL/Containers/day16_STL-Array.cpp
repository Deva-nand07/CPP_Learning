#include <iostream>
#include <array> // For using std::array (STL array)
using namespace std;
void printArray(array<int, 6> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " "; // Printing the elements of the array
    }
    cout << endl;
}
int main()
{
    // STL in C++
    // STL stands for Standard Template Library
    // It is a powerful set of C++ template classes to provide general-purpose classes and functions
    // It includes algorithms, containers, iterators and functors

    // Containers in STL

    // Sequence Containers
    array<int, 6> arr = {1, 2, 3, 4, 5, 6}; // Fixed size static array
    int size = arr.size();               // Calculate size of the array
    cout << "Elements of the array: ";
    printArray(arr); // Function call to print the array

    // Operations on STL array
    cout << "Size of the array: " << size << endl; // Output the size of the array
    cout << "First element: " << arr.front() << endl; // Output the first element
    cout << "Last element: " << arr.back() << endl; // Output the last element
    cout << "Is the array empty? " << (arr.empty() ? "Yes" : "No") << endl; // Check if the array is empty
    cout<<"Element at index 2: " << arr.at(2) << endl; // Access element at index 2
    return 0;
}