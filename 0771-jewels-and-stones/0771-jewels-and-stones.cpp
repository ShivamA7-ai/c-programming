class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int n=stones.length();
        int count=0;
        for(int i=0;i<n;i++ ){
            for(int j=0;j<jewels.length();j++){
           if(stones[i]==jewels[j]){
             count++;
            }
        }
    }
        return count;
    }
};