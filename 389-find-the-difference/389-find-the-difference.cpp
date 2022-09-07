class Solution {
public:
    char findTheDifference(string s, string t) {
       //string s and string t
   /*    int low = 0 ;
       int high = 0 ;
       char ans ;
       while(low < s.size() && high < t.size()){
           if(s[low] != s[high]){
               ans = s[low] ;
               return ans ;
           }else{
              low++ ;
              high++ ;
           }
       }
      if(!ans){
          return t[t.size()-1] ;
      }
      return ans ;*/
        char xOr = 0 ;
        for(int i = 0 ; i < s.size() ; i++){
            xOr ^= s[i] ;
        }
         for(int i = 0 ; i < t.size() ; i++){
            xOr ^= t[i] ;
        }
        return xOr ;
    }
};