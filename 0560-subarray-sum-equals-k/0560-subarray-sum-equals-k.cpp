class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int prefixSum = 0 ;
        int ans =  0 ;
        unordered_map<int,int>mp ;
        mp.insert({prefixSum,1}) ;
        for(int i = 0 ; i < nums.size() ; i++){
            prefixSum += nums[i] ;
            if(mp.find(prefixSum-k) != mp.end()){
                ans += mp[prefixSum-k] ;
                //mp[prefixSum]++ ;
            }if(mp.find(prefixSum) != mp.end()){
               // ans += mp[prefixSum-k] ;
                mp[prefixSum]++ ;
            }else{
                mp.insert({prefixSum,1}) ;
            }
        }
        return ans ;
    }
};