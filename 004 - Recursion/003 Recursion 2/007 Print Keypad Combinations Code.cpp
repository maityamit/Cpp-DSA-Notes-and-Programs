#include <iostream>
#include <string>
using namespace std;


int keypad(int num, string output[]){
    /* Insert all the possible combinations of the integer number into the output string array. You do not need to
    print anything, just return the number of strings inserted into the array.
    */
   string key[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

    if(num==0){
        output[0]="";
        return 1;
    }
    int last = num%10;
    int smallOutputSize = keypad(num/10,output);

    // Copy output array
    string* temp = new string[smallOutputSize];
    for(int i=0;i<smallOutputSize;i++){
        temp[i]=output[i];
    }

    for(int i=0;i<key[last].size();i++){
        for(int j=0;j<smallOutputSize;j++){
            output[i*smallOutputSize+j] = temp[j]+key[last][i];
        }
    }
    return key[last].length()*smallOutputSize;
    
}

void printKeypad(int num){
    
    string output[10000];
    /*
    Given an integer number print all the possible combinations of the keypad. You do not need to return anything just print them.
    */
    
    int ans = keypad(num,output);
    for(int i=0;i<ans;i++){
        cout<<output[i]<<endl;
    }
    
}

int main(){
    int num;
    cin >> num;

    printKeypad(num);

    return 0;
}

