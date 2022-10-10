class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int sum = 0 ;
       vector<int>fin ;
       bool found = false ;
       for(int i = 0 ; i < nums.size() ; i++){
           for(int j = i+1 ; j < nums.size() ; j++){
               if(nums[i]+nums[j] == target){
                   fin.push_back(i) ;
                   fin.push_back(j) ;
                   found = true ;
                   if(found == true){
                   break ;
                   }
               }
           }
           if(found == true){
                   break ;
            }
           
       }
        return fin ;
    }
};