#pragma once
#include <iostream>
#include "Node.h"
#include "Iterator.h"
using namespace std;

template <typename T = int> // int is default template argument
class LinkedList // circular doubly linked list
{
public:
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

	size_t GetLength() {
		return _length;
	}

	iterator _begin() {
		return iterator(_head);
	}


	iterator _end() {
		return iterator(nullptr);
	}


	// read only proprties
	__declspec (property (get = GetHead)) ptrNodeItem head;
	__declspec (property (get = GetTail)) ptrNodeItem tail;
	__declspec(property (get = GetLength)) size_t length;

	ptrNodeItem Find(T value) {
		for (iterator itr = _begin(); itr != _end; itr.current=itr.next(head))
		{
			if (*itr.current==value)
			{
				return itr.current;
			}
		}
		return nullptr;
	}

	bool IsExist(T value) {
		ptrNodeItem NodeToFind = Find(value);
		return (NodeToFind);
	}
	bool IsEmpty() {
		return (_length == 0);
	}

	void InsertEnd(T value) {
		if (_head == nullptr) {
			ptrNodeItem NewNode = new Node<T>(value);
			_head = _tail = NewNode;
			_tail->next = _head; // Update the next pointer to make it circular
			_head->prev = _tail; // Update the prev pointer to make it circular
		}
		else {
			ptrNodeItem NewNode = new Node<T>(value);
			_tail->next = NewNode;
			NewNode->prev = _tail;
			NewNode->next = _head;
			_tail = NewNode;
			_head->prev = _tail; // Update the prev pointer of the head to make it circular
		}
		_length++;
	}

	void InsertBegin(T value) {
		ptrNodeItem NewNode = new Node<T>(value);
		if (IsEmpty()) {
			_head = _tail = NewNode;
			_tail->next = _head; 
			_head->prev = _tail; 
		}
		else {
			NewNode->next = _head;
			_head->prev = NewNode;
			_head = NewNode;
			_tail->next = _head; 
		}
		_length++;
	}

	void print() {
		for (Iterator<T> itr = _begin(); itr != _end(); itr.current = itr.next(_head)) {
			cout << itr.current->data;
			if (itr.current != _tail) {
				cout << " -> ";
			}
		}
		cout << std::endl;
	}

private:

	ptrNodeItem _head;
	ptrNodeItem _tail;
	size_t _length;

};


template <typename T>
LinkedList<T>::LinkedList() : _head(nullptr), _tail(nullptr) ,_length(0) {};


template <typename T>
LinkedList<T>::~LinkedList ()
{

}