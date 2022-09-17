#include<iostream>
#include<cmath>
using namespace std;
int power(int x,int n){
	if(n==0) return 1;
	return power(x,n-1)*x;
}

void printNum(int n){
	if(n==0) return;
	printNum(n-1);
	cout<<n<<" ";
}

int numDigit(int n){
	if(n==0) return 0;
	return numDigit(n/10)+1;
}

int fibboncci(int n){
	if(n==0 || n==1) return 1;
	return fibboncci(n-1)+fibboncci(n-2);
}

int sumOfArray(int *arr,int n){
	if(n==0) return 0;
	return sumOfArray(arr+1,n-1)+arr[0];
}

bool checkNumber(int* arr,int n,int k){
	if(n==0) return false;
	if(arr[0]==k) return true;
	return checkNumber(arr+1,n-1,k);
}

int firstIndex(int* arr,int n,int k){
	if(n==0) return -1;
	int smallAns = firstIndex(arr+1,n-1,k);
	if(arr[0]==k){
		return 0;
	}else{
		if(smallAns==-1) return -1;
		else return smallAns+1;
	}
}

int lastIndex(int *arr,int n,int k){
	if(n==0) return -1;
	int smallAns = lastIndex(arr,n-1,k);
	if(arr[n-1]==k){
		return n-1;
	}else{
		return smallAns;
	}
}

int allIndices(int* arr,int n,int k,int* output){
	if(n==0) return 0;
	int smallAns = allIndices(arr,n-1,k,output);
	if(arr[n-1]==k){
		output[smallAns]=n-1;
		return smallAns+1;
	}else{
		return smallAns;
	}
}

int multiplication(int a,int b){
	if(b==1) return a;
	return a+multiplication(a,b-1);
}

int countZero(int n){
	if(n==0) return 1;
	if(n/10==0) return 0;
	if(n%10==0) return 1+countZero(n/10);
	return countZero(n/10);
}

double geometric(int k){
	if(k==0) return 1;
	return ((double)1/pow(2,k))+geometric(k-1);
}

bool palindrome(char* input,int s,int e){
	if(s>e) return true;
	bool ans;
	if(input[s]==input[e]) ans=true;
	else ans=false;
	return ans&palindrome(input+1,s+1,e-1);
}

int sumOfDigit(int n){
	if(n==0) return 0;
	return (n%10)+sumOfDigit(n/10);
}

int main(){
	int arr[] = {3,2,3,3,5};
	int *output = new int[5];
	char input[] = {"abcdssdcbtya"};
    int n = allIndices(arr,5,3,output);
    for(int i=0;i<n;i++){
    	cout<<output[i]<<" ";
	}
	return 0;
}
