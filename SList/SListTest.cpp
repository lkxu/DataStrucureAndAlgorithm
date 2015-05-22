#include <iostream>
#include "SList.h"
using namespace std;



int main(){

	int a[] = {1,3,6,5,7,8,4,9};
	SList<int> sl(a,8);


	sl.PrintList();

	sl.Insert(1,2);
	sq.PrintList();

	//sq.Insert(11,2);

	sl.Delete(8);
	sl.PrintList();


	return 0;
}



