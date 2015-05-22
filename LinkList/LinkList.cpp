#include <iostream>
#include "LinkList.h"
using namespace std;



int main(){

	int a[] = {1,3,6,5,7,8,4,9};
	LinkList<int> ll(a,8);

	ll.PrintList();

	ll.Insert(1,2);
	ll.PrintList();	

	ll.Delete(8);
	ll.PrintList();


	return 0;
}



