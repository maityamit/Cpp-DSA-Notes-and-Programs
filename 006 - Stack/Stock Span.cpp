#include<stack>
int* stockSpan(int *price, int size)  {
	// Write your code here
    stack<int> st;
    int *ans = new int[size];
    ans[0]=1;
    st.push(0);
    for(int i=1;i<size;i++){ 
        while(st.size()!=0 && price[i]>price[st.top()]){
            st.pop();
        }
        if(st.size()==0){
            ans[i]=i+1;
        }else{
            ans[i]=i-st.top();
        }
        st.push(i);
    }
    return ans;
}
