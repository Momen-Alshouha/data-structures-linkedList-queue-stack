#include "LinkedList.h"
#include "Queue.h"
#include "Stack.h"

int main()
{
	Stack<int> stack;
	stack.push(1);
	stack.push(2);
	stack.push(3);
	stack.print();
	stack.pop();
	stack.print();

	/*Queue<int> queue,q2;
	
	queue.enqueue(1); 
	queue.enqueue(2);	
	queue.enqueue(3);
	queue.print();
	queue.dequeue();
	queue.print();
	cout << queue.size() << endl;
	cout << queue.Front << endl;
	cout << queue.size() << endl;*/

	//LinkedList<int> linkedlist;
	//
	//linkedlist.InsertEnd(10);
	//linkedlist.InsertEnd(20);
	//linkedlist.InsertEnd(30);
	//linkedlist.Delete(30);
	//linkedlist.print();
	//cout << linkedlist.head->prev->data << endl;
	//cout << linkedlist.tail->next->data << endl;
	//linkedlist.InsertAt(0,99);
	//linkedlist.InsertAt(linkedlist.length, 999);
	//linkedlist.InsertAt(2, 88);
	//linkedlist.print();
	//linkedlist.DeleteFirst();
	//linkedlist.print();
	//cout << linkedlist.head->prev->data << endl;
	//cout << "head : " << linkedlist.head->data << endl;
	//cout << "tail : " << linkedlist.tail->data << endl;
	//cout<<"Length : "<<linkedlist.length << endl;
	//linkedlist.print();

	//cout << "\n**************************\n";
	//linkedlist.reverse();
	//linkedlist.print();
	//linkedlist.update(199, 888);
	//linkedlist.update(99, 888);
	//linkedlist.print();
	//linkedlist.PrintInReverseOrder();
}
