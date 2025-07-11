#include <iostream>
#include <deque> // For using std::deque (STL deque)
using namespace std;
void printDeque(deque<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " "; // Printing the elements of the deque
    }
    cout << endl;
}
int main()
{
    // Deque in C++
    // Deque stands for Double Ended Queue
    // Dynamic array of fixed-size arrays that allows fast insertions and deletions at both ends.
    deque<int> dq;                                                        // Declare a deque of integers
    cout << "Size of deque: " << dq.size() << endl;                       // Output the initial size (usually 0)
    dq.push_back(10);                                                     // Add an element to the back of the deque
    dq.push_front(20);                                                    // Add an element to the front of the deque
    printDeque(dq);                                                       // Print the deque after adding elements
    cout << "Size of deque after adding elements: " << dq.size() << endl; // Output the size after adding elements
    dq.push_back(30);
    dq.push_front(40);
    dq.push_back(50);
    cout << "Deque elements after adding more elements: ";
    printDeque(dq); // Print the deque after adding more elements
    cout << "First element of deque: " << dq.front() << endl;
    cout << "last element of deque: " << dq.back() << endl;
    cout << "Element at index 2: " << dq.at(2) << endl;
    dq.pop_back(); // Remove the last element
    cout << "Deque elements after pop_back: ";
    printDeque(dq);
    dq.pop_front(); // Remove the first element
    cout << "Deque elements after pop_front: ";
    printDeque(dq);
    dq.erase(dq.begin(), dq.end() - 1); // Erase all elements except the last one
    cout << "Deque elements after erasing all but last: ";
    printDeque(dq);                                                        // Print the deque after erasing elements
    cout << "Is the deque empty? " << (dq.empty() ? "Yes" : "No") << endl; // Check if the deque is empty
    dq.clear();                                                            // Clear the deque
    cout << "Size of deque after clear: " << dq.size() << endl;
    return 0;
}