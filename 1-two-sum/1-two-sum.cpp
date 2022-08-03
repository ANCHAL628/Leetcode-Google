class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     //first approach which comes to my mind sis I will be taking each element as single one time complexity O(n^2)
     //Second a+b = c so we have to find a and b so we can do one thing we can b = c-a we can just find b for each element if present then tc : O(n)
        unordered_map<int,int>mp ;
        vector<int>ans ;
        for(int i = 0 ; i < nums.size() ; i++){
           if(mp.find(target-nums[i]) != mp.end()){
              ans.push_back(i)  ;
              ans.push_back(mp[target-nums[i]]) ;
              break ;
           }
            mp[nums[i]] = i ;
        }
        return ans ;
    }
};