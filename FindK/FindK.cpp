#include <iostream>
using namespace std;


int FindK(int A[],int n,int k){
	int i;
	for (i=0; i<n; ++i){
		if (k == A[i]){
			break;
		}
	}
	return i;
}

int main(){
	int A[] = {1,2,3,4,5};
	cout<<FindK(A,5,3)<<endl;
	cout<<FindK(A,5,7)<<endl;
	return 0;
}