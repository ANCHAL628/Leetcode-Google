class Solution {
public:
    void sortColors(vector<int>& nums) {
      //nlogn
     int low = 0 ;
     int mid = 0 ;
     int end = nums.size()-1 ;
     while(mid <= end){
         if(nums[mid] == 0){
             swap(nums[mid],nums[low]) ;
             mid++ ;
             low++ ;
         }else if(nums[mid] == 1){
             mid++ ;
         }else if(nums[mid] == 2){
             swap(nums[mid],nums[end]) ;
             end-- ;
            // mid++ ;
         }
      }
    }
};