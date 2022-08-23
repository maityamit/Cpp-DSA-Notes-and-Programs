#include <bits/stdc++.h>
int pairSum(int *arr, int n) {
	// Write your code here
    // unordered_map<int,int> seen;
    // int count=0;
    // for(int i=0;i<n;i++){
    //     seen[arr[i]]++;
    // }
    // unordered_map<int,int> :: iterator it = seen.begin();
    // while(it!=seen.end()){
    //     int f = it->second;
    //     int s = seen[0-(it->first)];
    //     count+=(f*s);
    //     seen[0-(it->first)]=0;
    //     it++;
    // }
    // return count;
    unordered_map<int, int>map;
    int k=0;
    int count=0;
    for(int i=0;i<n;i++){
        int a=k-arr[i];
        if(map.count(a)==1){
            count+=map[a];
        }
        map[arr[i]]++;
    }
    return count;
}
