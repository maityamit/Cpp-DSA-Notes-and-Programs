#include<unordered_map>
#include<string>
string uniqueChar(string str) {
	// Write your code here
    string st;
    unordered_map<char,int> seen;
    for(int i=0;i<str.length();i++){
        if(seen.count(str[i])==0){
            st+=str[i];
        }
        seen[str[i]]++;
    }
    return st;
    
}
