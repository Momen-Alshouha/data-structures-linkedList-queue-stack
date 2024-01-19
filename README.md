# Circular Doubly Linked List with Queue and Stack Implementation in C++

This repository contains C++ implementations of a Circular Doubly Linked List, Queue, and Stack using Object-Oriented Programming principles.

## Overview

### Classes
- **Node**: Represents individual nodes in the circular doubly linked list.
- **Iterator**: Provides iteration capabilities over the linked list.
- **LinkedList**: Implements the circular doubly linked list and its functionalities.
- **Queue**: Implements a basic queue using the circular doubly linked list (utilizing aggregation).
- **Stack**: Implements a basic stack using the circular doubly linked list (utilizing aggregation).

## Classes and Functionality

### Node Class
The `Node` class represents individual elements in the circular doubly linked list. Each node holds:
- `_data`: Data of type `T`.
- `_prev`: Pointer to the previous node.
- `_next`: Pointer to the next node.

### Iterator Class
The `Iterator` class provides functionality for iterating through the circular doubly linked list. It includes methods to:
- Access node data.
- Set node data.
- Move to the next or previous node.
- Access the current node.

### LinkedList Class
The `LinkedList` class implements a circular doubly linked list with functionalities such as:
- Retrieving the head and tail nodes.
- Finding elements by index or data.
- Inserting elements before or after specified nodes or at specific indices.
- Deleting nodes by data or index.
- Reversing the linked list.
- Calculating the sum of elements (if the template type is arithmetic).
- Getting the length of the linked list.

### Queue Class
The `Queue` class utilizes aggregation to implement a basic queue using the circular doubly linked list. It includes methods to:
- Enqueue an element to the back of the queue.
- Dequeue the element from the front of the queue.
- Peek at the front element without removing it.
- Clear the queue.
- Get the number of elements in the queue.
- Check if the queue is empty.
- Print the elements of the queue.

### Stack Class
The `Stack` class also utilizes aggregation to implement a basic stack using the circular doubly linked list. It includes methods to:
- Push an element onto the top of the stack.
- Pop the element from the top of the stack.
- Peek at the top element without removing it.
- Clear the stack.
- Get the number of elements in the stack.
- Check if the stack is empty.
- Print the elements of the stack.

## Usage

To use this implementation, follow these steps:
1. Clone the repository.
2. Include the necessary header files in your C++ code: `LinkedList.h`, `Queue.h`, and `Stack.h` in your main cpp file.
3. Create objects of `LinkedList`, `Queue`, or `Stack` as needed and utilize their functionalities based on your requirements.

## Example

```cpp
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
