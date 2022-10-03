class Solution {
public:
    //
    int trap(vector<int>& height) {
        //O(n) by precomputting the leftmax and rightnax
        vector<int>LeftMax(height.size()) ;
        vector<int>RightMax(height.size()) ;
        preCompLeft(height,LeftMax,1,height.size()) ;
        preCompRight(height,RightMax,height.size()-2,0) ;
        int ans = 0 ;
        for(int i = 1 ; i < height.size()-1 ; i++){
            ans += (min(LeftMax[i],RightMax[i])-height[i]) ;
        }
        return ans ;
    }
    void preCompLeft(vector<int>&height,vector<int>&leftMax,int startInd,int endInd){
         leftMax[0] = height[0] ;
         for(int i = 1 ; i < endInd ; i++){
             leftMax[i] = max(leftMax[i-1],height[i]) ;
         }
    }
     void preCompRight(vector<int>&height,vector<int>&RightMax,int startInd,int endInd){
         RightMax[startInd+1] = height[startInd+1] ;
         for(int i = startInd ; i >= 0 ; i--){
             RightMax[i] = max(RightMax[i+1],height[i]) ;
         }
    }
};