#include <assert.h>
#include <iostream>
using namespace std;

const int MAXSIZE = 100;
template <class DataType>
class SeqList{
public:
	SeqList();
	SeqList(DataType a[],int n);
	~SeqList(){};
	int Length();
	DataType Get(int i);
	int Locate(DataType x);
	void Insert(int i,DataType x);
	DataType Delete(int i);
	void PrintList();
private:
	DataType data[MAXSIZE];
	int length;

};

template <class DataType>
SeqList<DataType>::SeqList(){	
	length = 0;
}

template <class DataType>
SeqList<DataType>::SeqList(DataType a[],int n){
	assert(n < MAXSIZE);
	
	for (int i=0; i<n; ++i){
		data[i] = a[i];
	}
	length = n;
}

template <class DataType>
int SeqList<DataType>::Length(){
	return length;
}

template <class DataType>
DataType SeqList<DataType>::Get(int i){
	assert(i>0);
	assert(i <length+1);

	return data[i-1];
}

template <class DataType>
int SeqList<DataType>::Locate(DataType x){
	for (int i = 0; i < length; ++i){
		if (x == data[i]){
			return i+1;
		}
	}
	return 0;	
}


template <class DataType>
void SeqList<DataType>::Insert(int i,DataType x){
	assert(i>0);
	assert(i <=length);

	for (int j = length;j >= i;--j){
		data[j] = data[j-1];
	}
	data[i-1] = x;
	length++;
}

template <class DataType>
DataType SeqList<DataType>::Delete(int i){
	assert(i>0);
	assert(i <=length);

	DataType x = data[i-1];
	for (int j = i;j < length;++j){
		data[j-1] = data[j];
	}	
	length--;
	return x;
}

template <class DataType>
void SeqList<DataType>::PrintList(){
	for (int i = 0; i < length; ++i){
		cout<<data[i]<<"\t";
	}
	cout<<endl;
}