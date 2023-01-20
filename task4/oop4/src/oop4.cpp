#include <iostream>
#include "oop4.h"
using namespace std;



		void list::init(int length)
		{
			head = new node;
			node* cur = head;

			for (int i = 0; i < length - 1; i++)
			{
				cur->next = new node;
				cur = cur->next;
			}
			tail = cur;
			tail->next = head;
		}

		void list::add_elem(int data)
		{
			head->data = data;
			head = head->next;
		}

		void list::Print()
		{
			cout << head->data << " ";
			node* cur = head->next;
			while (cur != head)
			{
				cout << cur->data << " ";
				cur = cur->next;
			}
			cout << endl;
		}