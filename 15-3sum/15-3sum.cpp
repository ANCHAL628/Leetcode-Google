class Solution {
public:
    //O(n^2)
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>answer ;
        if(nums.size() < 3){
            return answer ;
        }
        sort(nums.begin(),nums.end()) ;
        for(int i = 0 ;  i < nums.size() ; i++){
            if(i == 0 || nums[i-1] != nums[i]){
                int low = i+1 ;
                int end = nums.size()-1 ;
                while(low < end){
                    int sum = nums[i]+nums[low]+nums[end] ;
                    if(sum == 0){
                        answer.push_back({nums[i],nums[low],nums[end]}) ;
                        while(low < end && nums[low] == nums[low+1]){
                            low++ ;
                        }
                        while(low < end && nums[end] == nums[end-1]){
                            end-- ;
                        }
                        low++ ;
                        end-- ;
                    }else if(sum < 0){
                        low++ ;
                    }else{
                        end-- ;
                    }
                }
            }
        }
       return answer ; 
    }
};