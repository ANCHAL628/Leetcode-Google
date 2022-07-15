class Solution {
    //tc : O(n)
    //sc : O(n)
public:
    bool isMatching(char x , char y) {
        return ((x == '(' && y == ')') || (x == '{' && y == '}')  || (x == '[' && y == ']')) ;
    }
    bool isValid(string s) {
        stack<char>s1 ;
        for(auto it : s){
            if(it == '(' || it == '[' || it == '{'){
                s1.push(it) ;
            }else{
                if(s1.empty()){
                   return false ;
                }else if(!isMatching(s1.top(),it)){
                   return false  ;
                }else{
                   s1.pop() ;
                }
            }
        }
        return s1.empty() ;
    }
};