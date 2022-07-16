#include<stack>
bool checkRedundantBrackets(string expression) {
	// Write your code here
    stack<char> st;
    int count=0;
    for(int i=0;i<expression.length();i++){
        
        if(expression[i]!=')'){
            st.push(expression[i]);
        }else{
            while(st.top()!='('){
            count++;
            st.pop();
           }
            st.pop();
            if(count==1 || count==0){
            return true;
            break;
          }
        }
        count=0;
    
    }
    return false;
}
