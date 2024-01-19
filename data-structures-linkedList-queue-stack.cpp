// Example usage of the Circular Doubly Linked List, Queue, and Stack classes
#include "LinkedList.h"
#include "Queue.h"
#include "Stack.h"

int main() {
    // Example usage with integers
    LinkedList<int> intList;
    Queue<int> intQueue;
    Stack<int> intStack;

    // Insert elements to the linked list
    intList.InsertEnd(10);
    intList.InsertEnd(20);
    intList.InsertEnd(30);

    // Enqueue elements to the queue
    intQueue.enqueue(5);
    intQueue.enqueue(15);
    intQueue.enqueue(25);

    // Push elements onto the stack
    intStack.push(7);
    intStack.push(14);
    intStack.push(21);

    // Print the elements of the linked list, queue, and stack
    cout << "Linked List (int): ";
    intList.print();

    cout << "\nQueue (int): ";
    intQueue.print();

    cout << "\nStack (int): ";
    intStack.print();

    // Example usage with strings
    LinkedList<string> strList;
    Queue<string> strQueue;
    Stack<string> strStack;

    // Insert elements to the linked list
    strList.InsertEnd("apple");
    strList.InsertEnd("banana");
    strList.InsertEnd("orange");

    // Enqueue elements to the queue
    strQueue.enqueue("dog");
    strQueue.enqueue("cat");
    strQueue.enqueue("bird");

    // Push elements onto the stack
    strStack.push("one");
    strStack.push("two");
    strStack.push("three");

    // Print the elements of the linked list, queue, and stack
    cout << "\n\nLinked List (string): ";
    strList.print();

    cout << "\nQueue (string): ";
    strQueue.print();

    cout << "\nStack (string): ";
    strStack.print();

    return 0;
}
