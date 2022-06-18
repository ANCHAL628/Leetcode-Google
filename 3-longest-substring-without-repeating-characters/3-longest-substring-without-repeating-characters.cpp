class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>freq ;
        int start = 0 ;
        int end = 0 ;
        int maxi = 0 ;
        while(end < s.size()){
            freq[s[end]]++ ;
            if(freq.size() == end-start+1){
                maxi = max(maxi,end-start+1) ;
            }else if(freq.size() < end-start+1){
                while(freq.size() < end-start+1){
                    freq[s[start]]-- ;
                    if(freq[s[start]] == 0){
                        freq.erase(s[start]) ;
                    }
                    start++ ;
                }
            }
            end++ ;
        }
        return maxi ;
    }
};