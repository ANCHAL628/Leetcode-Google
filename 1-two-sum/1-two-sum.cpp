class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //tc : O(n)
        //1,2
         unordered_map<int,int>mp ;
        vector<int>answer ;
        for(int i = 0 ; i < nums.size() ; i++){
            if(mp.find(target-nums[i]) != mp.end()){
                answer.push_back(i) ;
                answer.push_back(mp[target-nums[i]]) ;
                break ;
                
            }
            mp[nums[i]] = i ;
        }
        return answer ;
    }
};