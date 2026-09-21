class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int k) {
     int st=0;
    int n=arr.size();
    int m=arr[0].size();
    int end=n*m-1;
    
    while(st<=end){
       int mid=st+(end-st)/2;
        
         int row = mid / m;
            int col = mid % m;


        if(arr[row][col] > k){
          end =mid-1;
        }else if(arr[row][col]<k){
            st=mid+1;
        }else{
           
            return true;
            
        }
    }
    return false;
    }
};