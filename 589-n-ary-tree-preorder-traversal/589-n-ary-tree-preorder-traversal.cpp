/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
       vector<int>nary ;
       naryPre(root,nary)  ;
       return nary ;
    }
    void naryPre(Node* root,vector<int>&nary){
        if(root == NULL){
            return ;
        }
        nary.push_back(root->val) ;
        vector<Node*>child = root->children ;
        for(auto it : child){
            naryPre(it,nary) ;
        }
        return ;
    }
};