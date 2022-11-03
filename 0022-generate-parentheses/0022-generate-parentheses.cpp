class Solution {
public:
    //O(exponential)
    vector<string> generateParenthesis(int n) {
        vector<string>parent ;
        string ans = "" ;
        generateP(0,0,ans,n,parent) ;
        return parent ;
    }
    void generateP(int currOpen,int closeBrac,string ans,int n,vector<string>&parent){
        if(currOpen == closeBrac && currOpen == n){
            parent.push_back(ans) ;
            return ;
        }if(currOpen < n){
            generateP(currOpen+1,closeBrac,ans+'(',n,parent) ;
        }
        if(closeBrac < currOpen){
            generateP(currOpen,closeBrac+1,ans+')',n,parent) ;
        }
    }
};