#include <iostream>
using namespace std;
#include "oop4.h"




int main()
{
	list lst;
	lst.init(8);
	lst.add_elem(5);
	lst.add_elem(4);
	lst.add_elem(6); 
	lst.add_elem(12);
	lst.add_elem(8);
	lst.add_elem(3);
	lst.add_elem(1);
	lst.add_elem(7);
	lst.Print();
	lst.add_elem(34);
	lst.Print();
	lst.add_elem(2);
	lst.Print();
}
