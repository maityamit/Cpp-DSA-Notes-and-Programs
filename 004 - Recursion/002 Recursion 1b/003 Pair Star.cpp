//Given a string S, compute recursively a new string 
//where identical chars that are adjacent in the 
//original string are separated from each other by a "*".


#include<string.h>
#include<iostream>
using namespace std;
void pairStar(char input[]) {
    // Write your code here
    if(strlen(input)==0 || strlen(input)==1){
        return;
    }
    pairStar(input+1);
    if(input[0]==input[1]){
        for(int i=strlen(input);i>0;i--){
            input[i+1]=input[i];
        }
        input[1]='*';
       // input[strlen(input)]='\0';
    }

}

int main() {
   char input[]="hello";
   pairStar(input);
   cout << input << endl;
}

