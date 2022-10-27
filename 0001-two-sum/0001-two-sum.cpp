class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
 /*       //O(n^2)
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
          
          ///
       }
        return fin ;*/
        //Optimal
      unordered_map<int,int>mp ;
        vector<int>ans ;
      for(int i = 0 ; i < nums.size() ; i++){
          if(mp.find(target-nums[i]) != mp.end()){
              ans.push_back(i) ;
              ans.push_back(mp[target-nums[i]]) ;
              break ;
          }
          mp[nums[i]] = i ;
      }
        return ans ;
    }
};