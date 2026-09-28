class Solution {
public:
    bool isValid(string s) {
        int n =s.length();
        stack<char>ch;
        for(int i =0;i<n;i++){
           if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
            ch.push(s[i]);
           }
           if(s[i]==')'){
            if(ch.empty() || ch.top()!='('){
             return false;
             
            
           }ch.pop();
           }
            if(s[i]==']' ){
            if(ch.empty() || ch.top()!='[' ){
                 return false;
            
           
           }ch.pop();
           }
            if(s[i]=='}'){
            if(ch.empty() || ch.top()!='{'){
                 return false;
            
           
           }ch.pop();
            }
        }
        return ch.empty();
    }
};