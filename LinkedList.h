#pragma once
#include "Node.h"
#include "Iterator.h"

template <typename T = int> // int is default template argument
class LinkedList // circular doubly linked list
{
public:
	using _ptrNode = LinkedList<T>*;
	using iterator = Iterator<T>;
	using ptrNodeItem = Node<T>*;

	LinkedList ();
	~LinkedList ();


	// setters and getters
	ptrNodeItem GetHead() {
		return _head;
	}

	ptrNodeItem GetTail() {
		return _tail;
	}


	// read only proprties
	__declspec (property (get = GetHead)) ptrNodeItem head;
	__declspec (property (get = GetTail)) ptrNodeItem tail;

private:
	ptrNodeItem _head;
	ptrNodeItem _tail;


};


template <typename T>
LinkedList<T>::LinkedList() : _head(nullptr), _tail(nullptr) {};


template <typename T>
LinkedList<T>::~LinkedList ()
{

}