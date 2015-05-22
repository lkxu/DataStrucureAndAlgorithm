#include <assert.h>
#include <iostream>
using namespace std;

template<class DataType>
struct Node{
	DataType data;
	Node *next;
};

template<class DataType>
class LinkList{
public:
	LinkList();
	LinkList(DataType a[],int n);
	~LinkList();
	int Length();
	DataType Get(int i);
	int Locate(DataType x);

	void Insert(DataType x,int i);
	DataType Delete(int i);

	void PrintList();
private:
	Node<DataType> *first;
};

template<class DataType>
void LinkList<DataType>::PrintList(){
	Node<DataType> *p;
	p = first->next; 
	while (p != NULL){
		cout<<p->data<<"\t";
		p = p->next;
	}
	cout<<endl;
}

template<class DataType>
LinkList<DataType>::LinkList(){
	first = new Node<DataType>;
	first->next = NULL;
}

template<class DataType>
LinkList<DataType>::LinkList(DataType a[],int n){
	first = new Node<DataType>;
	first->next = NULL;
	for (int i= 0; i < n; i++){
		Node<DataType> *s = new Node<DataType>;
		s->data = a[i];
		s->next = first->next;
		first ->next =s ;
	}
}

template<class DataType>
LinkList<DataType>::~LinkList(){
	while(first != NULL){
		Node<DataType> *q;
		q = first;
		first = first->next;
		delete q;
	}
}

template<class DataType>
int LinkList<DataType>::Length(){
	Node<DataType> *p;
	p = first->next;
	int count = 0;
	while(p != NULL){
		count++;
		p = p->next;
	}
	return count;
}


template<class DataType>
DataType LinkList<DataType>::Get(int i){
	Node<DataType> *p;
	p = first->next;
	int count = 1;
	while(p != NULL && count < i){		
		p = p->next;
		count++;
	}
	if (p == NULL){
		throw "wrong positoin";
	}else{
		return p->data;
	}
}

template<class DataType>
int LinkList<DataType>::Locate(DataType x){
	Node<DataType> *p;
	p = first->next;
	int count = 1;
	while(p != NULL && p->data != x){		
		p = p->next;
		count++;
	}
	if (p == NULL){
		return 0;
	}else{
		return count;
	}

}

template<class DataType>
void LinkList<DataType>::Insert(DataType x,int i){
	Node<DataType> *p;
	p = first;
	int count = 0;
	while(p != NULL && count < i-1){		
		p = p->next;
		count++;
	}
	if (p == NULL)
	{
		throw "wrong position";
	} 
	else
	{
		Node<DataType> *s = new Node<DataType>;
		s->data = x;		
		s->next = p->next;
		p->next = s;
	}
}

template<class DataType>
DataType LinkList<DataType>::Delete(int i){
	Node<DataType> *p;
	p = first;
	int count = 0;
	while(p != NULL && count < i-1){		
		p = p->next;	
		count++;
	}
	if (p == NULL && p->next == NULL)
	{
		throw "wrong position";
	} 
	else
	{
		Node<DataType> *q = p->next;
		p->next = p->next->next;
		DataType x= q->data;
		delete q;
		return x;
	}
}