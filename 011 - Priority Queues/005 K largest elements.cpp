#include<vector>
#include<queue>
vector<int> kLargest(int input[], int n, int k){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */

    priority_queue<int , vector<int> , greater<int>> pq;
    for(int i=0;i<k;i++){
        pq.push(input[i]);
    }
    for(int i=k;i<n;i++){
        if(pq.top()<input[i]){
            pq.pop();
            pq.push(input[i]);
        }
    }
    vector<int> vt;
    while(pq.size()!=0){
        vt.push_back(pq.top());
        pq.pop();
    }
    return vt;
    
}

