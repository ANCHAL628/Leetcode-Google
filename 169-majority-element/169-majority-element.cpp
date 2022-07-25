class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //Naive Approach - O(n^2) ---> check or each element how many times it occur then check
        //Optimal Approach - O(n) ---> Moore's voting algo
         int count = 0 ;
        int candidate = 0 ;
        for(auto it : nums){
            if(count == 0){
                candidate = it ;
            }if(candidate == it){
                count++ ;
            }else{
                count-- ;
            }
        }
         return candidate ;
    }
};