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
		return _currentNode = currentNode;
	}

	__declspec(property(get = GetCurrent, put = SetCurrent)) _ptrNode current;

private:

	_ptrNode _currentNode;

	_ptrNode next(_ptrNode haed) {
		if (!_currentNode)
		{
			if (_currentNode==head) // to break circular linked list and avoid infinite circular loop
			{
				return nullptr;
			}
			_currentNode = _currentNode->next();
			return _currentNode;
		}
		return nullptr;
	}


};

template <typename T>
Iterator<T>::Iterator(_ptrNode begin) : _currentNode(begin) {};


template <typename T>
Iterator<T>::~Iterator()
{

}