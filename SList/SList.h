#include <assert.h>
#include <iostream>
using namespace std;


template <class DataType>
class SList{
public:
	SList();
	SList(DataType a[],int n);
	~SList();
	int Length();
	DataType Get(int i);
	int Locate(DataType x);
	void InsertInsert(DataType x,int i);
	DataType Delete(int i);
	void PrintList();

private:
	SNode<DataType> first;
};

const int MAXSIZE = 100;

template<class DataType>
struct SNode{
	DataType data;
	int next;

};

SNode<int> SList[MAXSIZE];

