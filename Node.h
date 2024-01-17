#pragma once

template<typename T>
class Node
{
public:

	using _ptrNode = Node<T>*;
	
	Node(T value);
	~Node();


	// setters and getter
	T GetData() {
		return _data;
	}

	void SetData(T data) {
		_data = data;
	}

	_ptrNode GetNext() {
		return _next;
	}

	_ptrNode SetNext(_ptrNode next) {
		return _next=next;
	}

	_ptrNode GetPrev() {
		return _prev;
	}

	_ptrNode SetPrev(_ptrNode prev) {
		return _prev = prev;
	}


	// proprties
	__declspec(property(get = GetData, put = SetData)) T data;
	__declspec(property(get = GetNext, put = SetNext)) _ptrNode next;
	__declspec(property(get = GetPrev, put = SetPrev)) _ptrNode prev;



private:
	
	_ptrNode _next;
	
	_ptrNode _prev;
	
	T _data;

};



template<typename T>
Node<T>::Node(T value) :_data(value) {}


template<typename T>
Node<T>::~Node()
{
}