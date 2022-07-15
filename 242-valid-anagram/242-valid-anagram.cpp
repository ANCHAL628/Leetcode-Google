class Solution {
public:
    bool isAnagram(string s, string t) {
        //sorting both the strings and thn return 
        sort(s.begin(),s.end()) ;
        sort(t.begin(),t.end()) ;
        return s == t ;
    }
};