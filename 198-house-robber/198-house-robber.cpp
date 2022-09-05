class Solution {
public:
    //extra
    int rob(vector<int>& nums) {
       //if he can rob current one then he cannot rob the next one
        unordered_map<int,int>mp ;
        return maxRobbery(nums,mp,0) ;
    }
    int maxRobbery(vector<int>&nums,unordered_map<int,int>&mp,int currentIn){
        if(currentIn >= nums.size()){
            return 0 ;
        }
        int currentKey = currentIn ;
        if(mp.find(currentKey) != mp.end()){
            return mp[currentKey] ;
        }
        int currRob = nums[currentKey]+maxRobbery(nums,mp,currentIn+2) ;
        int dontR = maxRobbery(nums,mp,currentIn+1) ;
        mp[currentKey] = max(currRob,dontR) ;
        return mp[currentKey] ;
    }
};