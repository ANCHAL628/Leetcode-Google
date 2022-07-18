class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       //copy first of all non zeroes eleent then zero and then move it to new vector
     // tc  O(n),sc O(n)
    //we will be keeping count of no zeroes eement as soon as we cencounter zero e will be swaping
   //tc O(n)
        int count = 0 ; 
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] != 0){
                swap(nums[count],nums[i]) ;
                count++ ;
            }
        }
    }
};