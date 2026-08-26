class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> elements;

        for (int i = 0; i < n; i++) {
            int cnt = 1;
            for (int j = i + 1; j < n; j++) {
                if (nums[i] == nums[j]) {
                    cnt++;
                }
            }
            if (cnt > n / 3) {
                
                if (find(elements.begin(), elements.end(), nums[i]) == elements.end()) {
                    elements.push_back(nums[i]);
                }
            }
        }
        return elements;
    }
};
