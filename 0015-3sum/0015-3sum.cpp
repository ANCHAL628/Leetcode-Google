class Solution {
public:
    //O(n^3) -> use three 
    //O(n^2) -> use two ka square
    vector<vector<int>> threeSum(vector<int>& nums) {
      //if size is less than 3 then return it
        vector<vector<int>>answer ;
        if(nums.size()<3){
            return answer ;
        }
        sort(nums.begin(),nums.end()) ;
        for(int i = 0 ; i < nums.size() ; i++){
            //removing duplicacy
            if(i == 0 || (nums[i-1] != nums[i])){
                int low = i+1 ;
                int high = nums.size()-1 ;
                while(low < high){
                    int sum = nums[low]+nums[high]+nums[i] ;
                    if(sum == 0){
                       answer.push_back({nums[i],nums[low],nums[high]})  ;
                    
                    while(low < high && nums[low+1] == nums[low]){
                        low++ ;
                    }
                     while(low < high && nums[high-1] == nums[high]){
                        high--  ;
                    }
                    low++ ;
                    high-- ;
                    }
                    else if(sum < 0){
                        low++ ;
                    }else{
                        high--;
                    }
                }
            }
        }
        return answer ;
    }
};
//