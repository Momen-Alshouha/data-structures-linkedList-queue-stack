#include "LinkedList.h"

int main()
{
	LinkedList<int> linkedlist;
	
	linkedlist.InsertEnd(10);
	linkedlist.InsertEnd(20);
	linkedlist.InsertEnd(30);
	linkedlist.Delete(30);
	linkedlist.print();
	cout << linkedlist.head->prev->data << endl;
	cout << linkedlist.tail->next->data << endl;
	linkedlist.InsertAt(0,99);
	linkedlist.InsertAt(linkedlist.length, 999);
	linkedlist.InsertAt(2, 88);
	linkedlist.print();
	linkedlist.DeleteFirst();
	linkedlist.print();
	cout << linkedlist.head->prev->data << endl;
	cout << "head : " << linkedlist.head->data << endl;
	cout << "tail : " << linkedlist.tail->data << endl;
	cout<<"Length : "<<linkedlist.length << endl;
	linkedlist.clear();
	linkedlist.print();
}
