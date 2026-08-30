class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        
        int maxi=INT_MIN;
        int maxindex;
        int mini=INT_MAX;
        int minindex;
        for(int i= 0;i< n;i++){
                if(nums[i]>maxi){
                    maxi=nums[i];
                   maxindex=i;
                }if(nums[i]<mini){
                    mini=nums[i];
                    minindex=i;
                }
         }

           if(minindex>maxindex){
            swap(minindex,maxindex);
           }
          int left=maxindex+1;
          int right=n-minindex;
          int bothside=(minindex+1)+(n-maxindex);

  
         
     return  min({left,right,bothside});;
    }
};