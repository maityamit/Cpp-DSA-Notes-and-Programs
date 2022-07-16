#include<stack>
int countBracketReversals(string s) {
	// Write your code here
    if(s.length()%2!=0){
		return -1;
	}
	stack<char> st;
	for(int i=0;i<s.length();i++){
		if(s[i]=='}'&&st.size()!=0&&st.top()=='{'){
			st.pop();
		}else{
			st.push(s[i]);
		}
		
	}
	char c1,c2;
	int count=0;
	while(st.size()!=0){
		c1=st.top();
        st.pop();
		c2=st.top();
		st.pop();
		if(c1==c2){
			count++;
		}else if(c1=='{'){
			count+=2;
		}
	}
	return count;
    
}
