#include "LinkedList.h"

int main()
{
	LinkedList<int> linkedlist;
	linkedlist.InsertBegin(1);
	linkedlist.InsertBegin(2);
	linkedlist.InsertBegin(3);
	linkedlist.InsertEnd(10);
	linkedlist.InsertEnd(20);
	linkedlist.InsertEnd(30);

	linkedlist.print();
	cout << "head : " << linkedlist.head->data << endl;
	cout << "tail : " << linkedlist.tail->data << endl;
	cout<<"Length : "<<linkedlist.length << endl;
}
