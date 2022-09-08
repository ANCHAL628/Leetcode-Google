class Solution {
public:
    //tc : O(n)
    //sc : O(n)
    vector<int> productExceptSelf(vector<int>& nums) {
      //use prefix sum technique
      vector<int>prefix(nums.size(),1) ;
        int product = 1 ;
      for(int i = 1 ; i < nums.size() ; i++){
          product *= nums[i-1] ;
          prefix[i] = product ;
      }
        product = 1 ;
       for(int i = nums.size()-2 ; i >= 0 ; i--){
          product *= nums[i+1] ;
          prefix[i] *= product ;
      }
      return prefix ;
    }
};


































































































