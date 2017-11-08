#include <cstdlib>
#include "Link.h"
using namespace std;

int main() {
	Link list;
	list.addNode(1);
	list.addNode(2);
	list.addNode(3);
	list.addNode(4); 
	list.addNode(5);
	list.printList();

	list.delNode(5);
	// list.delNode(4); 
	list.printList(); 

	system("pause");
	return 0;
}