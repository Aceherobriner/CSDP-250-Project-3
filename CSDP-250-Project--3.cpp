//Name: Israel Showell
//Project Name: Queue Linked List
//Date Created: 10/25/2022
//Project Desc: This program takes a user's input, and converts the uppercase letters to lowercase,
//and the lowercase to uppercase. Then, it deletes the original word, and displays the new one.


#include <iostream>
#include <string>
#include "QueueLinkedList.h"
using namespace std;



int main()
{
	Queue <char> Q;
	char* st = new char[99];
	char* temp = new char[99];
	string str;
	int i = 0;

	cout << "Hello, I switch the uppercase and lowercase letters of the input you enter. " << endl;
	cout << "Please enter a word or a sentence: ";
	cin.getline(st, sizeof(st));


	for (i = 0; i < sizeof(st); i++) {
		Q.enqueue(st[i]);
		if (isupper(st[i])) {
			st[i] = tolower(st[i]);
		}
		else {
			st[i] = toupper(st[i]);
		}
		temp[i] = st[i];
		st++;
	}

	for (i = 0; i < sizeof(st); i++) {
		Q.enqueue(temp[i]);
		temp++;
	}
	delete[] st;
	delete[] temp;
	Q.display();
	while (!Q.isEmpty()) {
		Q.dequeue();
	}
	system("PAUSE");
}