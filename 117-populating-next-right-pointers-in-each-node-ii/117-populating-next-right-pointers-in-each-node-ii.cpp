/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
          if(root == NULL){
              return root ;
          }
          queue<Node*>nodes ;
      //    vector<Node*>ans ;
          nodes.push(root) ;
         while(!nodes.empty()){
             vector<Node*>ans ;
             int size = nodes.size() ;
             Node* previousNode = NULL;
             for(int i = 0 ; i < size ; i++){
                 Node* currNode = nodes.front() ;
                 nodes.pop() ;
                 //ans.push_back(currNode) ;
                 if(i != 0){
                     previousNode->next = currNode ;
                 }
                 previousNode = currNode ;
                 if(currNode->left != NULL){
                     nodes.push(currNode->left) ;
                 }
                 if(currNode->right != NULL){
                     nodes.push(currNode->right) ;
                 }
               
             }
           /*  for(int i = 0 ; i < ans.size() ; i++){
                 if(i == ans.size()-1){
                     ans[i]->next = NULL ;
                 }else{
                     ans[i]->next = ans[i+1] ;
                 }
             }*/
             
         }
        return root ;
    }
};