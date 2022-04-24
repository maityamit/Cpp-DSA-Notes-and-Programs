#include <string>
#include <iostream>
#include <string>
using namespace std;

int keypad(int num, string output[]){
    /* Insert all the possible combinations of the integer number into the output string array. You do not need to
    print anything, just return the number of strings inserted into the array.
    */
    string keypad_st[8] =  {"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    if(num==0){
        output[0]="";
        return 1;
    }
    int hello = keypad(num/10,output);
    int count = ((((num%10)-2)==5)||(((num%10)-2)==7))?4:3;
    int lo =hello;
    for(int j=0;j<count;j++){
        for(int i=0;i<hello;i++){
            output[i+lo]=output[i]+keypad_st[(num%10)-2][j];
        }
        lo=lo+lo;
    }
    return hello*count;
}

int main(){
    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}
