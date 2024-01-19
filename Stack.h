#pragma once
#include "LinkedList.h"

template<typename T>
class Stack
{
public:

    void push(T value) {
        this->list.InsertEnd(value); // first in last out 
    }

    void pop() { // LIFO last in first out
        this->list.DeleteLast();
    }


    T top() const {
        return this->list.GetTail()->data;
    }

    void clear() {
        this->list.clear();
    }

    size_t size() {
        return this->list.length;
    }

    bool isEmpty() {
        return this->list.IsEmpty();
    }

    void print() {
        cout << "From top to bottom: ";
        this->list.PrintInReverseOrder();
    }

    // Top property
    __declspec(property(get = top)) T Top;

private:

    LinkedList<T> list; // using aggregation to implement stack using linkedlist

};
