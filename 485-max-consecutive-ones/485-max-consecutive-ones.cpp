/*class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        //we will keep a count variable as its subarray so we will update a max variable when we encounter 0
        int maxConsOnes = 1 ;
        int count = 0 ;
        for(int i = 0 ; nums.size() ; i++){
            if(nums[i] == 1){
                count++ ;
            }else{
                maxConsOnes = max(maxConsOnes,count) ;
                count = 0 ;
            }
        }
        maxConsOnes = max(maxConsOnes,count) ;
        return maxConsOnes ;
    }
};*/
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = 0;
        int count = 0 ;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == 1){
                count++ ; 
                maxi = max(maxi,count) ;
            }else{
                count = 0;
            }
        }
        return maxi ;
    }
};