class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int>mp ;
        int start = 0 ;
        int end = 0 ;
        int maxi = 0 ;
        while(end < s.size()){
            mp[s[end]]++ ;
            if(mp.size() == end-start+1){
                maxi = max(maxi,end-start+1) ;
            }else if(mp.size() < end-start+1){
                while((mp.size() < (end-start+1))&&(start < s.size())){
                    mp[s[start]]-- ;
                    if(mp[s[start]] == 0){
                       mp.erase(s[start])  ;
                    }
                    start++ ;
                    
                }
                      
        }
        end++ ;
                      }
                      return maxi ;
    }
};