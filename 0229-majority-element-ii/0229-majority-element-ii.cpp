class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
          int n = nums.size();
    unordered_map<int,int> mpp;
    int mini = (n/3) + 1;
    vector<int> res;

    for(int i=0; i<n; i++) {
        mpp[nums[i]]++;

        if(mpp[nums[i]] == mini) {
            res.push_back(nums[i]);
        }
    }
    return res;
    }
};
