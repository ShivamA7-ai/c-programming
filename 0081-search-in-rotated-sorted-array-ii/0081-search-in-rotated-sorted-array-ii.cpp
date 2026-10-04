class Solution {
public:
    bool search(vector<int>& nums, int target) {
        return helper(nums, nums.size()-1,target);
    }

    bool helper(vector<int>& nums,int n,int target) {

        if(n<0) {
            return false;
        }

        if(nums[n]==target) {
            return true;
        }

        return helper(nums,n-1,target);
    }
};