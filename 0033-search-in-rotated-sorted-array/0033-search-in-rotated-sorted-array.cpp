class Solution {
public:
    //O(log n)
    int search(vector<int>& nums, int target) {
      //use O(n) --> use a for loop for the same
        //O(log n)
         int low = 0 ;
        int high = nums.size()-1 ;
        while(low <= high){
            int mid = low+(high-low)/2 ;
            if(nums[mid] == target){
                return mid ;
            }
            else if(nums[low] <= nums[mid]){
                if(nums[low] <= target && nums[mid] >= target){
                    high = mid-1 ;
                }else{
                    low = mid+1 ;
                }
            }else{
                if(nums[high] >= target && target >= nums[mid]){
                    low = mid+1 ;
                }else{
                    high = mid-1 ;
                }
            }
        }
        return -1 ;
    }
};