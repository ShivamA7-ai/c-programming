#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0 ;
        int maxe=0;
        for(int i  = 0 ; i < nums.size() ; i++ ){
        if(nums[i]==1){
            count++;
            maxe=max(maxe,count);
        }else{
            count=0;
        }
       
        }
        return maxe;
    }
};

int main(){
    Solution s1;

    vector<int>a={1,1,0,1,1,1,0,0,1,1,1,1};
    cout<<"maximum consecutive ones :"<<s1.findMaxConsecutiveOnes(a);
    return 0;

}