class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        string ch="";
        for(int i=0;i<strs[0].length();i++){
            char current=strs[0][i];
            for(int j=1;j<n;j++){
                if(i>=strs[j].length() || strs[j][i]!=current){
                  return ch;
                }
                
            }ch+=current;
        }
        return ch;
    }
};