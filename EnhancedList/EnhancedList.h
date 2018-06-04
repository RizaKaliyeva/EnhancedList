#pragma once
#include"List.h"

template<typename T>

class EnhantedList :public List<T> {
public:
	T& operator[](size_t index) {
		Node *curPtr = firstPtr;
		int tmp[10];
		int count = 0;
		tmp[count] = curPtr->data;

		while (curPtr != lastPtr)
		{
			curPtr = curPtr->nextPtr;
			count++;
			tmp[count] = curPtr->data;
			if (count == index)
				return tmp[count];
		}
	}

};
