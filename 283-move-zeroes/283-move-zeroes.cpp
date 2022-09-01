class Solution {
public:
    //not worst
    void moveZeroes(vector<int>& nums) {
       //O(n)  
        int count = 0 ;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] != 0){
               swap(nums[i],nums[count]) ;
                count++ ;
            }
        }
    }
};