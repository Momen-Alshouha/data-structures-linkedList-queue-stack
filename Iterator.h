#pragma once
#include "Node.h"

template <typename T>
class Iterator
{
public:

	using _ptrNode = Node<T>*;

	Iterator();
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

	_ptrNode next() {
		if (!_currentNode)
		{
			_currentNode = _currentNode->next();
			return _currentNode;
		}
		return nullptr;
	}


};

template <typename T>
Iterator<T>::Iterator()
{

}


template <typename T>
Iterator<T>::~Iterator()
{

}