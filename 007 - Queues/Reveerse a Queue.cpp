#include<queue>
#include<stack>
void reverseQueue(queue<int> &input) {
	// Write your code here
    stack<int> st;
    
    while(!input.empty()){
        st.push(input.front());
        input.pop();
    }
    while(!st.empty()){
        input.push(st.top());
        st.pop();
    }
    
    
}
