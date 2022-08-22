class Solution {
public:
    char findTheDifference(string s, string t) {
         //simple iterate through O(n) check if they are equal else return last element
        //O(n) --> xor
        //count the frequency which will take O(n) --> timee
        char Xor = 0 ;
        for(int i = 0 ; i < s.size() ; i++){
            Xor ^= s[i] ;
        }
        for(int i = 0 ; i < t.size() ; i++){
            Xor ^= t[i] ;
        }
        return Xor ;
    }
};