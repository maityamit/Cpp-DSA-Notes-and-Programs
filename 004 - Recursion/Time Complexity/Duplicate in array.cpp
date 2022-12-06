int findDuplicate(int *arr, int n)
{
    //Write your code here
    int sum =0,sum2=0;
    for(int i=0;i<n;i++){
        sum+= arr[i];
    }
    for(int i=0;i<n-1;i++){
        sum2+= i;
    }
    return sum-sum2;
}
