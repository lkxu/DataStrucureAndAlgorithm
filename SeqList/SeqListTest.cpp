#include <iostream>
#include "SeqList.h"
using namespace std;



int main(){
	
	int a[] = {1,3,6,5,7,8,4,9};
	SeqList<int> sq(a,8);
	
	
	sq.PrintList();

	sq.Insert(1,2);
	sq.PrintList();

	//sq.Insert(11,2);

	sq.Delete(8);
	sq.PrintList();


	return 0;
}



