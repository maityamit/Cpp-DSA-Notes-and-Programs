#include <string.h>
#include<iostream>
using namespace std;
bool helper(char str[],int s,int e){
    
    if(s>=e-1){
        return true;
    }
    if(str[s]!=str[e]){
        return false;
    }else{
        return helper(str,s+1,e-1);
    }
     
}

bool checkPalindrome(char input[]) {
   int start=0,end = strlen(input);
   return helper(input,start,end-1);
}

int main() {
  char arr[] = {"utyuuytu"};
  cout <<checkPalindrome(arr);
  return 0;
}
