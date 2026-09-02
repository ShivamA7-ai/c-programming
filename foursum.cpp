#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
//better aproach as brute consists of complexity of n^4

vector<vector<int>>foursum(vector<int> & nums,int target){
    int n = nums.size();
    set<vector<int>>st;

    for(int i = 0;i<n;i++){
        for(int j =i+1;j<n;j++){
            set<long long>hashset ;
            for(int k = j+1;k<n;k++){
                long long sum=nums[i]+nums[j];
                sum+=nums[k];
                long long fourth=target-(sum);
                if(hashset.find(fourth)!=hashset.end()){
                    vector<int>temp={nums[i],nums[j],nums[k],(int)fourth};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                    
                }
                hashset.insert(nums[k]);

            }
        }
    }
    vector<vector<int>>ans(st.begin(),st.end());
    return ans;
}

int main(){
    vector<int>arr={1,-2,3,5,7,9};
    int target=7;
    vector<vector<int>> ans = foursum(arr, target);

    for (auto &quad : ans) {
        for (int num : quad) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}