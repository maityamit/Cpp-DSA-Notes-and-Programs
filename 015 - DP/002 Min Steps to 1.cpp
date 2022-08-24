int countStepsToOne(int n)
{
	int *arr = new int[n+1];
    arr[1]=0;
    for(int i=1;i<=n;i++){
        int x=INT_MAX,y=INT_MAX;
        if(i%3==0) x=arr[i/3];
        if(i%2==0) y=arr[i/2];
        arr[i] = 1+min(arr[i-1],min(x,y));
    }
    return arr[n]-1;
}
