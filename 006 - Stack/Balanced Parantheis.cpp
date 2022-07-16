#include<stack>
bool isBalanced(string s) 
{
stack<char> st;
    
    for(int i=0;i<s.length();i++){
		if(s[i]=='('){
			st.push(s[i]);
		}else if(st.size()!=0 && s[i]==')' && st.top()=='('){
			st.pop();
		}else{
			return false;
		}
	}
	if(st.size()==0){
		return true;
	}else{
		return false;

}	

}
