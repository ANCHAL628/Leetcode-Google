class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //use postfix and prefix technique
        vector<int>prefix(nums.size(),1) ;
        int product = 1 ;
      //  nums[0] = 1 ;
        //prefix multiplication till i-1 so it would be for presentt
        for(int i = 1 ; i < nums.size() ; i++){
            product *= nums[i-1] ;
            prefix[i] = product ;
        }
        product = 1 ;
        
        //then go ahead with postfix till i+1 ould be storing for i
        for(int i = nums.size()-2  ; i >= 0 ; i--){
            product *= nums[i+1] ;
            prefix[i] *= product ;
        }
        return prefix ;
    }
};