class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
       
        int xleft=max(rec1[0],rec2[0]);
        int ybottom=max(rec1[1],rec2[1]);
        int xright=min(rec1[2],rec2[2]);
        int ytop=min(rec1[3],rec2[3]);
        int ht=ytop-ybottom;
        int width=xright-xleft;
        if(ht>0 && width>0){
            return true ;
        }
       
return false;
    }
};