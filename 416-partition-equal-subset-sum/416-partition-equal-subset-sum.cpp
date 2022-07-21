class Solution {
public:
    bool canPartition(vector<int>& nums) {
        unordered_map<string,bool>mp ;
        int sum = 0;
        int n = nums.size() ;
        for(int i = 0 ; i < nums.size() ; i++){
            sum += nums[i] ;
        }
        if(sum%2 != 0){
            return false ;
        }else{
            return isPossible(0,n,sum/2,nums,mp) ;
        }
        
    }
    bool isPossible(int startIn,int endInd,int target ,vector<int>&nums,unordered_map<string,bool>&mp){
         if(target == 0){
            return true ;
        }
         if(startIn >= endInd){
             return false ;
         }
         string current_key = to_string(startIn)+"-"+to_string(target) ;
         if(mp.find(current_key) != mp.end()){
             return mp[current_key] ;
         }
         bool consider = false ;
         if(nums[startIn] <= target){
            consider = isPossible(startIn+1,endInd,target-nums[startIn],nums,mp);
        }
        if(consider){
             mp[current_key] = consider;
            return true;
        }
        bool notconsider =  isPossible(startIn+1,endInd,target,nums,mp) ;
        //mp[startIn] = consider||notconsider ;
        mp[current_key] = consider||notconsider ;
        return mp[current_key] ;
    }
};
