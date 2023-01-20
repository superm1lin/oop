#pragma once
#include <iostream>
using namespace std;

class list
{
	struct node
	{
		int data;
		struct node* next;
		struct node* prev;
	};

	private:
		node* head;
		node* tail;
	public:
		void init(int length);
		void add_elem(int data);
		void Print();

};