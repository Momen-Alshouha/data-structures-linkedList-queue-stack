#pragma once
#include "Node.h"

template <typename T>
class Iterator
{
public:

	using _ptrNode = Node<T>*;

	Iterator(_ptrNode begin);
	~Iterator();

	_ptrNode GetCurrent() {
		return _currentNode;
	}

	void SetCurrent(_ptrNode currentNode) {
		_currentNode = currentNode;
	}

	__declspec(property(get = GetCurrent, put = SetCurrent)) _ptrNode current;


	_ptrNode next(_ptrNode head) {
		if (_currentNode && _currentNode->next!=head)
		{
			_currentNode = _currentNode->next;
			return _currentNode;
		}
		return nullptr;
	}

	bool operator!=(const Iterator& other) const {
		return _currentNode != other._currentNode;
	}

private:

	_ptrNode _currentNode;

};

template <typename T>
Iterator<T>::Iterator(_ptrNode begin) : _currentNode(begin) {};


template <typename T>
Iterator<T>::~Iterator()
{

}