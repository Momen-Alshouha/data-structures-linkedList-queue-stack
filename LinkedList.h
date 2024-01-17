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

	ptrNodeItem FindByIndex(short index) {
		short counter = 0;
		for (Iterator<T> itr = _begin(); itr != _end(); itr.current = itr.next(_head)) {
			{
				if (counter == index)
				{
					return itr.current;
				}
				counter++;
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

	void InsertAt(short index, T value) {
		if (index == 0) {
			InsertBegin(value);
			return;
		}
		else if (index == _length) {
			InsertEnd(value);
			return;
		}
		else {
			if (index >= 1 && index < _length) {
				ptrNodeItem NodeAtIndex = FindByIndex(index);
				ptrNodeItem NewNode = new Node<T>(value);
				NewNode->prev = NodeAtIndex->prev;
				NewNode->next = NodeAtIndex;
				NodeAtIndex->prev->next = NewNode;
				NodeAtIndex->prev = NewNode;
				_length++;
			}
		}
	}

	void InsertEnd(T value) {
		if (_head == nullptr) {
			ptrNodeItem NewNode = new Node<T>(value);
			_head = _tail = NewNode;
			_tail->next = _head;
			_head->prev = _tail; 
		}
		else {
			ptrNodeItem NewNode = new Node<T>(value);
			_tail->next = NewNode;
			NewNode->prev = _tail;
			NewNode->next = _head;
			_tail = NewNode;
			_head->prev = _tail; 
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