class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n=nums.size();
        int sumsq=0;
        
        for(int i=1;i<=n;i++){
            if(n % i == 0){
          sumsq+=nums[i-1]*nums[i-1];
            }
        }
        return sumsq;
    }
};