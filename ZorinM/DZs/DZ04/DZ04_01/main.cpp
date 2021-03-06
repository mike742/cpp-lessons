#include <iostream>
#include "LinkedList.h"

using std::cout;
using std::endl;

int main()
{
	cout << "LinkedList template demo\n\n";

	LinkedList<int> list;

	list.insert( 130 );
	list.insert( 131 );
	
	list.print();
	for(int i = 102; i<= 115; i++)
	{
		list.insert( i );
	}
	list.print();
	
	cout << "\n++++++++++++++++++++++++++++++++++\n\n";
	
	cout << "\nSize = " << list.GetSize() << "\n\n";
	
	list.print(4);
	
	cout << "Current element of the list is: ";
	cout << list.GetDataItem() << endl;;
	
	cout << "Fifth element of the list is: ";
	cout << list.GetDataItem(5) << endl;
	
	list.SetDataItem(777);
	list.print();
	
	cout << "\n++++++++++++++++++++++++++++++++++\n\n";
	cout << "Deleting demos:\n\n";
	
	cout << "Deleting Head element:\n";
	cout << list.GetSize() << endl;
	list.DelHead();
	list.print();
	
	cout << "\nDeleting Tail element:\n";
	list.DelTail();
	list.print();
	
	cout << "\n\nCurrent element of the list is: ";
	cout << list.GetDataItem() << endl;;
	cout << "\nDeleting Current element:\n";
	list.DelCurrent();
	list.print();
	
	cout << "\nDeleting all elements:\n";
	list.DelAll();
	list.print();
	
	cout << "\n\n";

	return 0;
}