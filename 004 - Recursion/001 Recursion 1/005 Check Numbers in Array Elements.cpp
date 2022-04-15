#include <iostream>
using namespace std;

bool checkNumber(int input[], int size, int x) {

    
//     if(size==0){
//         return false;
//     }
//     if(size == 1 && input[0]==x){
//         return true;
//     }
//     if(input[0]==x){
//         return true;
//     }
//     return checkNumber(input+1,size-1,x);
	
	
    if(size==0){
        return false;
    }
    bool res = checkNumber(input+1,size-1,x);
    if(input[0]==x){
        return true;
    }else{
        return res;
    }

}

int main(){
	int arr[] = {2,9,4,5,6};
	cout<<checkNumber(arr,5,90);
}

