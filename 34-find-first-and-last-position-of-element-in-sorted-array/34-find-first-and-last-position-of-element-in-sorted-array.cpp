class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       vector<int>answer(2)  ;
        answer[0] = firstIndex(nums,target) ;
        answer[1] = LastIndex(nums,target) ;
        return answer ;
    }
    int firstIndex(vector<int>& nums, int target){
        int low = 0 ;
        int high = nums.size()-1 ;
        int ans = -1 ;
        while(low <= high){
            int mid = low+(high-low)/2 ;
            if(nums[mid] == target){
                ans = mid ;
                high = mid-1 ;
            }else if(nums[mid] < target){
                low = mid+1 ;
            }else{
                high = mid-1 ;
            }
        }
        return ans ;
    }
     int LastIndex(vector<int>& nums, int target){
        int low = 0 ;
        int high = nums.size()-1 ;
        int ans = -1 ;
        while(low <= high){
            int mid = low+(high-low)/2 ;
            if(nums[mid] == target){
                ans = mid ;
                low = mid+1 ;
            }else if(nums[mid] > target){
                high = mid-1 ;
            }else{
                low = mid+1 ;
            }
        }
        return ans ;
    }
    
};