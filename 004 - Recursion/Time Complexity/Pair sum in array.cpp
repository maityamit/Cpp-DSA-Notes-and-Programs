#include<unordered_map>
int pairSum(int *arr, int n, int num)
{
    int count = 0;
    unordered_map<int,int> map;
    for(int i=0;i<n;i++){
        int temp = num-arr[i];
        if(map.count(temp)==1){
            count+=map[temp];
        }
        map[arr[i]]++;
    }
    return count;
}
