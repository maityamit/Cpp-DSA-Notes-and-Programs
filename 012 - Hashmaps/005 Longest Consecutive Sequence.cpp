#include <bits/stdc++.h>
vector<int> helper(int* arr,int n){
    unordered_map<int,int> map;
    for(int i=0;i<n;i++) map[arr[i]]++;
    
    int start;
    int end;
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        int count=0;
        int temp = arr[i];
        while(map.count(temp+1)==1){
            count++;
            temp++;
        }
        if(count>max){
            start=arr[i];
            end=temp;
            max=count;
        }
    }
    return {start,end};
}
vector<int> longestConsecutiveIncreasingSequence(int *arr, int n) {
    
    
    return helper(arr,n);
    
    
    
    // Your Code goes here
    // unordered_map<int,int> seen;
    // for(int i=0;i<n;i++){
    //     seen[arr[i]]++;
    // }
    // int max=INT_MIN;
    // int count=0;
    // int start,end;
    // for(int i=0;i<n;i++){
    //     int temp = arr[i]+1;
    //     while(seen.count(temp)==1){
    //         count++;
    //         temp++;
    //     }
    //     if(count>max){
    //         start=arr[i];
    //         end=temp-1;
    //         max=count;
    //     }
    //     count=0; 
    // }
    // vector<int> vt;
    // vt.push_back(start);
    // vt.push_back(end);
    // return vt;
}
