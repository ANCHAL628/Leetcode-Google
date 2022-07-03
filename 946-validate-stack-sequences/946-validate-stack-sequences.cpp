class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
  /*   //approach O(n)
     //space complexity O(n)
       stack<int>s ;
       int j = 0 ;
       for(int i = 0 ; i < pushed.size() ; i++){
           s.push(pushed[i]) ;
           while(!s.empty() && s.top() == popped[j]){
               s.pop() ;
               j++ ;
           }
       }
        return s.empty() ;*/
        //approach = O(n)
        //space complexity = O(1)
        int k = -1 ;
        int j = 0  ;
        for(int i = 0 ; i < pushed.size() ; i++){
            pushed[++k] = pushed[i] ;
            while(!(k == -1) && pushed[k] == popped[j]){
                --k ;
                j++ ;
            }
        }
        return k == -1 ;
        
    }
};