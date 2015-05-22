#include <iostream>
#include <limits>
using namespace std;


void FindMaxTwo(int a[],int n){
	int max1 = a[0];
	int max2 = a[0]; 
	for (int i = 1; i < n; ++i){
		if (a[i] > max1){
			max2 = max1;
			max1 = a[i];
		}else if (a[i] < max1 && a[i] > max2){
			max2 = a[i];
		}		
	}
	cout<<max1<<endl;
	cout<<max2<<endl;
}

int main(){
	int a[] = {1,3,6,5,7,8,4,9};
	FindMaxTwo(a,8);
	

	return 0;
}



