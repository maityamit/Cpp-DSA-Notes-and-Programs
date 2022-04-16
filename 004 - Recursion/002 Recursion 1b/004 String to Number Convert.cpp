#include <iostream>
#include<string.h>

using namespace std;
int helper(char input[],int end){
    if(end==0){
        return (int)input[0]-48;
    }
    int ans = (int)input[end]-48;
    int res = helper(input,end-1);
    return (res*10)+ans;
}
int stringToNumber(char input[]) {
    // Write your code here
    
    return helper(input,strlen(input)-1);

}


int main() {
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}

