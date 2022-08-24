int fibbonaci(int n){
	int *arr = new int[n+1];
	int arr[0]=1;
	int arr[1]=1;
	for(int i=2;i<=n;i++){
		arr[i]=arr[i-1]+arr[i-2];
	}
	return arr[n];
}
