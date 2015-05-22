#include <iostream>
using namespace std;


void SortBubble(int a[],int n){
	for (int i = 0; i < n; ++i){
		int tmpInt;
		for (int j = i+1; j < n;++j){
			if (a[i] > a[j]){
				tmpInt = a[j];
				a[j] = a[i];
				a[i] = tmpInt;
			}
		}
	}

}

int main(){
	int a[] = {1,3,6,5,7,8,4,9};
	for (int i = 0; i < 8; ++i){
		cout<<a[i]<<"\t";
	}
	cout<<endl;
	SortBubble(a,8);
	for (int i = 0; i < 8; ++i){
		cout<<a[i]<<"\t";
	}
	cout<<endl;

	return 0;
}



