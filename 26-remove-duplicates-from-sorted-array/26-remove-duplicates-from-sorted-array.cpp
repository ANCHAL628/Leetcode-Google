class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //Sc = O(n)
        //tc = O(n) when we will be using the vectors
        //sc  O(1) and tc : O(1)
        int temp = nums[0] ;
        int curr_In = 1 ;
        nums[0] = temp ;
        for(int i = 1 ; i < nums.size() ; i++){
            if(temp != nums[i]){
                nums[curr_In] = nums[i] ;
                curr_In++ ;
                temp = nums[i] ;
            }
        }
        return curr_In ;
        
    }
};