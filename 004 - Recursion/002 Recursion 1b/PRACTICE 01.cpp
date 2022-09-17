#include<iostream>
#include<string.h>
using namespace std;

void replacePI(char input[]){
	if(strlen(input)==0 || strlen(input)==1) return;
	replacePI(input+1);
	if(input[0]=='p' && input[1]=='i'){
		for(int i=strlen(input);i>1;i--){
			input[i+1]=input[i-1];
		}
		input[0]='3';
		input[1]='.';
		input[2]='1';
		input[3]='4';
	}
}

void removeX(char input[]){
	if(strlen(input)==0) return;
	replacePI(input+1);
	if(input[0]=='x'){
		for(int i=0;i<strlen(input)-1;i++){
			input[i]=input[i+1];
		}
		input[strlen(input)-1]='\0';
	}
}

int sTi(char input[],int n){
	if(n==0) return 0;
	int smallAns = sTi(input,n-1);
	return (smallAns*(10))+(int)input[n-1]-48;
}

void pairStar(char input[],int n){
	if(n==0) return;
	pairStar(input+1,n-1);
	if(input[0]==input[1]){
		for(int i=strlen(input);i>1;i--){
			input[i]=input[i-1];
		}
		input[1]='*';
	}
}

int tOh(){
	
}

int main(){
	
	char input[] = "aaaaa";
	pairStar(input,5);
	cout<<input<<endl;
	return 0;
}
