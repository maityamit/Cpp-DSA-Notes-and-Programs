int findUnique(int *arr, int n) {
    // Write your code here
    int res = arr[0];
	for(int i=1;i<n;i++) res^=arr[i];
	return res;
}
