#pragma once
#include "LinkedList.h"

template<typename T>
class Queue
{
public:

	void enqueue(T value) {
		this->list.InsertEnd(value); 
	}

	void dequeue() {
		this->list.DeleteFirst(); // FIFO first in first out
	}

	T peek() {
		this->list.FindByIndex(0);
	}

	T front() {
		this->list.FindByIndex(0);
	}

	T back() {
		this->list.GetTail()->data;
	}

	// Front and Back properties
	__declspec(property(get = front)) T Front;
	__declspec(property(get = back)) T Back;

	void clear() {
		this->list.clear();
	}

	size_t size() {
		return this->list.length;
	}

	bool IsEmpty() {
		return this->list.IsEmpty();
	}

	void print() {
		cout << "From front to back : ";
		this->list.print();
	}

private:

	LinkedList<T> list; // using aggregation to implement queue using linkedlist

};
