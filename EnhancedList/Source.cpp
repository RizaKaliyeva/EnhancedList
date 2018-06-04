#include "Library.h"
#include "EnhancedList.h"
#include "List.cpp"


int main() {
	EnhantedList <int> el;
	el.pushBack(10);
	el.pushBack(13);
	el.pushBack(12);

	cout << el[1] << endl;
	system("pause");
	return 0;
}