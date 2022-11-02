class Solution {
    //tc : O(n)
    //sc : O(n)
public:
   bool isMatching(char topOne, char currntOne){
        if(topOne == '{' && currntOne == '}'){
            return true ;
        }
       if(topOne == '(' && currntOne == ')'){
            return true ;
        }
       if(topOne == '[' && currntOne == ']'){
            return true ;
        }
       return false ;
   }
   bool isValid(string s) {
        stack<char>st ;
        for(auto i : s){
           if(i == '{' || i == '(' || i == '['){
               st.push(i) ;
           }else{
               if(st.empty()){
                   return false;
               }else if(i == '}' || i == ')' || i == ']'){
                   if(isMatching(st.top(),i)){
                       st.pop() ;
                   }else{
                       return false ;
                   }
                   
               }
           }
        }
       return (st.empty()) ;
    }
};
