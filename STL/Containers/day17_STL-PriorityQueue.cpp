#include <iostream>
#include <queue> // For using std::priority_queue (STL priority queue)
using namespace std;
void printPriorityQueue(priority_queue<int> pq)
{
    while (!pq.empty())
    {
        cout << pq.top() << " "; // Printing the front element of the queue
        pq.pop();                // Remove the front element to access the next one
    }
    cout << endl;
}
void printPriorityQueue(priority_queue<int, vector<int>, greater<int>> pq)
{
    while (!pq.empty())
    {
        cout << pq.top() << " "; // Printing the front element of the queue
        pq.pop();                // Remove the front element to access the next one
    }
    cout << endl;
}

int main()
{
    // Priority Queue in C++
    // A priority queue is a data structure that stores elements in such a way that the element with the highest priority is always at the front.
    // It is implemented as a max-heap by default, meaning the largest element has the highest priority.

    // Max-Heap Implementation
    priority_queue<int> maxheap; // Declare a priority queue of integers
    maxheap.push(30);            // Add elements to the priority queue
    maxheap.push(10);
    maxheap.push(20);
    maxheap.push(70);
    cout << "Priority Queue after pushing elements: ";
    printPriorityQueue(maxheap); // Print the priority queue after pushing elements

    // Min-Heap Implementation
    priority_queue<int, vector<int>, greater<int>> minheap; // Declare a min-heap priority queue
    minheap.push(30);                                       
    minheap.push(10);
    minheap.push(20);
    minheap.push(70);
    cout << "Min-Heap Priority Queue after pushing elements: ";
    printPriorityQueue(minheap); // Print the min-heap priority queue after pushing elements
    return 0;
}