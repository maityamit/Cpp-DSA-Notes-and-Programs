#include<iostream>
using namespace std;
int helloStSequences(string input,string* output){
	if(input.size()==0){
		output[0]="";
		return 1;
	}
	string str = input.substr(1);
	int temp = helloStSequences(str,output);
	for(int i=0;i<temp;i++){
		output[i+temp]=input[0]+output[i];
	}
	return 2*temp;
}
int main(){
	string input;
	cin>>input;
	string* output = new string[1000];
	int count = helloStSequences(input,output);
	for(int i=0;i<count;i++){
		cout<<"["<<output[i]<<"]"<<endl;
	}
	return 0;
}
