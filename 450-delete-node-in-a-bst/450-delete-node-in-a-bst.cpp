/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    

    int minVal(TreeNode *root)      {
        
        TreeNode *temp = root;
        while(temp->left !=NULL )
            temp = temp->left;
        return temp->val;
        
    }
    
    
    TreeNode* deleteNode(TreeNode* root, int key) {
        
        if(root==NULL)
            return NULL;
        
        if(root->val == key)    {
            
            //no child
            if(root->left == NULL && root->right == NULL)   {
                delete root;
                return NULL;
            }
            
            //1 child only : left child
            if(root->left != NULL && root->right == NULL)   {
                TreeNode *temp = root->left;
                delete root;
                return temp;
            }
            //1 child only : right child
            if(root->left == NULL && root->right !=NULL )   {
                TreeNode *temp = root->right;
                delete root;
                return temp;
            }
            
            //2 child
            if(root->left != NULL && root->right != NULL )  {
                int mini = minVal(root->right);          //finding min val in right subtree to use
                root->val = mini;                        //replacing the root val with mini.
                root->right = deleteNode(root->right,mini); //deleting mini from right subtree.
                return root;
            }          
        
        }
        
        if( root->val > key )   {
            root->left = deleteNode(root->left,key);
            return root;
        }
        else if(root->val < key )   {
            root->right = deleteNode(root->right,key);
            return root;
        }
        
        return root;
    }
};