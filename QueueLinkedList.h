//Name: Israel Showell
//Project Name: Queue Linked List
//Date Created: 10/25/2022

#ifndef QueueLinkedList
#define QueueLinkedList
#include <stdio.h>
#include <iostream>

template <typename QueueElement> class Queue {
private:
	struct QueueNode {
		QueueNode* value;
		struct QueueNode* next;
	};
	QueueNode* front;
	QueueNode* rear;
	int numItems;

public:
	Queue();
	void enqueue(const QueueElement & value);
	void dequeue();
	bool isEmpty() const;
	void display();
};
#endif // QueueLinkedList