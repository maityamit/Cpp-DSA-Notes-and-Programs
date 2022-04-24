#include <iostream>
using namespace std;

int helper(int input[], int n,int output[][20]){
     if(n==0) {
      output[0][0]=0;
      return 1;
  }

  int smallOutput = helper(input+1,n-1,output);
  for(int i=smallOutput;i<2*smallOutput;i++) 
  {
      output[i][0]=output[i-smallOutput][0]+1;
      output[i][1]=input[0];
  }
    for(int i=smallOutput;i<2*smallOutput;i++)
    {
        for(int j=2;j<=output[i][0];j++)
        {
            output[i][j]=output[i-smallOutput][j-1];
        }
    }
    

  return 2*smallOutput;
    
}
void printSubsetsOfArray(int input[], int size) {
	// Write your code here
    int output[35000][20];
    int z = helper(input,size,output);
    for( int i = 0; i < z; i++) { 
	for( int j = 1; j <= output[i][0]; j++) { 
		cout << output[i][j] << " ";
    }
    cout << endl;
  }
    
}

int main() {
  int input[1000],length;
  cin >> length;
  for(int i=0; i < length; i++)
  	cin >> input[i];
  printSubsetsOfArray(input, length);
}

