#include<queue>
vector<int> kSmallest(int arr[], int n, int k) {
    // Write your code here
    priority_queue<int> pq;
    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }
    for(int i=k;i<n;i++){
        if(pq.top()>arr[i]){
            pq.pop();
            pq.push(arr[i]);
        }
    }
    vector<int> vt;
    while(pq.size()!=0){
        vt.push_back(pq.top());
        pq.pop();
    }
    return vt;
}
