class Solution {
public:

    bool parity(vector<int> nums1, int minodd, int parity) {
        int n = nums1.size();

        for(int i=0;i< n;i++) {
            if(nums1[i]%2==0 && nums1[i]<minodd) {
                return false;
            }
        }

        return true;
    }

    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        int minodd =INT_MAX;

        for(int i=0; i <n;i++) {
            if(nums1[i]% 2 != 0) {
                minodd= min(minodd, nums1[i]);
            }
        }

        
        if(minodd ==INT_MAX) {
            return true;
        }

        return parity(nums1,minodd,0) || parity(nums1,minodd,1);
    }
};