#include <iostream>
using namespace std;
void printFN(int arr[],int n){
    for(int i=0;i<n;i++){
        std::cout << arr[i] << std::endl;
    }
}
int main() {

   int arr[5] = {1,2,3,4,5};
   printFN(arr,5);



	return 0;
}
