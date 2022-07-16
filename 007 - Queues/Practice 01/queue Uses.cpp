#include<iostream>
#include"QueueUsingLL.h"
#include"QueueUsingArray.h"
#include<queue>
#include<stack>
using namespace std;

//Reverse a Queue
void reverseQueue(queue<int> &input){
	stack<int> st;
	while(input.size()!=0){
		st.push(input.front());
		input.pop();
	}
	while(st.size()!=0){
		input.push(st.top());
		st.pop();
	}
}

int main(){



    cout<<"Queue Using Array"<<endl;
    QueueUsingArray* st = new QueueUsingArray(5);
	st->popData();
	cout<<st->topData()<<endl;
	st->pushData(10);
	st->pushData(20);
	st->pushData(30);
	st->pushData(40);
	cout<<st->topData()<<endl;
	st->popData();
	st->pushData(50);
	st->pushData(60);
	st->pushData(70);
	st->pushData(80);
	st->pushData(90);
	st->pushData(100);
	cout<<st->topData()<<endl;
	st->popData();
	cout<<st->getLength()<<endl;



    cout<<endl;
    cout<<"Queue Using LL"<<endl;
	QueueUsingLL* stt = new QueueUsingLL();
	stt->popData();
	cout<<stt->topData()<<endl;
	stt->pushData(10);
	stt->pushData(20);
	stt->pushData(30);
	stt->pushData(40);
	cout<<stt->topData()<<endl;
	stt->popData();
	stt->pushData(50);
	stt->pushData(60);
	stt->pushData(70);
	stt->pushData(80);
	stt->pushData(90);
	stt->pushData(100);
	cout<<stt->topData()<<endl;
	stt->popData();
	cout<<stt->getLength()<<endl;
	

	return 0;
}
