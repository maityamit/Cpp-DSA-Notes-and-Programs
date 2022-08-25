#include<queue>
void findMedian(int *arr, int n)
{
    
    
    if(n==0) return;
    
    priority_queue<int> max;
    priority_queue<int,vector<int>,greater<int>> min;
    max.push(arr[0]);
    cout<<max.top()<<" ";
    for(int i=1;i<n;i++){
        int x=arr[i];
        if(max.size()>min.size()){
            if(x>max.top()){
                min.push(x);
            }else{
                min.push(max.top());
                max.pop();
                max.push(x);
            }
            cout<<(max.top()+min.top())/2<<" ";
        }else{
            if(x<max.top()){
                max.push(x);
            }else{
                min.push(x);
                max.push(min.top());
                min.pop();
            }
            cout<<max.top()<<" ";
        }
    }


}
