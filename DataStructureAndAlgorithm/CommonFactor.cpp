#include <iostream>
using namespace std;

int CommonFactor(int m,int n){
	int r = m % n;
	while (r != 0){
		m = n;
		n = r;
		r = m % n;
	}
	return n;

}

int main(){

	cout<<CommonFactor(63,54)<<endl;
	return 0;
}