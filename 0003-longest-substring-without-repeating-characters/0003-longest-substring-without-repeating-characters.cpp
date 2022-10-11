class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //find substring and than iterate through each substring and then count each element
        //sliding window 
        unordered_map<char,int>mp ;
        int low = 0 ;
        int high = 0 ;
        int maxi = 0 ;
        while(high < s.size()){
            mp[s[high]]++ ;
           // high++ ;
            if(mp.size() == high-low+1){
                maxi = max(maxi,high-low+1) ;
            }else if(mp.size() < high-low+1){
                while(mp.size() < high-low+1){
                    mp[s[low]]-- ;
                    if(mp[s[low]] == 0){
                        mp.erase(s[low]) ;
                    }
                    low++ ;
                }
            }
            high++ ;
        }
        //
        return maxi ;
    }
};