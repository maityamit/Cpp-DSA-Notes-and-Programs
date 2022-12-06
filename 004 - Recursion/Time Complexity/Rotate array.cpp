#include <algorithm>

void rotate(int *input, int d, int n)
{
    //Write your code here
    reverse(input,input+d);
    reverse(input+d,input+n);
    reverse(input,input+n);
    
}
