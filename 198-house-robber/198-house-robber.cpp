class Solution {
public:
    int rob(vector<int>& nums) {
        unordered_map<int,int>mp ;
        return maxMoney(nums,0,mp) ;
    }
    int maxMoney(vector<int>&nums,int currentIn,unordered_map<int,int>&mp){
        if(currentIn >= nums.size()){
            return 0 ;
        }
        int currentk = currentIn ;
        if(mp.find(currentk) != mp.end()){
            return mp[currentk] ;
        }
        int robCurr = nums[currentIn]+maxMoney(nums,currentIn+2,mp) ;
        int notRob = maxMoney(nums,currentIn+1,mp) ;
        mp[currentk] = max(robCurr,notRob) ;
        return mp[currentk] ;
        
    }
};