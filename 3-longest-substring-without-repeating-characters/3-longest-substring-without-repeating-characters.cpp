class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //o(n^3) fin all the substring then find the longest substring 
        //O(n) ->sliding window
        unordered_map<char,int>mp ;
        int start = 0 ;
        int end = 0 ;
        int maxi = 0 ;
        while(end < s.size()){
            mp[s[end]]++ ;
            if(mp.size() == end-start+1){
                maxi = max(maxi,end-start+1) ;
            }else if(mp.size() < end-start+1){
                while(mp.size() < end-start+1){
                    mp[s[start]]-- ;
                    if(mp[s[start]] == 0){
                        mp.erase(s[start]) ;
                    }
                    start++ ;
                }
            }
            end++ ;
        }
        return maxi ;
    }
};