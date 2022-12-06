#include <bits/stdc++.h>
int arrayRotateCheck(int *input, int size)
{
  
    
    int min=input[0];
    int temp = 0;
    
    for(int i=1;i<size;i++){
        if(min>input[i]){
            min = input[i];
            temp = i;
        }
    }
    return temp;
    
}
