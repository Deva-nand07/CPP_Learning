#include<iostream>
#include<queue> // For using std::queue (STL queue)
using namespace std;
void printQueue(queue<int> q) {
    while (!q.empty()) {
        cout << q.front() << " "; // Printing the front element of the queue
        q.pop(); // Remove the front element to access the next one
    }
    cout << endl;
}

int main(){
    // Queue in C++
    // Queue is a data structure that follows the First In First Out (FIFO) principle.
    // It allows insertion of elements at the back and deletion of elements from the front.
    queue<int> myQueue;
    myQueue.push(10); // Add an element to the back of the queue
    myQueue.push(20);
    myQueue.push(30);
    cout << "Queue after pushing elements: ";
    printQueue(myQueue); 
    cout << "Size of queue: " << myQueue.size() << endl; 
    cout << "Front element of queue: " << myQueue.front() << endl;
    cout << "Back element of queue: " << myQueue.back() << endl; 
    return 0;
}