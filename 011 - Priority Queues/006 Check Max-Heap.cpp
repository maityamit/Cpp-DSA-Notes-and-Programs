#include<queue>
bool isMaxHeap(int arr[], int n) {
    // Write your code here
    int i = 0;
    int L=(2*i)+1;
    int R=(2*i)+2;
    while(L<n){
        if(!(arr[i]>arr[L] && arr[i]>arr[R])){
            return false;
        }
        i++;
        L=(2*i)+1;
        R=(2*i)+2;
    }
    return true;
}
