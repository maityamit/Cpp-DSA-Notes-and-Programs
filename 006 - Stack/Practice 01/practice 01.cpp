#include<iostream>
#include"StackUsingArray.h"
#include"StackUsingLL.h"
#include<stack>
#include<string>
using namespace std;

//Check Valid Paranthesis
bool validParanthesis(string s){
	StackUsingArray<char>* st = new StackUsingArray<char>(s.length());
	for(int i=0;i<s.length();i++){
		if(s[i]=='('){
			st->pushData(s[i]);
		}else if(!st->isEmpty() && s[i]==')' && st->topData()=='('){
			st->popData();
		}else{
			return false;
		}
	}
	if(st->isEmpty()){
		return true;
	}else{
		return false;
	}
	
}

//Reverse a Stack
void reverseStack(stack<int>* input,stack<int>* extra){
	stack<int> amit;
    while(!input->empty()){
        extra->push(input->top());
        input->pop();
    }
    while(!extra->empty()){
        amit.push(extra->top());
        extra->pop();
    }
    while(!amit.empty()){
        input->push(amit.top());
        amit.pop();
    }
}

//Redundant Brackets
bool redundantBracket(string s){
	stack<char> st;
	for(int i=0;i<s.length();i++){
		if(s[i]!=')'){
			st.push(s[i]);
		}else{
			int count=0;
			while(st.top()!='('){
				st.pop();
				count++;
			}
			if(count==0 || count==1){
				return true;
			}
			count=0;
		}
	}
	return false;
}

//Stock Span Function
int* stockSpan(int* price,int size){
	int* data=new int[size];
	stack<int> st;
	st.push(0);
	data[0]=1;
	for(int i=1;i<size;i++){
		while(st.size()!=0 && price[i]>price[st.top()]){
			st.pop();
		}
		if(st.size()==0){
			data[i]=i+1;
		}else{
			data[i]=i-st.top();
		}
		st.push(i);
	}
	return data;
}

//Minimum Brackets Reversal
int minBracketRev(string s){
	if(s.length()%2!=0){
		return -1;
	}
	stack<char> st;
	for(int i=0;i<s.length();i++){
		if(s[i]=='}'&&st.size()!=0&&st.top()=='{'){
			st.pop();
		}else{
			st.push(s[i]);
		}
		
	}
	char c1,c2;
	int count=0;
	while(st.size()!=0){
		c1=st.top();
		st.pop();
		c2=st.top();
		st.pop();
		if(c1==c2){
			count++;
		}else{
			if(c1=='}'){
				count+=2;
			}
		}
	}
	return count;
}

int main(){
	
	
/*
	
	cout<<"StackUsing Array Implementation : "<<"\n\n";
	StackUsingArray<int>* st = new StackUsingArray<int>(5);
	st->popData();
	cout<<st->topData()<<endl;
	st->pushData(10);
	st->pushData(20);
	st->pushData(30);
	st->pushData(40);
	cout<<st->topData()<<endl;
	st->pushData(50);
	st->pushData(60);
	st->pushData(70);
	st->pushData(80);
	st->pushData(90);
	st->pushData(100);
	cout<<st->topData()<<endl;
	st->popData();
	cout<<st->getLength()<<endl;
	
	cout<<"\n\nStackUsing LL Implementation : "<<"\n\n";
	StackUsingLL* stt = new StackUsingLL();
	stt->popData();
	cout<<stt->topData()<<endl;
	stt->pushData(10);
	stt->pushData(20);
	stt->pushData(30);
	stt->pushData(40);
	cout<<stt->topData()<<endl;
	stt->pushData(50);
	stt->pushData(60);
	stt->pushData(70);
	stt->pushData(80);
	stt->pushData(90);
	stt->pushData(100);
	cout<<stt->topData()<<endl;
	stt->popData();
	cout<<stt->getLength()<<endl;
	
	
	
*/


// cout<<validParanthesis(")()()(")<<endl;


//   stack<int> st;
////  1 2 3 4 5 10
//   st.push(1);
//   st.push(2);
//   st.push(3);
//   st.push(4);
//   st.push(5);
//   st.push(10);
//   stack<int> st1;
//   reverseStack(&st,&st1);
//   while(st1.size()!=0){
//   	cout<<st1.top()<<endl;
//   	st1.pop();
//   }
//   
   
//  cout<<redundantBracket("(a+b)")<<endl;
	
	cout<<minBracketRev("{{{{}{")<<endl;
	
}
