#include <climits> 
#include<unordered_map>
int lengthOfLongestSubsetWithZeroSum(int* arr, int n) {
    // Write your code here
    int max = INT_MIN;
    unordered_map<int,int> seen;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==0){
           if((i+1)>max){
                max=i+1;
            }
        }
        if(seen.count(sum)>=1){
            int temp = i-seen[sum];
            if(temp>max){
                max=temp;
            }
        }
        seen[sum]=i;   
    
    }
    return max;
}
