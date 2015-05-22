#include <iostream>
using namespace std;


void MatrixMultiplication(int A[][2],int B[][2],int n){
	int C[2][2] = {{0,0},{0,0}};
	for (int i = 0;i < n;++i){
		for (int j = 0;j < n; ++j){
			C[i][j] = 0;
			for (int k = 0; k < n; ++k){
				C[i][j] += A[i][k] * B[k][j];
			}
			cout<<C[i][j]<<"\t";
		}
		cout<<endl;
	}
	
}

int main(){
	int A[][2] = {{1,2},{3,4}};
	int B[][2] = {{5,6},{2,3}};


	MatrixMultiplication(A,B,2);
	
	return 0;
}



