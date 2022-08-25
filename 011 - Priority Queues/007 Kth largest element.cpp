#include<queue>
int kthLargest(int* arr, int n, int k) {
    // Write your code here
    priority_queue<int , vector<int> , greater<int>> pq;
    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }
    for(int i=k;i<n;i++){
        if(pq.top()<arr[i]){
            pq.pop();
            pq.push(arr[i]);
        }
    }
    return pq.top();
}
