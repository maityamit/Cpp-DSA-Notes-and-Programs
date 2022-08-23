#include <unordered_map>
int highestFrequency(int arr[], int n) {
    // Write your code here
    int max=0,count=0;
    unordered_map<int,int> seen;
    for(int i=0;i<n;i++){
        seen[arr[i]]++;
        if(seen[arr[i]]>count){
            count=seen[arr[i]];
        }
    }
    for(int i=0;i<n;i++){
        if(count==seen[arr[i]]){
            return arr[i];
        }
    }
}
