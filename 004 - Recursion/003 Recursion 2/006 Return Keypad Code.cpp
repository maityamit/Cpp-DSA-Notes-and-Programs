#include <string>
#include <iostream>
#include <string>
using namespace std;

int keypad(int num, string output[]){

	
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
