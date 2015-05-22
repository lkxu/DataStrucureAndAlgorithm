#include <iostream>
using namespace std;


void ReverseNew(char ch[],int begPositon,int endPosition){
	char tmp = ' ';
	while (begPositon < endPosition){
		tmp = ch[begPositon];
		ch[begPositon] = ch[endPosition];
		ch[endPosition] = tmp;
		begPositon++;
		endPosition--;
	}

}

int main(){
	char ch[] = "abcdefg";
	ReverseNew(ch,0,2);
	cout<<ch<<endl;
	ReverseNew(ch,3,6);
	cout<<ch<<endl;
	ReverseNew(ch,0,6);

	cout<<ch<<endl;
	

	return 0;
}



