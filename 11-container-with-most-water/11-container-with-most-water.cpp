class Solution {
public:
    //tc : O(n)
    int maxArea(vector<int>& height) {
        int low = 0 ;
        int end = height.size()-1 ;
        int maxWater = INT_MIN ;
        while(low < end){
            maxWater = max(maxWater,min(height[low],height[end])*(end-low)) ;
            if(height[low] > height[end]){
                end-- ;
            }else{
                low++ ;
            }
        }
        return maxWater ;
    }
};