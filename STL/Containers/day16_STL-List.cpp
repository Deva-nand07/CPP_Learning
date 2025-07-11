#include <iostream>
#include <list> // For using std::list (STL list)
using namespace std;
void printList(list<int> &arr)
{
    for (int i : arr)
    {
        cout << i << " "; // Printing the elements of the list
    }
    cout << endl;
}
int main()
{
    // List in C++
    // List is a doubly linked list that allows fast insertions and deletions at any position.
    // It is implemented as a doubly linked list, which means each element has pointers to both the next and previous elements.
    // It is useful when you need to frequently insert or delete elements from the middle of a list.
    // it is Dynamic in nature, meaning it can grow and shrink in size as needed.
    // It does not support random access, so you cannot access elements by index like you can with vectors or deques.
    list<int> myList; // Declare a list of integers
    list<int> myList2(5, 100); // Declare a list of integers with size 5, initialized to 100 (by default initialized to 0)
    myList.push_back(10);
    myList.push_front(20);
    cout << "List after adding elements: ";
    printList(myList); // Print the list after adding elements
    myList.push_back(30);
    myList.push_front(40);
    cout << "List after adding more elements: ";
    printList(myList);
    cout << "First element of list: " << myList.front() << endl; // Output the first element
    cout << "Last element of list: " << myList.back() << endl;   // Output the last element
    cout << "Size of list: " << myList.size() << endl;
    // cout<<"Element at index 2: "<<mylist.at(2) << endl; // random access is not supported in list, so this will not work
    myList.pop_back(); // Remove the last element
    cout << "List after pop_back: ";
    printList(myList);
    myList.pop_front(); // Remove the first element
    cout << "list after pop_front : ";
    printList(myList);
    myList.push_back(50);
    myList.push_back(60);
    cout << "List after adding two more elements: ";
    printList(myList);
    auto start = myList.begin();
    auto end = next(myList.begin(), 2); // moves iterator ahead by 2 steps
    myList.erase(start, end);           // erases first two elements
    cout << "List after erasing first two elements: ";
    printList(myList);
    myList.clear();                                                              // Clear the list
    cout << "List is empty or not? " << (myList.empty() ? "Yes" : "No") << endl; // Check if the list is empty
    cout<<"List 2 of 100 values: ";
    printList(myList2); // Print the elements of myList2
    return 0;
}