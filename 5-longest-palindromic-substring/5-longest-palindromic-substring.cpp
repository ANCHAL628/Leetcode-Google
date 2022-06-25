class Solution {
public:
    string longestPalindrome(string s) {
      //O(n^3) by generating all the substring and then check for each in a particular substring whehter its doing or not
      //O(n^2)
      //we will be checking by the length of substring 
       //odd length
        int maxi = 1 ;
        int start = 0 ;
        int end = 0 ;
      //  int l = 
        int n = s.size() ;
        //for odd length
        for(int i = 0 ; i < n-1 ; i++){
          int l = i ;
          int r = i ;
          while(l >= 0 && r < n){
              if(s[l] == s[r]){
                  l-- ;
                  r++ ;
             }else{
                  break ;
             }
          }
         if(maxi < r-l-1){
            maxi = r-l-1 ;
            start = l+1 ;
            end = r-1 ;
          }
        }
        //for even length
         for(int i = 0 ; i < n-1 ; i++){
          int l = i ;
          int r = i+1 ;
          while(l >= 0 && r < n){
              if(s[l] == s[r]){
                  l--;
                  r++ ;
             }else{
                  break ;
             }
          }
         if(maxi < r-l-1){
            maxi = r-l-1 ;
            start = l+1 ;
            end = r-1 ;
          }
        }
        return s.substr(start,maxi) ;
      
    }
};