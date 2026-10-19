class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int n=nums.size();
      for(int i=0;i<=n-1;i++){
       int  j=i;
        while(j>0 && nums[j-1]>nums[j]){
           swap(nums[j-1],nums[j])  ;
           j--;

        }
     }

        vector<int>temp;
        for(int i =0 ;i< nums.size();i++){
            if(nums[i]==target){
                    temp.push_back(i);
            }
        }
        return temp;
    }
};