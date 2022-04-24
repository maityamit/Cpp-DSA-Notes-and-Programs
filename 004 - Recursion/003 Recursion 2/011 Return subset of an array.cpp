#include <iostream>
using namespace std;

int subset(int input[], int n, int output[][20]) {
     
    if(n==0){
        output[0][0]=0;
        return 1;
    }
    int ans = subset(input+1,n-1,output);
    for(int i=0;i<ans;i++){
        output[i+ans][0] = output[i][0]+1;
        output[i+ans][1] = input[0];
    }
    for(int i=0;i<ans;i++){
        int col = output[i+ans][0] ;
        for(int k=2;k<=col;k++){
            output[i+ans][k]=output[i][k-1];
        }
    }
    
    return ans*2;

}
int main() {
  int input[20],length;
  int output[10][20];

  cin >> length;
  for(int i=0; i < length; i++){
  	cin >> input[i];
  }
 



  int size = subset(input, length, output);
  for( int i = 0; i < size; i++) { 
	for( int j = 1; j <= output[i][0]; j++) { 
		cout << output[i][j] << " ";
    }
    cout << endl;
  }

  return 0;

}

