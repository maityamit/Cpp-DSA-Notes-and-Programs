#include<unordered_map>
#include<cmath>

int getPairsWithDifferenceK(int *arr, int n, int k) {
    
    
    unordered_map<int,int> seen;
    int count=0;
    for(int i=0;i<n;i++){
        int a = arr[i]+k;
        int b = arr[i]-k;
        if(seen.count(a)>=1){
            count+=seen[a];
        }
        else if(seen.count(b)>=1){
            count+=seen[b];
        }
        seen[arr[i]]++;
    }
    return count;
}
