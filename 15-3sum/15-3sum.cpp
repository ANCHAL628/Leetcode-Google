class Solution {
public:
    //O(n^3) -> use three 
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>trip ;
        if(nums.size() < 3){
            return trip ;
        }
        sort(nums.begin(),nums.end()) ;
        for(int i = 0 ;  i < nums.size() ; i++){
            if(i == 0 || nums[i-1] != nums[i]){
                int low = i+1 ;
                int high = nums.size()-1 ;
                //int findSum = 0-(nums[low]+nums[high]) ;
                while(low < high){
                  int sum = nums[i]+nums[low]+nums[high]  ;
                  if(sum == 0){
                     trip.push_back({nums[i],nums[low],nums[high]}) ;
                       while(low < high && nums[low] == nums[low+1]){
                            low++ ;
                        }
                        while(low < high && nums[high] == nums[high-1]){
                            high-- ;
                        }
                        low++ ;
                        high-- ;
                  }else if(sum < 0){
                      low++ ;
                  }else{
                      high-- ;
                  }
                }
            }
        }
        return trip ;
    }
};