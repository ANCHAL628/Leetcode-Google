class Solution {
public:
    //tc : O(n)
    //sc : O(1);
    int findTargetSumWays(vector<int>& nums, int target) {
        unordered_map<string,int>mp ;
        return NoOfWays(nums,target,0,mp) ;
    }
    int NoOfWays(vector<int>nums,int target,int currentIn,unordered_map<string,int>&mp){
        if(currentIn == nums.size() && target== 0){
            return 1 ;
        }if(currentIn == nums.size() && target!= 0){
            return 0 ;
        }
           string key = to_string(currentIn)+"-"+to_string(target) ;
           if(mp.find(key) != mp.end()){
               return mp[key] ;
           }
           int posSign = NoOfWays(nums,target-nums[currentIn],currentIn+1,mp) ;
           int negSign = NoOfWays(nums,target+nums[currentIn],currentIn+1,mp) ;
           mp[key] = negSign+posSign ;
           return mp[key] ;
    }
   
};