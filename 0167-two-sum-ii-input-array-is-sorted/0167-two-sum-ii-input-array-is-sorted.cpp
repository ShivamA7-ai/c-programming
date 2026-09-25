class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
      /*  vector<int>ans;
        for(int i=0;i<numbers.size();i++){
            for(int j=i+1;j<numbers.size();j++){
                if(numbers[i]+numbers[j]==target){
                 ans.push_back(i+1); 
                 ans.push_back(j+1); 
                 return ans;
                }
            }
        }
        return ans;*/
        int st=0;
        int end=numbers.size()-1;
        vector<int>ans;
        while(st<end){
          if(numbers[st]+numbers[end]>target){
           end--;
          }else if(numbers[st]+numbers[end]<target){
            st++;
          }else{
            ans.push_back(st+1);
            ans.push_back(end+1);
            return ans;
          }
        }
        return ans;
    }
};