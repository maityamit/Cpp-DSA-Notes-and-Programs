//Given a string, 
//compute recursively a new string 
//where all appearances of "pi" have been replaced by "3.14".


#include<iostream>
#include<string.h>
using namespace std;

void replacePi(char input[]) {
	// Write your code here
    if(strlen(input)==0 || strlen(input)==1){
		return;
	}
	replacePi(input+1);
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
int main() {
    char input[]="pixxpi";
    replacePi(input);
    cout << input << endl;
}
