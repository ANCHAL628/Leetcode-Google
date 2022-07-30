class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if(n == 1){
            return 0 ;
        }if(n == 2){
            if(nums[n-1] > nums[n-2]){
                return 1 ;
            }else{
                return 0 ;
            }
        }
        int lower = 0 ;
        int higher = n-1 ;
        while(lower <= higher){
            int mid = lower+(higher-lower)/2 ;
            if(mid > 0 && mid < n-1){
               if((nums[mid] > nums[mid+1])&&(nums[mid] > nums[mid-1])){
                   return mid ;
               }else if(nums[mid] < nums[mid+1]){
                   lower = mid+1 ;
               }else{
                   higher = mid-1 ;
               }}
            else if(mid == 0){
                 if(nums[mid] > nums[mid+1]){
                     return mid ;
                 }else{
                     return mid+1 ;
                 }
            }else if(mid == n-1){
                if(nums[mid] > nums[mid-1]){
                    return mid ;
                }else{
                    return mid-1 ;
                }
                
            }
                  }
                  
                  return-1 ;
                  }
            
                
               
};