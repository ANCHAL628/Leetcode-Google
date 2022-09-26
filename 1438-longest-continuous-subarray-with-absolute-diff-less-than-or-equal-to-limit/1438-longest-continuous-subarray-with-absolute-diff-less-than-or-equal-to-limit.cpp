class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        //use sliding window
        int i = 0 ;
        int j = 0 ;
        map<int,int>mp ;
        int maxi = INT_MIN ;
        while(j < nums.size()){
            mp[nums[j]] += 1 ;
            if(abs(mp.rbegin()->first - mp.begin()->first) <= limit){
                maxi = max(maxi,j-i+1) ;
            }
            else{
                while(i < nums.size() && abs(mp.rbegin()->first - mp.begin()->first) > limit){
                    mp[nums[i]]-- ;
                    if(mp[nums[i]] == 0){
                        mp.erase(nums[i]) ;
                    }
                    i++ ;
                }
            }
            j++ ;
        }
        return maxi ;
    }
};
//O(n)