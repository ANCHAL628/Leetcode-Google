class Solution {
public:
    //O(n) --> space
    //O(n) --> tc
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
         stack<int>fin ;
         int j = 0 ;
         for(int i = 0 ; i < pushed.size() ; i++){
             fin.push(pushed[i]) ;
             while(!(fin.empty()) && (j < popped.size())&&(fin.top() == popped[j])){
                 fin.pop() ;
                 j++ ;
             }
         }
        return fin.empty() ;
    }
};