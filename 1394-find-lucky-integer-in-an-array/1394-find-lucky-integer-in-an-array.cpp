class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>freq;
        for(int i =0;i<n;i++){
           freq[arr[i]]++;
          
        }
        int lucky=-1;

        for(auto [i,count]:freq ){
            if(i==count){
                lucky=max(lucky,i);
            }
        }
        return lucky;
    }
};