#include <iostream>
#include <set> // For using std::set (STL set)
#include<unordered_set>
using namespace std;
void printSet(set<int> s)
{
    for (auto i : s)
    {
        cout << i << "   "; // Printing the elements of the set
    }
}

int main()
{
    // Associative Containers: Set in C++
    // A set is a collection of unique elements, which means it does not allow duplicate values.
    // It is implemented as a balanced binary search tree, which allows for fast insertion, deletion, and search operations.
    // Typically, Implemented as a Red-Black Tree.
    // Sets are automatically sorted, and they do not allow random access like vectors or deques.
    // we canot update the elements of a set, but we can insert and delete them.

    set<int> mySet;   // Declare a set of integers
    mySet.insert(10); // Insert elements into the set
    mySet.insert(20);
    mySet.insert(30);
    mySet.insert(20); // Duplicate element, will not be added
    mySet.insert(40);
    cout << "Set after inserting elements: ";
    printSet(mySet);                                                        // Print the set after inserting elements
    cout << "\nSize of set: " << mySet.size() << endl;                      // Output the size of the set
    cout << "Is the set empty? " << (mySet.empty() ? "Yes" : "No") << endl; // Check if the set is empty
    set<int>::iterator it = mySet.begin();
    advance(it, 2); // Moves iterator forward by 2 positions
    // This works because std::advance() internally handles how to move a bidirectional iterator forward.
    mySet.erase(it); // delete the element at the iterator position
    cout << "Set after erasing the third element: ";
    printSet(mySet);                                            // Print the set after erasing an element
    cout << "\n40 Present or not: " << mySet.count(40) << endl; // Check if an element is present in the set
    set<int>::iterator search = mySet.find(40);
    if (search != mySet.end())
    {
        int position = distance(mySet.begin(), search);
        cout << "Element 30 found at position: " << position << endl; // Output: 2
    }
    else
    {
        cout << "Element not found!" << endl;
    }
    cout << "Set after deleting element 10: ";
    // Complexity of operations:
    // inset, delete, erase, find, and count operations take O(log n) time complexity.
    // Iterating through the set takes O(n) time complexity.

    unordered_set<int> myUnorderedSet; // Declare an unordered set of integers
    // It is implemented same as Set only diffrencce is that is unordered or random and different complexity
    return 0;
}