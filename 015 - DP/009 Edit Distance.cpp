int editDistance(string s1, string s2) {
	// Write your code here
    if(s1.length()==0 && s2.length()==0) return 0;
    if(s1.length()==0 && s2.length()!=0) return s2.length();
    if(s1.length()!=0 && s2.length()==0) return s1.length();
    
    if(s1[0]==s2[0]){
        return editDistance(s1.substr(1),s2.substr(1));
    }
    
    int a = editDistance(s1.substr(1),s2)+1;
    int b = editDistance(s1,s2.substr(1))+1;
    int c = editDistance(s1.substr(1),s2.substr(1))+1;
    
    return min(a,min(b,c));
}
