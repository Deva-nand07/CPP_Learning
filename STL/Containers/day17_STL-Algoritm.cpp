#include <iostream>
#include <algorithm>
#include <vector>
#include<utility>
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
    vector<int> arr = {5, 2, 8, 1, 3};
    cout << "Original array: ";
    printVector(arr); // Print the original array
    sort(arr.begin(), arr.end()); // Sort the array in ascending order
    // Sort is based upoun Intro sort which is a combination of Quick sort, Heap sort and Insertion sort.
    // It is implemented as a hybrid sorting algorithm that combines the best features of different sorting algorithms
    cout << "Sorted array: ";
    printVector(arr);
    int indx=binary_search(arr.begin(), arr.end(), 3);
    cout << "Is 3 present in the array? " << (indx ? "Yes" : "No") << endl; // Check if 3 is present in the array
    cout << "Lower bound of 3: " << *lower_bound(arr.begin(), arr.end(), 3) << endl; // Find the first element not less than 3
    cout << "Upper bound of 3: " << *upper_bound(arr.begin(), arr.end(), 3) << endl; // Find the first element greater than 3

    int a = 45;
    int b = 18;
    cout << "Maximum value is " << max(a, b) << endl;
    cout<<"Minimum value is " << min(a, b) << endl;
    cout << "Values after swaping: " << endl;
    swap(a, b);
    cout << "a=" << a << "   b=" << b << endl;

    string str = "Hello, World!";
    cout << "Original string: " << str << endl; 
    cout<<"Reversed string: ";
    reverse(str.begin(), str.end()); // Reverse the string
    cout << str << endl; // Print the reversed string
    rotate(arr.begin(), arr.begin() + 2, arr.end()); // Rotate the array by 2 positions
    cout << "Array after rotation: ";
    printVector(arr); // Print the array after rotation

    // pair in C++
    // A pair is a simple data structure that can hold two values of different types.
    pair<int, string> p = {1, "Deva"};
    cout << "Value of pair is: " << p.first << endl;
    cout << "Value of pair is: " << p.second << endl;
    return 0;
}