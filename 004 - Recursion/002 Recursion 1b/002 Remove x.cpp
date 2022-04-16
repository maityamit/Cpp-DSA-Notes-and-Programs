//Given a string, compute recursively a new string where all 'x' chars have been removed.
#include<iostream>
#include<string.h>
using namespace std;

void removeX(char input[]) {
    // Write your code here
    if(strlen(input)==0){
        return;
    }
    removeX(input+1);
    if(input[0]=='x'){
        int i=0;
        for(i=0;i<strlen(input)-1;i++){
            input[i]=input[i+1];
        }
        input[i]='\0';
    }

}
int main() {
    char input[]="pixxpi";
    removeX(input);
    cout << input << endl;
}
