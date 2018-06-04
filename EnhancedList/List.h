#pragma once
#include "Library.h"

template <typename T>

class List {
protected:
	class Node {
	public:
		T data;
		Node* nextPtr;
		Node(T data) {
			this->data = data;
			this->nextPtr = nullptr;
		}
	}*firstPtr, *lastPtr;
	size_t count;

public:
	List() {
		firstPtr = nullptr;
		lastPtr = nullptr;
		count = 0;
	}
	void pushBack(T data);
	void pushFront(T data);
	size_t size();
	void delFirst();
	void delLast();
	bool Find(T n);
	virtual ~List();

};
