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
   
    ListNode* mergeKLists(vector<ListNode*>& lists){
        int i = 0 ;
        //merge the list till there would not be more than one
        while(lists.size() > 1){
            vector<ListNode*>res ;
            for(int i = 0 ; i < lists.size() ; i+=2){
                ListNode* list1 = lists[i] ;
                ListNode* list2 = (i+1 < lists.size())?lists[i+1]:nullptr ;
                res.push_back(mergeLists(list1,list2)) ;
            }
            lists = res ;
        }
        return (lists.size())? lists[0]: nullptr;
    }
   ListNode* mergeLists(ListNode* list1,ListNode* list2){
       ListNode* head = new ListNode() ;
       ListNode* headptr = head ;
       while(list1 != nullptr && list2 != nullptr){
           if(list1->val <= list2->val){
              head->next = list1 ;
               list1 = list1->next ;
           }else{
               head->next = list2 ;
               list2 = list2->next ;
           }
           head = head->next ;
       }
       if(list1 == nullptr){
           head->next = list2 ;
       }else if(list2 == nullptr){
           head->next = list1 ;
       }
       return headptr->next ;
   }
};
