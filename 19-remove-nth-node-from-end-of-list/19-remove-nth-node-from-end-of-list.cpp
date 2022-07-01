/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      //twopointr
        ListNode* node = new ListNode(NULL)  ;
        node->next = head ;
        ListNode* start = node ;
        ListNode* end = node ;
        for(int i = 1 ; i <= n ; i++){
            start = start->next ;
        }
        while(start->next != NULL){
            start = start->next ;
            end = end->next ;
        }
        end->next = end->next->next ;
        return node->next ;
        
        
    }
};